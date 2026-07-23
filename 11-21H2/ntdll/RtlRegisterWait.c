/*
 * XREFs of RtlRegisterWait @ 0x180070540
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TpSetWaitEx @ 0x18001EB80 (TpSetWaitEx.c)
 *     TpAllocWait @ 0x18001F9C0 (TpAllocWait.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlpTpResumeImpersonation @ 0x1800707A0 (RtlpTpResumeImpersonation.c)
 *     RtlpTpInitializeData @ 0x1800707E4 (RtlpTpInitializeData.c)
 *     RtlpTpRevertCapture @ 0x180070858 (RtlpTpRevertCapture.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 */

NTSTATUS __cdecl RtlRegisterWait(
        PHANDLE WaitHandle,
        HANDLE Handle,
        WAITORTIMERCALLBACKFUNC Function,
        PVOID Context,
        ULONG Milliseconds,
        ULONG Flags)
{
  int v8; // edi
  char *Heap; // rax
  HANDLE *v10; // rbx
  PTP_WAIT *v11; // r12
  int v12; // eax
  char v14; // [rsp+20h] [rbp-98h]
  int v15; // [rsp+24h] [rbp-94h]
  PVOID BaseAddress; // [rsp+28h] [rbp-90h]
  HANDLE TokenHandle; // [rsp+30h] [rbp-88h] BYREF
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+40h] [rbp-78h] BYREF

  v14 = 0;
  TokenHandle = 0LL;
  BaseAddress = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  if ( (char *)Handle - 1 > (char *)0xFFFFFFFFFFFFFFFCLL || !Function )
    return -1073741811;
  *WaitHandle = 0LL;
  v8 = RtlpTpRevertCapture(&TokenHandle);
  v15 = v8;
  if ( v8 < 0 )
  {
    v10 = 0LL;
  }
  else
  {
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
    v10 = (HANDLE *)Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      v11 = (PTP_WAIT *)(Heap + 48);
      *((_QWORD *)Heap + 6) = 0LL;
      v8 = RtlpTpInitializeData((PHANDLE)Heap);
      v15 = v8;
      if ( v8 >= 0 )
      {
        v14 = 1;
        v10[2] = 0LL;
        *((_DWORD *)v10 + 6) = 0;
        v10[4] = Function;
        v10[5] = Context;
        v10[7] = Handle;
        if ( Milliseconds == -1 )
        {
          v10[8] = 0LL;
          v10[9] = 0LL;
        }
        else
        {
          v10[8] = (HANDLE)Milliseconds;
          v10[8] = (HANDLE)(-10000LL * Milliseconds);
          v10[9] = v10 + 8;
        }
        v10[10] = 0LL;
        *((_DWORD *)v10 + 22) = 0;
        CallbackEnviron.Version = 3;
        memset(&CallbackEnviron.Pool, 0, 52);
        CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
        CallbackEnviron.Size = 72;
        v12 = 0;
        if ( (Flags & 0xC4) != 0 )
        {
          v12 = 2;
          CallbackEnviron.u.Flags = 2;
        }
        if ( (Flags & 0x10) != 0 )
          CallbackEnviron.u.Flags = v12 | 1;
        CallbackEnviron.FinalizationCallback = (void (__fastcall *)(struct _TP_CALLBACK_INSTANCE *, void *))RtlpTpWaitFinalizationCallback;
        v8 = TpAllocWait(v11, RtlpTpWaitCallback, v10, &CallbackEnviron);
        v15 = v8;
        if ( v8 >= 0 )
        {
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v10 + 2);
          *WaitHandle = v10;
          TpSetWaitEx(*v11, Handle, (PLARGE_INTEGER)v10[9], 0LL);
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v10 + 2);
          v10 = 0LL;
          BaseAddress = 0LL;
          v8 = 0;
          v15 = 0;
        }
      }
    }
    else
    {
      v8 = -1073741801;
      v15 = -1073741801;
    }
  }
  if ( v10 )
  {
    if ( v14 )
    {
      if ( *v10 )
        NtClose(*v10);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v8 = v15;
  }
  RtlpTpResumeImpersonation(TokenHandle);
  return v8;
}

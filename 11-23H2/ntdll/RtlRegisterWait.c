/*
 * XREFs of RtlRegisterWait @ 0x18004D620
 * Callers:
 *     <none>
 * Callees:
 *     TpSetWaitEx @ 0x180030740 (TpSetWaitEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlpTpRevertCapture @ 0x18004D870 (RtlpTpRevertCapture.c)
 *     RtlpTpInitializeData @ 0x18004D8F0 (RtlpTpInitializeData.c)
 *     TpAllocWait @ 0x18004D980 (TpAllocWait.c)
 *     RtlpTpResumeImpersonation @ 0x18004DB1C (RtlpTpResumeImpersonation.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 */

NTSTATUS __cdecl RtlRegisterWait(
        PHANDLE WaitHandle,
        HANDLE Handle,
        WAITORTIMERCALLBACKFUNC Function,
        PVOID Context,
        ULONG Milliseconds,
        ULONG Flags)
{
  int v9; // edi
  HANDLE *Heap; // rax
  HANDLE *v11; // rbx
  int v12; // eax
  char v14; // [rsp+20h] [rbp-98h]
  int v15; // [rsp+24h] [rbp-94h]
  HANDLE *BaseAddress; // [rsp+28h] [rbp-90h]
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
  v9 = RtlpTpRevertCapture(&TokenHandle);
  v15 = v9;
  if ( v9 < 0 )
  {
    v11 = 0LL;
  }
  else
  {
    Heap = (HANDLE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
    v11 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      Heap[6] = 0LL;
      v9 = RtlpTpInitializeData(Heap);
      v15 = v9;
      if ( v9 >= 0 )
      {
        v14 = 1;
        v11[2] = 0LL;
        *((_DWORD *)v11 + 6) = 0;
        v11[4] = Function;
        v11[5] = Context;
        v11[7] = Handle;
        if ( Milliseconds == -1 )
        {
          v11[8] = 0LL;
          v11[9] = 0LL;
        }
        else
        {
          v11[8] = (HANDLE)Milliseconds;
          v11[8] = (HANDLE)(-10000LL * Milliseconds);
          v11[9] = v11 + 8;
        }
        v11[10] = 0LL;
        *((_DWORD *)v11 + 22) = 0;
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
        v9 = TpAllocWait((PTP_WAIT *)v11 + 6, RtlpTpWaitCallback, v11, &CallbackEnviron);
        v15 = v9;
        if ( v9 >= 0 )
        {
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v11 + 2);
          *WaitHandle = v11;
          TpSetWaitEx((PTP_WAIT)v11[6], Handle, (PLARGE_INTEGER)v11[9], 0LL);
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v11 + 2);
          v11 = 0LL;
          BaseAddress = 0LL;
          v9 = 0;
          v15 = 0;
        }
      }
    }
    else
    {
      v9 = -1073741801;
      v15 = -1073741801;
    }
  }
  if ( v11 )
  {
    if ( v14 )
    {
      if ( *v11 )
        NtClose(*v11);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v9 = v15;
  }
  RtlpTpResumeImpersonation(TokenHandle);
  return v9;
}

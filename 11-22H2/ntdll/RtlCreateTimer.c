/*
 * XREFs of RtlCreateTimer @ 0x18004D510
 * Callers:
 *     RtlSetTimer @ 0x180126910 (RtlSetTimer.c)
 * Callees:
 *     TpAllocTimer @ 0x18002E870 (TpAllocTimer.c)
 *     TpSetTimerEx @ 0x180032DB0 (TpSetTimerEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlpTpRevertCapture @ 0x18004D9D0 (RtlpTpRevertCapture.c)
 *     RtlpTpInitializeData @ 0x18004DA50 (RtlpTpInitializeData.c)
 *     RtlpTpResumeImpersonation @ 0x18004DC7C (RtlpTpResumeImpersonation.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 */

NTSTATUS __cdecl RtlCreateTimer(
        HANDLE TimerQueueHandle,
        PHANDLE Handle,
        WAITORTIMERCALLBACKFUNC Function,
        PVOID Context,
        ULONG DueTime,
        ULONG Period,
        ULONG Flags)
{
  int v10; // ebx
  char *Heap; // rax
  _QWORD *v12; // rdi
  PTP_TIMER *v13; // r12
  int v14; // eax
  _QWORD *v15; // rdx
  __int64 v16; // r8
  void *v18; // rcx
  int v19; // [rsp+24h] [rbp-94h]
  _QWORD *BaseAddress; // [rsp+28h] [rbp-90h]
  HANDLE TokenHandle; // [rsp+30h] [rbp-88h] BYREF
  LARGE_INTEGER v22; // [rsp+38h] [rbp-80h] BYREF
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+40h] [rbp-78h] BYREF

  TokenHandle = 0LL;
  BaseAddress = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  *Handle = 0LL;
  v10 = RtlpTpRevertCapture(&TokenHandle);
  v19 = v10;
  if ( v10 < 0 )
  {
    v12 = 0LL;
  }
  else
  {
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
    v12 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      v13 = (PTP_TIMER *)(Heap + 64);
      *((_QWORD *)Heap + 8) = 0LL;
      *((_DWORD *)Heap + 23) = 0;
      v10 = RtlpTpInitializeData((PHANDLE)Heap + 2);
      v19 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
      v12[4] = Function;
      v12[5] = Context;
      *((_DWORD *)v12 + 12) = 0;
      *((_BYTE *)v12 + 88) = Period != 0;
      v12[7] = TimerQueueHandle;
      v12[9] = 0LL;
      v12[10] = 0LL;
      CallbackEnviron.Version = 3;
      memset(&CallbackEnviron.Pool, 0, 52);
      CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
      CallbackEnviron.Size = 72;
      v14 = 0;
      if ( (Flags & 0xE0) != 0 )
      {
        v14 = 2;
        CallbackEnviron.u.Flags = 2;
      }
      if ( (Flags & 0x10) != 0 )
        CallbackEnviron.u.Flags = v14 | 1;
      CallbackEnviron.FinalizationCallback = (void (__fastcall *)(struct _TP_CALLBACK_INSTANCE *, void *))RtlpTpTimerFinalizationCallback;
      v10 = TpAllocTimer(v13, (PTP_TIMER_CALLBACK)RtlpTpTimerCallback, v12, &CallbackEnviron);
      v19 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
      v22.QuadPart = -10000LL * DueTime;
      _InterlockedIncrement((volatile signed __int32 *)TimerQueueHandle);
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)TimerQueueHandle + 1);
      v15 = (char *)TimerQueueHandle + 24;
      v16 = *((_QWORD *)TimerQueueHandle + 3);
      if ( *(HANDLE *)(v16 + 8) != (char *)TimerQueueHandle + 24 )
        __fastfail(3u);
      *BaseAddress = v16;
      BaseAddress[1] = v15;
      *(_QWORD *)(v16 + 8) = BaseAddress;
      *v15 = BaseAddress;
      *Handle = BaseAddress;
      TpSetTimerEx(*v13, &v22, Period, 0);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)TimerQueueHandle + 1);
      v12 = 0LL;
      BaseAddress = 0LL;
      v10 = 0;
    }
    else
    {
      v10 = -1073741801;
    }
    v19 = v10;
  }
LABEL_16:
  if ( v12 )
  {
    v18 = (void *)v12[2];
    if ( v18 )
      NtClose(v18);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v10 = v19;
  }
  RtlpTpResumeImpersonation(TokenHandle);
  return v10;
}

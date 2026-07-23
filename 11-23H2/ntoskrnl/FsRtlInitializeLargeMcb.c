/*
 * XREFs of FsRtlInitializeLargeMcb @ 0x14034AD90
 * Callers:
 *     FsRtlInitializeMcb @ 0x14093DBD0 (FsRtlInitializeMcb.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402B6DC0 (ExAllocateFromNPagedLookasideList.c)
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 *     FsRtlInitializeBaseMcbEx @ 0x14034AE00 (FsRtlInitializeBaseMcbEx.c)
 */

void __stdcall FsRtlInitializeLargeMcb(PLARGE_MCB Mcb, POOL_TYPE PoolType)
{
  struct _FAST_MUTEX *v3; // rax
  LIST_ENTRY *p_WaitListHead; // rax

  FsRtlInitializeBaseMcbEx(&Mcb->BaseMcb, PoolType, 1u);
  v3 = (struct _FAST_MUTEX *)ExAllocateFromNPagedLookasideList(&FsRtlFastMutexLookasideList);
  Mcb->GuardedMutex = v3;
  if ( !v3 )
    RtlRaiseStatus(-1073741670);
  v3->Count = 1;
  v3->Owner = 0LL;
  v3->Contention = 0;
  LOWORD(v3->Event.Header.Lock) = 1;
  v3->Event.Header.Size = 6;
  v3->Event.Header.SignalState = 0;
  p_WaitListHead = &v3->Event.Header.WaitListHead;
  p_WaitListHead->Blink = p_WaitListHead;
  p_WaitListHead->Flink = p_WaitListHead;
}

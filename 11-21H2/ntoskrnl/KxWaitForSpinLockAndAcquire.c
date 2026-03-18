/*
 * XREFs of KxWaitForSpinLockAndAcquire @ 0x140211E70
 * Callers:
 *     IopQueueIrpToFileObject @ 0x140211BD0 (IopQueueIrpToFileObject.c)
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     PsGetThreadProperty @ 0x140223C50 (PsGetThreadProperty.c)
 *     KiCallInterruptServiceRoutine @ 0x140294110 (KiCallInterruptServiceRoutine.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402A7370 (IopCancelIrpsInFileObjectList.c)
 *     KiExecuteAllDpcs @ 0x1402A9790 (KiExecuteAllDpcs.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopQueueThreadIrp @ 0x1402AE1B0 (IopQueueThreadIrp.c)
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     ExpSetTimerObject @ 0x1402E33D0 (ExpSetTimerObject.c)
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 *     PpmUpdatePerformanceFeedback @ 0x1403072A0 (PpmUpdatePerformanceFeedback.c)
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 *     IopDequeueIrpFromThread @ 0x1403489B0 (IopDequeueIrpFromThread.c)
 *     NtCancelTimer @ 0x140356F50 (NtCancelTimer.c)
 *     KiAcquireSpinLockInstrumented @ 0x14045A310 (KiAcquireSpinLockInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14039D930 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14039EA10 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KxWaitForSpinLockAndAcquire(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v3; // ebx
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v6; // rcx
  int v7; // eax
  int v8; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  while ( 1 )
  {
    do
    {
      if ( (++v3 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v3);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)a1 );
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v7 = SchedulerAssist[6];
        SchedulerAssist[6] = v7 + 1;
        if ( v7 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64(a1, 0LL) )
      break;
    v6 = CurrentPrcb->SchedulerAssist;
    if ( v6 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v8 = v6[6] - 1;
        v6[6] = v8;
        if ( !v8 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  return v3;
}

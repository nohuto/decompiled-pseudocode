/*
 * XREFs of PopCheckForWork @ 0x14032CBB8
 * Callers:
 *     PoRegisterDeviceForIdleDetection @ 0x140305040 (PoRegisterDeviceForIdleDetection.c)
 *     PopCheckForIdleness @ 0x14032C620 (PopCheckForIdleness.c)
 *     PopSetNotificationWork @ 0x14032CB30 (PopSetNotificationWork.c)
 *     PopHandleSystemIdleReset @ 0x1403B4A98 (PopHandleSystemIdleReset.c)
 *     PoNotifySystemTimeSet @ 0x1403B64C8 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x14058D884 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x14058D9E0 (PopCoalesingTimerDpcCallback.c)
 *     PopBatteryApplyCompositeState @ 0x140870480 (PopBatteryApplyCompositeState.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140994090 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250E80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PopCheckForWork()
{
  __int64 result; // rax
  unsigned __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v4; // zf

  result = (unsigned int)PopWorkerStatus;
  if ( (PopWorkerStatus & PopWorkerPending) != 0 )
  {
    result = (__int64)KeGetCurrentThread();
    if ( PopPolicyLockThread != result )
    {
      v1 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
      if ( PopWorkerStatus < 0 )
      {
        PopWorkerStatus &= ~0x80000000;
        ExQueueWorkItem(&PopPolicyWorker, DelayedWorkQueue);
      }
      result = KxReleaseSpinLock((volatile signed __int64 *)&PopWorkerSpinLock);
      if ( KiIrqlFlags )
      {
        result = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0
          && (unsigned __int8)result <= 0xFu
          && (unsigned __int8)v1 <= 0xFu
          && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
          v4 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v4 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v1);
    }
  }
  return result;
}

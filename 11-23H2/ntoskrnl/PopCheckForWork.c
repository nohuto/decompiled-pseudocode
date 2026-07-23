/*
 * XREFs of PopCheckForWork @ 0x14032CE48
 * Callers:
 *     PoRegisterDeviceForIdleDetection @ 0x1403052D0 (PoRegisterDeviceForIdleDetection.c)
 *     PopCheckForIdleness @ 0x14032C8B0 (PopCheckForIdleness.c)
 *     PopSetNotificationWork @ 0x14032CDC0 (PopSetNotificationWork.c)
 *     PopHandleSystemIdleReset @ 0x1403B4C78 (PopHandleSystemIdleReset.c)
 *     PoNotifySystemTimeSet @ 0x1403B66A8 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x14058DD74 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x14058DED0 (PopCoalesingTimerDpcCallback.c)
 *     PopBatteryApplyCompositeState @ 0x1408706C0 (PopBatteryApplyCompositeState.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140994290 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
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
      if ( (_DWORD)KiIrqlFlags )
      {
        result = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
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

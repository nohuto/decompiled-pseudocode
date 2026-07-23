/*
 * XREFs of PopGetPolicyWorker @ 0x14032CDF4
 * Callers:
 *     PopCheckForIdleness @ 0x14032C8B0 (PopCheckForIdleness.c)
 *     PopSetNotificationWork @ 0x14032CDC0 (PopSetNotificationWork.c)
 *     PopHandleSystemIdleReset @ 0x1403B4C78 (PopHandleSystemIdleReset.c)
 *     PoNotifySystemTimeSet @ 0x1403B66A8 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x14058DD74 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x14058DED0 (PopCoalesingTimerDpcCallback.c)
 *     PopBatteryApplyCompositeState @ 0x1408706C0 (PopBatteryApplyCompositeState.c)
 *     PopExecutePowerAction @ 0x1409899F4 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x14098A330 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x14098A520 (PopPolicyWorkerActionPromote.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140994290 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopGetPolicyWorker(int a1)
{
  KIRQL v2; // al
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  PopWorkerPending |= a1;
  v3 = v2;
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopWorkerSpinLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v3);
  return result;
}

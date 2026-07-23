/*
 * XREFs of PopGetPolicyWorker @ 0x14032C984
 * Callers:
 *     PopCheckForIdleness @ 0x14032C440 (PopCheckForIdleness.c)
 *     PopSetNotificationWork @ 0x14032C950 (PopSetNotificationWork.c)
 *     PopHandleSystemIdleReset @ 0x1403B4408 (PopHandleSystemIdleReset.c)
 *     PoNotifySystemTimeSet @ 0x1403B5E38 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x14058D914 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x14058DA70 (PopCoalesingTimerDpcCallback.c)
 *     PopBatteryApplyCompositeState @ 0x140870950 (PopBatteryApplyCompositeState.c)
 *     PopExecutePowerAction @ 0x1409898A4 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x14098A1E0 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x14098A3D0 (PopPolicyWorkerActionPromote.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140994140 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
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

/*
 * XREFs of PopDeepSleepSetDisengageReason @ 0x14028E848
 * Callers:
 *     PopQueueQuerySetIrp @ 0x14028E9CC (PopQueueQuerySetIrp.c)
 *     PopIncrementPowerSettingPendingUpdates @ 0x14031D5FC (PopIncrementPowerSettingPendingUpdates.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140586670 (PpmUpdatePlatformIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x14058B35C (PopFxPlatformStateAvailable.c)
 *     PopSetPowerActionState @ 0x14058F4C4 (PopSetPowerActionState.c)
 *     PopThermalEventTransitionDisableDeepSleep @ 0x14058F948 (PopThermalEventTransitionDisableDeepSleep.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x14059E0B0 (PopIdleAoAcDozeS4TimerCallback.c)
 *     PopCheckResiliencyScenarios @ 0x140700E80 (PopCheckResiliencyScenarios.c)
 *     PopPowerInformationInternal @ 0x1407ED06C (PopPowerInformationInternal.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x140983630 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopEnforceDeepSleep @ 0x140994184 (PopEnforceDeepSleep.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250E80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x14028E8DC (PopDiagTraceSetDeepSleepConstraint.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x14028E938 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeClearForceIdle @ 0x14057CBA0 (KeClearForceIdle.c)
 */

__int64 __fastcall PopDeepSleepSetDisengageReason(unsigned int a1)
{
  int v2; // ebx
  KIRQL v3; // al
  int v4; // ebp
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf

  v2 = 1 << a1;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
  v4 = PopDeepSleepDisengageReasonMask;
  v5 = v3;
  PopDeepSleepDisengageReasonMask |= v2;
  if ( v4 != PopDeepSleepDisengageReasonMask )
  {
    PopDiagTraceSetDeepSleepConstraint(a1);
    LOBYTE(v6) = 1;
    PopDeepSleepResiliencyPhaseAccountingUpdate(a1, v6);
    if ( !v4 )
    {
      if ( PopIsForceIdleSet )
      {
        KeClearForceIdle();
        PopIsForceIdleSet = 0;
      }
      if ( !PopDeepSleepEvaluateWorkItemQueued )
      {
        PopDeepSleepEvaluateWorkItemQueued = 1;
        ExQueueWorkItem(&PopDeepSleepEvaluateWorkItem, DelayedWorkQueue);
      }
    }
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopDeepSleepDisengageReasonLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v5 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v10 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  return result;
}

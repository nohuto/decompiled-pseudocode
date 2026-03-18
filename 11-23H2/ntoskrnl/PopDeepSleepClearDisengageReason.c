/*
 * XREFs of PopDeepSleepClearDisengageReason @ 0x14028E75C
 * Callers:
 *     PopDequeueQuerySetIrp @ 0x14028E3BC (PopDequeueQuerySetIrp.c)
 *     PopDecrementPowerSettingPendingUpdates @ 0x14031D688 (PopDecrementPowerSettingPendingUpdates.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140586670 (PpmUpdatePlatformIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x14058B35C (PopFxPlatformStateAvailable.c)
 *     PopSetPowerActionState @ 0x14058F4C4 (PopSetPowerActionState.c)
 *     PopThermalEventTransitionEnableDeepSleep @ 0x14058FA38 (PopThermalEventTransitionEnableDeepSleep.c)
 *     PopThermalEventTransitionTimerCallback @ 0x14058FAF0 (PopThermalEventTransitionTimerCallback.c)
 *     PopCheckResiliencyScenarios @ 0x140700E80 (PopCheckResiliencyScenarios.c)
 *     PopPowerInformationInternal @ 0x1407ED06C (PopPowerInformationInternal.c)
 *     PopDirectedDripsWorkerRoutine @ 0x140815710 (PopDirectedDripsWorkerRoutine.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140983530 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopEnforceDeepSleep @ 0x140994184 (PopEnforceDeepSleep.c)
 *     PopIdleAoAcDozeToS4 @ 0x14099BD50 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250E80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x14028E7EC (PopDiagTraceClearDeepSleepConstraint.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x14028E938 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeSetForceIdle @ 0x14057CC94 (KeSetForceIdle.c)
 */

__int64 __fastcall PopDeepSleepClearDisengageReason(unsigned int a1)
{
  int v2; // ebx
  KIRQL v3; // al
  int v4; // edx
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf

  v2 = 1 << a1;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
  v4 = PopDeepSleepDisengageReasonMask;
  v5 = v3;
  PopDeepSleepDisengageReasonMask &= ~v2;
  if ( v4 != PopDeepSleepDisengageReasonMask )
  {
    PopDiagTraceClearDeepSleepConstraint(a1);
    PopDeepSleepResiliencyPhaseAccountingUpdate(a1, 0LL);
    if ( !PopDeepSleepDisengageReasonMask )
    {
      if ( (PopAggressiveStandbyAppliedActions & 4) != 0 )
      {
        KeSetForceIdle();
        PopIsForceIdleSet = 1;
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
      v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v9 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  return result;
}

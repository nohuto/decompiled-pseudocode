/*
 * XREFs of KeCancelTimer @ 0x140356EB0
 * Callers:
 *     PopSetWatchdog @ 0x140256998 (PopSetWatchdog.c)
 *     MiUnlinkUnusedControlArea @ 0x14028AF80 (MiUnlinkUnusedControlArea.c)
 *     CmpArmLazyWriter @ 0x1402A4320 (CmpArmLazyWriter.c)
 *     EtwpResetFlushTimer @ 0x1402E2BF8 (EtwpResetFlushTimer.c)
 *     ExpSetTimerObject @ 0x1402E33D0 (ExpSetTimerObject.c)
 *     PopFxProcessWork @ 0x140354CBC (PopFxProcessWork.c)
 *     ExpDeleteTimer @ 0x140356E00 (ExpDeleteTimer.c)
 *     NtCancelTimer @ 0x140356F50 (NtCancelTimer.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1403580A8 (PopFxDisableWorkOrderWatchdog.c)
 *     PfSnCancelTraceTimer @ 0x14035F934 (PfSnCancelTraceTimer.c)
 *     PopSetPowerActionWatchdogState @ 0x14038B9A0 (PopSetPowerActionWatchdogState.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140398DF0 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopIgnoreBatteryStatusChange @ 0x140399318 (PopIgnoreBatteryStatusChange.c)
 *     PopDequeueQuerySetIrp @ 0x1403A4EC4 (PopDequeueQuerySetIrp.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1403D93F4 (PopFxUpdateDeviceIdleTimer.c)
 *     IopDisableTimer @ 0x1403DDF0C (IopDisableTimer.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x14053BFB8 (CcDeletePrivateVolumeCacheMap.c)
 *     CcDeletePartition @ 0x14053DAFC (CcDeletePartition.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140576200 (KiInvokeInterruptServiceRoutine.c)
 *     PopCoalescingSetActiveState @ 0x1405CFB5C (PopCoalescingSetActiveState.c)
 *     DifKeCancelTimerWrapper @ 0x1406127D0 (DifKeCancelTimerWrapper.c)
 *     ExpCancelTimer @ 0x14063DFAC (ExpCancelTimer.c)
 *     EtwpFreeLoggerContext @ 0x1406D1830 (EtwpFreeLoggerContext.c)
 *     PfSnPowerBoost @ 0x1406E18A0 (PfSnPowerBoost.c)
 *     PopUserShutdownCancelled @ 0x1406EADD4 (PopUserShutdownCancelled.c)
 *     PiDrvDbLoadNode @ 0x1407D4E34 (PiDrvDbLoadNode.c)
 *     PopBatteryWorker @ 0x1407EDFC0 (PopBatteryWorker.c)
 *     CmSetLazyFlushState @ 0x1407FFF4C (CmSetLazyFlushState.c)
 *     KiStartDpcThread @ 0x140829870 (KiStartDpcThread.c)
 *     ExpRefreshTimeZoneInformation @ 0x140835844 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x1408553A0 (PpmWmiDispatch.c)
 *     HalpCmcWorkerRoutine @ 0x140908680 (HalpCmcWorkerRoutine.c)
 *     CmThawRegistry @ 0x140918E48 (CmThawRegistry.c)
 *     CmpShutdownWorkers @ 0x14091D790 (CmpShutdownWorkers.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x14092BDD0 (DbgkpWerDeferredWriteRoutine.c)
 *     PopCoalescingNotify @ 0x14098F180 (PopCoalescingNotify.c)
 *     TtmiResetInactivityTimer @ 0x1409A332C (TtmiResetInactivityTimer.c)
 *     TtmpResetEvaluationTimer @ 0x1409A3B04 (TtmpResetEvaluationTimer.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1409F80D4 (ExpTimeZoneCleanupSiloState.c)
 *     ExpPartitionDestroy @ 0x140A01F78 (ExpPartitionDestroy.c)
 *     PopBuildDeviceNotifyList @ 0x140A50C40 (PopBuildDeviceNotifyList.c)
 *     KiApplyProcessorDpcLimits @ 0x140A59518 (KiApplyProcessorDpcLimits.c)
 *     ViPendingDelayCompletion @ 0x140A91368 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x140A9CF88 (VfWdCheckForSettingsChange.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140AAB7B4 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x140AABA70 (AnFwpDisableProgressTimer.c)
 *     AnFwpFadeAnimationTimer @ 0x140AACB80 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AAED7C (AnFwDisplayBackgroundUpdate.c)
 * Callees:
 *     KiCancelTimer @ 0x140357840 (KiCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall KeCancelTimer(PKTIMER a1)
{
  __int64 v1; // rdx
  unsigned __int8 CurrentIrql; // bl
  BOOLEAN v3; // di
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v1 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v1;
  }
  LOBYTE(v1) = 1;
  v3 = KiCancelTimer(a1, v1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v6 = KeGetCurrentIrql();
      if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v9 & v8[5]) == 0;
        v8[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v3;
}

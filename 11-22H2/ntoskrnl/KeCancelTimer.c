/*
 * XREFs of KeCancelTimer @ 0x140252980
 * Callers:
 *     PopCompleteIrpWatchdog @ 0x14028E584 (PopCompleteIrpWatchdog.c)
 *     MiUnlinkUnusedControlArea @ 0x1402A0E78 (MiUnlinkUnusedControlArea.c)
 *     CmpArmLazyWriter @ 0x1402E7294 (CmpArmLazyWriter.c)
 *     PfSnCancelTraceTimer @ 0x1402F53A8 (PfSnCancelTraceTimer.c)
 *     EtwpResetFlushTimer @ 0x14031034C (EtwpResetFlushTimer.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x140311BE8 (PopFxDisableWorkOrderWatchdog.c)
 *     PopFxProcessWork @ 0x140312454 (PopFxProcessWork.c)
 *     ExpCancelTimer @ 0x14032EC10 (ExpCancelTimer.c)
 *     ExpDeleteTimer @ 0x140360A70 (ExpDeleteTimer.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14036AC84 (PopFxUpdateDeviceIdleTimer.c)
 *     PopSetWatchdog @ 0x14036FA5C (PopSetWatchdog.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403A2EBC (KiInvokeInterruptServiceRoutine.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403C1A14 (CcDeletePrivateVolumeCacheMap.c)
 *     CcDeletePartition @ 0x140538D10 (CcDeletePartition.c)
 *     IopDisableTimer @ 0x1405550D4 (IopDisableTimer.c)
 *     PopDisableIrpWatchdog @ 0x1405830EC (PopDisableIrpWatchdog.c)
 *     PopCoalescingSetActiveState @ 0x14058D97C (PopCoalescingSetActiveState.c)
 *     PopSetPowerActionWatchdogState @ 0x14058F588 (PopSetPowerActionWatchdogState.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140597E20 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopIgnoreBatteryStatusChange @ 0x140598D3C (PopIgnoreBatteryStatusChange.c)
 *     DifKeCancelTimerWrapper @ 0x1405E2C70 (DifKeCancelTimerWrapper.c)
 *     EtwpFreeLoggerContext @ 0x14078E1AC (EtwpFreeLoggerContext.c)
 *     PfSnPowerBoost @ 0x1407E72DC (PfSnPowerBoost.c)
 *     HalpCmcWorkerRoutine @ 0x140820C70 (HalpCmcWorkerRoutine.c)
 *     ExpRefreshTimeZoneInformation @ 0x140840928 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x14084FA00 (PpmWmiDispatch.c)
 *     PiDrvDbLoadNode @ 0x14086BFF4 (PiDrvDbLoadNode.c)
 *     PopBatteryWorker @ 0x140870230 (PopBatteryWorker.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x14093BAA0 (DbgkpWerDeferredWriteRoutine.c)
 *     PopCoalescingNotify @ 0x140987090 (PopCoalescingNotify.c)
 *     TtmiResetInactivityTimer @ 0x1409AB21C (TtmiResetInactivityTimer.c)
 *     TtmpResetEvaluationTimer @ 0x1409AB9E4 (TtmpResetEvaluationTimer.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1409F80C4 (ExpTimeZoneCleanupSiloState.c)
 *     ExpPartitionDestroy @ 0x140A00998 (ExpPartitionDestroy.c)
 *     CmSetLazyFlushState @ 0x140A11978 (CmSetLazyFlushState.c)
 *     CmpShutdownWorkers @ 0x140A11C40 (CmpShutdownWorkers.c)
 *     CmThawRegistry @ 0x140A135E0 (CmThawRegistry.c)
 *     PopBuildDeviceNotifyList @ 0x140AA71FC (PopBuildDeviceNotifyList.c)
 *     ViPendingDelayCompletion @ 0x140AD2D48 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x140ADF034 (VfWdCheckForSettingsChange.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AED07C (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpFadeAnimationTimer @ 0x140AEE0D0 (AnFwpFadeAnimationTimer.c)
 *     AnFwpDisableProgressTimer @ 0x140AF05E0 (AnFwpDisableProgressTimer.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140AF06E8 (AnFwDisableBackgroundUpdateTimer.c)
 * Callees:
 *     KiCancelTimer @ 0x140253980 (KiCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall KeCancelTimer(PKTIMER a1)
{
  __int64 v1; // rdx
  unsigned __int8 CurrentIrql; // bl
  BOOLEAN v3; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v6; // r10
  unsigned __int8 v7; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v6) = 4;
    else
      v6 = (-1LL << (CurrentIrql + 1)) & 4;
    v1 = (unsigned int)v6 | SchedulerAssist[5];
    SchedulerAssist[5] = v1;
  }
  LOBYTE(v1) = 1;
  v3 = KiCancelTimer(a1, v1);
  if ( (_DWORD)KiIrqlFlags )
  {
    v7 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v11 = (v10 & v9[5]) == 0;
      v9[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v3;
}

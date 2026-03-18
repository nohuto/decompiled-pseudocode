/*
 * XREFs of KeCancelTimer @ 0x140252AA0
 * Callers:
 *     PopCompleteIrpWatchdog @ 0x14028E6A4 (PopCompleteIrpWatchdog.c)
 *     MiUnlinkUnusedControlArea @ 0x1402A0F98 (MiUnlinkUnusedControlArea.c)
 *     CmpArmLazyWriter @ 0x1402E7294 (CmpArmLazyWriter.c)
 *     PfSnCancelTraceTimer @ 0x1402F53A8 (PfSnCancelTraceTimer.c)
 *     EtwpResetFlushTimer @ 0x14031052C (EtwpResetFlushTimer.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x140311DC8 (PopFxDisableWorkOrderWatchdog.c)
 *     PopFxProcessWork @ 0x140312634 (PopFxProcessWork.c)
 *     ExpCancelTimer @ 0x14032EDB0 (ExpCancelTimer.c)
 *     ExpDeleteTimer @ 0x1403610C0 (ExpDeleteTimer.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14036B2D4 (PopFxUpdateDeviceIdleTimer.c)
 *     PopSetWatchdog @ 0x1403700AC (PopSetWatchdog.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403A35FC (KiInvokeInterruptServiceRoutine.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403C2074 (CcDeletePrivateVolumeCacheMap.c)
 *     CcDeletePartition @ 0x140538C60 (CcDeletePartition.c)
 *     IopDisableTimer @ 0x140555034 (IopDisableTimer.c)
 *     PopDisableIrpWatchdog @ 0x14058305C (PopDisableIrpWatchdog.c)
 *     PopCoalescingSetActiveState @ 0x14058D8EC (PopCoalescingSetActiveState.c)
 *     PopSetPowerActionWatchdogState @ 0x14058F4F8 (PopSetPowerActionWatchdogState.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140597D90 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopIgnoreBatteryStatusChange @ 0x140598CAC (PopIgnoreBatteryStatusChange.c)
 *     DifKeCancelTimerWrapper @ 0x1405E2BE0 (DifKeCancelTimerWrapper.c)
 *     EtwpFreeLoggerContext @ 0x14078DC9C (EtwpFreeLoggerContext.c)
 *     PfSnPowerBoost @ 0x1407E6D5C (PfSnPowerBoost.c)
 *     HalpCmcWorkerRoutine @ 0x14081E6F0 (HalpCmcWorkerRoutine.c)
 *     ExpRefreshTimeZoneInformation @ 0x14083EB98 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x14084EB80 (PpmWmiDispatch.c)
 *     PiDrvDbLoadNode @ 0x14086BB24 (PiDrvDbLoadNode.c)
 *     PopBatteryWorker @ 0x14086FD60 (PopBatteryWorker.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x14093B9F0 (DbgkpWerDeferredWriteRoutine.c)
 *     PopCoalescingNotify @ 0x140986FE0 (PopCoalescingNotify.c)
 *     TtmiResetInactivityTimer @ 0x1409AB16C (TtmiResetInactivityTimer.c)
 *     TtmpResetEvaluationTimer @ 0x1409AB934 (TtmpResetEvaluationTimer.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1409F8014 (ExpTimeZoneCleanupSiloState.c)
 *     ExpPartitionDestroy @ 0x140A008E8 (ExpPartitionDestroy.c)
 *     CmSetLazyFlushState @ 0x140A118C8 (CmSetLazyFlushState.c)
 *     CmpShutdownWorkers @ 0x140A11B90 (CmpShutdownWorkers.c)
 *     CmThawRegistry @ 0x140A13530 (CmThawRegistry.c)
 *     PopBuildDeviceNotifyList @ 0x140AA713C (PopBuildDeviceNotifyList.c)
 *     ViPendingDelayCompletion @ 0x140AD1D78 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x140ADE064 (VfWdCheckForSettingsChange.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AEC0B8 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpFadeAnimationTimer @ 0x140AED110 (AnFwpFadeAnimationTimer.c)
 *     AnFwpDisableProgressTimer @ 0x140AEF610 (AnFwpDisableProgressTimer.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140AEF6DC (AnFwDisableBackgroundUpdateTimer.c)
 * Callees:
 *     KiCancelTimer @ 0x140253AA0 (KiCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
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
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
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
  if ( KiIrqlFlags )
  {
    v7 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
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

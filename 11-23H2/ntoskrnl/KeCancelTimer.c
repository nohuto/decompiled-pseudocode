/*
 * XREFs of KeCancelTimer @ 0x140252B60
 * Callers:
 *     PopCompleteIrpWatchdog @ 0x14028E934 (PopCompleteIrpWatchdog.c)
 *     MiUnlinkUnusedControlArea @ 0x1402A1228 (MiUnlinkUnusedControlArea.c)
 *     CmpArmLazyWriter @ 0x1402E7524 (CmpArmLazyWriter.c)
 *     PfSnCancelTraceTimer @ 0x1402F5638 (PfSnCancelTraceTimer.c)
 *     EtwpResetFlushTimer @ 0x1403107BC (EtwpResetFlushTimer.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x140312058 (PopFxDisableWorkOrderWatchdog.c)
 *     PopFxProcessWork @ 0x1403128C4 (PopFxProcessWork.c)
 *     ExpCancelTimer @ 0x14032F040 (ExpCancelTimer.c)
 *     ExpDeleteTimer @ 0x140361260 (ExpDeleteTimer.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14036B474 (PopFxUpdateDeviceIdleTimer.c)
 *     PopSetWatchdog @ 0x14037024C (PopSetWatchdog.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403A37DC (KiInvokeInterruptServiceRoutine.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403C2254 (CcDeletePrivateVolumeCacheMap.c)
 *     CcDeletePartition @ 0x1405391B0 (CcDeletePartition.c)
 *     IopDisableTimer @ 0x1405556F4 (IopDisableTimer.c)
 *     PopDisableIrpWatchdog @ 0x14058354C (PopDisableIrpWatchdog.c)
 *     PopCoalescingSetActiveState @ 0x14058DDDC (PopCoalescingSetActiveState.c)
 *     PopSetPowerActionWatchdogState @ 0x14058F9E8 (PopSetPowerActionWatchdogState.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140598280 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopIgnoreBatteryStatusChange @ 0x14059919C (PopIgnoreBatteryStatusChange.c)
 *     DifKeCancelTimerWrapper @ 0x1405E3150 (DifKeCancelTimerWrapper.c)
 *     EtwpFreeLoggerContext @ 0x14078DE8C (EtwpFreeLoggerContext.c)
 *     PfSnPowerBoost @ 0x1407E702C (PfSnPowerBoost.c)
 *     HalpCmcWorkerRoutine @ 0x14081E9C0 (HalpCmcWorkerRoutine.c)
 *     ExpRefreshTimeZoneInformation @ 0x14083EE98 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x14084EE80 (PpmWmiDispatch.c)
 *     PiDrvDbLoadNode @ 0x14086BD64 (PiDrvDbLoadNode.c)
 *     PopBatteryWorker @ 0x14086FFA0 (PopBatteryWorker.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x14093BBF0 (DbgkpWerDeferredWriteRoutine.c)
 *     PopCoalescingNotify @ 0x1409871E0 (PopCoalescingNotify.c)
 *     TtmiResetInactivityTimer @ 0x1409AB36C (TtmiResetInactivityTimer.c)
 *     TtmpResetEvaluationTimer @ 0x1409ABB34 (TtmpResetEvaluationTimer.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1409F82A4 (ExpTimeZoneCleanupSiloState.c)
 *     ExpPartitionDestroy @ 0x140A00B78 (ExpPartitionDestroy.c)
 *     CmSetLazyFlushState @ 0x140A11B78 (CmSetLazyFlushState.c)
 *     CmpShutdownWorkers @ 0x140A11E40 (CmpShutdownWorkers.c)
 *     CmThawRegistry @ 0x140A137E0 (CmThawRegistry.c)
 *     PopBuildDeviceNotifyList @ 0x140AA6FAC (PopBuildDeviceNotifyList.c)
 *     ViPendingDelayCompletion @ 0x140AD1D68 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x140ADE054 (VfWdCheckForSettingsChange.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AEC0B8 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpFadeAnimationTimer @ 0x140AED110 (AnFwpFadeAnimationTimer.c)
 *     AnFwpDisableProgressTimer @ 0x140AEF610 (AnFwpDisableProgressTimer.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140AEF6DC (AnFwDisableBackgroundUpdateTimer.c)
 * Callees:
 *     KiCancelTimer @ 0x140253B60 (KiCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
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

/*
 * XREFs of KiSetTimerEx @ 0x140252820
 * Callers:
 *     KeSetCoalescableTimer @ 0x140252560 (KeSetCoalescableTimer.c)
 *     KeSetTimer @ 0x140252800 (KeSetTimer.c)
 *     PopEnableIrpWatchdog @ 0x14028ECB8 (PopEnableIrpWatchdog.c)
 *     CcScheduleLazyWriteScan @ 0x1402999F8 (CcScheduleLazyWriteScan.c)
 *     CcScheduleLazyWriteScanVolume @ 0x140299A38 (CcScheduleLazyWriteScanVolume.c)
 *     MiInsertUnusedSegment @ 0x1402A0C98 (MiInsertUnusedSegment.c)
 *     PfSnStartTraceTimer @ 0x1402F5E88 (PfSnStartTraceTimer.c)
 *     PfSnTraceTimerRoutine @ 0x14035B970 (PfSnTraceTimerRoutine.c)
 *     PpmEndHighPerfRequest @ 0x14036EAF0 (PpmEndHighPerfRequest.c)
 *     PopSetWatchdog @ 0x1403700AC (PopSetWatchdog.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403A35FC (KiInvokeInterruptServiceRoutine.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403B3AA4 (HalpTimerSchedulePeriodicQueries.c)
 *     HalpCmcStartPolling @ 0x1403B4968 (HalpCmcStartPolling.c)
 *     CcNotifyWriteBehindVolume @ 0x1403C1DBC (CcNotifyWriteBehindVolume.c)
 *     CcNotifyWriteBehindInternal @ 0x140536A9C (CcNotifyWriteBehindInternal.c)
 *     PfpServiceMainThreadBoost @ 0x140582DD0 (PfpServiceMainThreadBoost.c)
 *     PopCoalescingSetTimer @ 0x14058D980 (PopCoalescingSetTimer.c)
 *     PopUserPresentSetWorker @ 0x14058E1B0 (PopUserPresentSetWorker.c)
 *     PopSetPowerActionWatchdogState @ 0x14058F4F8 (PopSetPowerActionWatchdogState.c)
 *     DifKeSetTimerExWrapper @ 0x1405E5AB0 (DifKeSetTimerExWrapper.c)
 *     DifKeSetTimerWrapper @ 0x1405E5BF0 (DifKeSetTimerWrapper.c)
 *     MiProcessDeleteOnClose @ 0x140624E0C (MiProcessDeleteOnClose.c)
 *     CmpDelayFreeCmRm @ 0x140698BDC (CmpDelayFreeCmRm.c)
 *     PfSnPowerBoost @ 0x1407E6D5C (PfSnPowerBoost.c)
 *     ExpRefreshTimeZoneInformation @ 0x14083EB98 (ExpRefreshTimeZoneInformation.c)
 *     CmpCmdInit @ 0x140842A94 (CmpCmdInit.c)
 *     PpmWmiDispatch @ 0x14084EB80 (PpmWmiDispatch.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x140863058 (PfSnQueueEnablePrefetcherTimer.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x14086441C (PopCancelIgnoreBatteryStatusChange.c)
 *     PiDrvDbUnloadNode @ 0x14086BA74 (PiDrvDbUnloadNode.c)
 *     PopBatteryWorker @ 0x14086FD60 (PopBatteryWorker.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x14093B9F0 (DbgkpWerDeferredWriteRoutine.c)
 *     PopSetSystemAwayMode @ 0x14098A890 (PopSetSystemAwayMode.c)
 *     TtmiResetInactivityTimer @ 0x1409AB16C (TtmiResetInactivityTimer.c)
 *     TtmpResetEvaluationTimer @ 0x1409AB934 (TtmpResetEvaluationTimer.c)
 *     CmSetLazyFlushState @ 0x140A118C8 (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x140A13300 (CmFreezeRegistry.c)
 *     CmpLazyCommitWorker @ 0x140A1C0C0 (CmpLazyCommitWorker.c)
 *     PfSnBeginBootPhase @ 0x140A87910 (PfSnBeginBootPhase.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140A920D4 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140AA05F4 (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x140AA713C (PopBuildDeviceNotifyList.c)
 *     KdpTimeSlipWork @ 0x140AB0480 (KdpTimeSlipWork.c)
 *     ViPendingDelayCompletion @ 0x140AD1D78 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140AD50B4 (ViShutdownScheduleWatchdog.c)
 *     VfWdCheckForSettingsChange @ 0x140ADE064 (VfWdCheckForSettingsChange.c)
 *     ViWdIrpTimerDpcRoutine @ 0x140ADE4C0 (ViWdIrpTimerDpcRoutine.c)
 *     PfSnInitializePrefetcher @ 0x140B618C0 (PfSnInitializePrefetcher.c)
 * Callees:
 *     KiExitDispatcher @ 0x14023CD70 (KiExitDispatcher.c)
 *     KiTimerWaitTest @ 0x140252EF0 (KiTimerWaitTest.c)
 *     KiInsertTimerTable @ 0x140253830 (KiInsertTimerTable.c)
 *     KiCancelTimer @ 0x140253AA0 (KiCancelTimer.c)
 *     PsTimerResolutionActive @ 0x140255200 (PsTimerResolutionActive.c)
 *     KiTraceSetTimer @ 0x140462A80 (KiTraceSetTimer.c)
 */

__int64 __fastcall KiSetTimerEx(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int8 v13; // al
  __int64 v14; // r8
  unsigned __int8 v15; // r15
  __int16 v16; // dx
  __int64 v17; // rcx
  __int64 v18; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v21; // r9
  volatile signed __int32 v22; // [rsp+30h] [rbp-48h]
  unsigned __int8 v23; // [rsp+A0h] [rbp+28h]

  v10 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ a5), KiWaitNever);
  CurrentIrql = KeGetCurrentIrql();
  v23 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v21) = 4;
    else
      v21 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v21;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = KiCancelTimer(a1, 0LL);
  v14 = 0LL;
  v15 = v13;
  v16 = 1;
  if ( KiGlobalTimerResolutionRequests
    || !CurrentPrcb->NestingLevel
    && (unsigned __int8)PsTimerResolutionActive(KeGetCurrentThread()->ApcState.Process, 1LL, 0LL) )
  {
    v16 = v14;
  }
  *(_WORD *)(a1 + 58) = v16;
  *(_QWORD *)(a1 + 48) = v10;
  *(_DWORD *)(a1 + 60) = a3;
  v22 = *(_DWORD *)a1;
  BYTE1(v22) = a4;
  if ( a2 >= 0 )
  {
    BYTE1(v22) = a4 | 1;
    a2 = MEMORY[0xFFFFF78000000014] - a2;
    if ( a2 >= 0 )
    {
      *(_DWORD *)a1 = v22;
      *(_QWORD *)(a1 + 24) = v14;
LABEL_20:
      KiTimerWaitTest(CurrentPrcb, a1, 0LL);
      goto LABEL_10;
    }
    a4 |= 1u;
  }
  v17 = v14;
  if ( (a4 & 0xFC) != 0 )
    v17 = (unsigned __int8)(a4 & 0xFC) << 16;
  HIBYTE(v22) |= 0x40u;
  v18 = MEMORY[0xFFFFF78000000008] - a2;
  *(_QWORD *)(a1 + 24) = MEMORY[0xFFFFF78000000008] - a2;
  BYTE2(v22) = (unsigned __int64)(v17 + v18) >> 18;
  *(_DWORD *)a1 = v22;
  *(_DWORD *)(a1 + 4) = v14;
  if ( !(unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, a1, a5, BYTE2(v22), v14) )
    goto LABEL_20;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(a1, a5, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_10:
  KiExitDispatcher((__int64)CurrentPrcb, 0, (struct _PROCESSOR_NUMBER)1, 0, v23);
  return v15;
}

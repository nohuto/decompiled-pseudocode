/*
 * XREFs of KeInitializeDpc @ 0x1402BFC30
 * Callers:
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     PspThreadDelete @ 0x1407475B0 (PspThreadDelete.c)
 *     ObpProcessRemoveObjectQueue @ 0x140749730 (ObpProcessRemoveObjectQueue.c)
 *     PfSnBeginTrace @ 0x14074DBA8 (PfSnBeginTrace.c)
 *     PspProcessDelete @ 0x1407612A0 (PspProcessDelete.c)
 *     IopConnectInterrupt @ 0x14078E950 (IopConnectInterrupt.c)
 *     EtwpInitLoggerContext @ 0x1407B36B0 (EtwpInitLoggerContext.c)
 *     NtCreateTimer @ 0x1407C6860 (NtCreateTimer.c)
 *     PfSnAsyncContextInitialize @ 0x1407DB4A8 (PfSnAsyncContextInitialize.c)
 *     CmpInitializeLazyWriters @ 0x14080A8FC (CmpInitializeLazyWriters.c)
 *     PiDrvDbCreateNode @ 0x140811FAC (PiDrvDbCreateNode.c)
 *     KeInitializeTimerTable @ 0x14081DC94 (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x14081DDD0 (KiInitializeForceIdle.c)
 *     TtmInit @ 0x140821184 (TtmInit.c)
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x140821CC0 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 *     ExpInitializeTimeZoneInformation @ 0x14083FFD0 (ExpInitializeTimeZoneInformation.c)
 *     CmpCmdInit @ 0x140842D94 (CmpCmdInit.c)
 *     KeInitializeSecondaryInterruptServices @ 0x140843EB0 (KeInitializeSecondaryInterruptServices.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140848A00 (IopAllocatePassiveInterruptBlock.c)
 *     IopErrorLogQueueRequest @ 0x1409517C4 (IopErrorLogQueueRequest.c)
 *     PopSetSystemAwayMode @ 0x14098AA90 (PopSetSystemAwayMode.c)
 *     TtmiCreateTerminal @ 0x1409AAFA8 (TtmiCreateTerminal.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409F0C8C (EtwpCovSampCaptureContextStart.c)
 *     KiInitPrcb @ 0x140A8BB8C (KiInitPrcb.c)
 *     PoInitializePrcb @ 0x140A8C9B0 (PoInitializePrcb.c)
 *     KiCompleteKernelInit @ 0x140A8CAE0 (KiCompleteKernelInit.c)
 *     HalpMcaInitializePcrContext @ 0x140A90308 (HalpMcaInitializePcrContext.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140A91F54 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140A92020 (PfSnAllocateEnablePrefetcherTimer.c)
 *     IopLiveDumpCorralProcessors @ 0x140A9AD20 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x140A9D774 (PnprQuiesceProcessors.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140AA0464 (PfpStartLoggingHardFaultEvents.c)
 *     PopEndMirroring @ 0x140AA2690 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x140AA6FAC (PopBuildDeviceNotifyList.c)
 *     PopInvokeSystemStateHandler @ 0x140AA840C (PopInvokeSystemStateHandler.c)
 *     KdInitSystem @ 0x140AB1040 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140AD1D68 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140AD50A4 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x140ADE0D8 (VfWdInit.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AEC0B8 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayFade @ 0x140AEC9E8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140AED598 (AnFwDisplayProgressIndicator.c)
 *     AnFwProgressIndicatorTransition @ 0x140AF2184 (AnFwProgressIndicatorTransition.c)
 *     CmFcManagerInitialize @ 0x140B385A8 (CmFcManagerInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeDpc(PRKDPC Dpc, PKDEFERRED_ROUTINE DeferredRoutine, PVOID DeferredContext)
{
  Dpc->TargetInfoAsUlong = 275;
  Dpc->DpcData = 0LL;
  Dpc->ProcessorHistory = 0LL;
  Dpc->DeferredRoutine = DeferredRoutine;
  Dpc->DeferredContext = DeferredContext;
}

/*
 * XREFs of KeInitializeDpc @ 0x1402BF9A0
 * Callers:
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     PspThreadDelete @ 0x1407473C0 (PspThreadDelete.c)
 *     ObpProcessRemoveObjectQueue @ 0x140749540 (ObpProcessRemoveObjectQueue.c)
 *     PfSnBeginTrace @ 0x14074D9B8 (PfSnBeginTrace.c)
 *     PspProcessDelete @ 0x1407610B0 (PspProcessDelete.c)
 *     IopConnectInterrupt @ 0x14078E760 (IopConnectInterrupt.c)
 *     EtwpInitLoggerContext @ 0x1407B34C0 (EtwpInitLoggerContext.c)
 *     NtCreateTimer @ 0x1407C6590 (NtCreateTimer.c)
 *     PfSnAsyncContextInitialize @ 0x1407DB1D8 (PfSnAsyncContextInitialize.c)
 *     CmpInitializeLazyWriters @ 0x14080A62C (CmpInitializeLazyWriters.c)
 *     PiDrvDbCreateNode @ 0x140811CDC (PiDrvDbCreateNode.c)
 *     KeInitializeTimerTable @ 0x14081D9C4 (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x14081DB00 (KiInitializeForceIdle.c)
 *     TtmInit @ 0x140820E84 (TtmInit.c)
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x1408219C0 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 *     ExpInitializeTimeZoneInformation @ 0x14083FCD0 (ExpInitializeTimeZoneInformation.c)
 *     CmpCmdInit @ 0x140842A94 (CmpCmdInit.c)
 *     KeInitializeSecondaryInterruptServices @ 0x140843BB0 (KeInitializeSecondaryInterruptServices.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140848700 (IopAllocatePassiveInterruptBlock.c)
 *     IopErrorLogQueueRequest @ 0x1409515C4 (IopErrorLogQueueRequest.c)
 *     PopSetSystemAwayMode @ 0x14098A890 (PopSetSystemAwayMode.c)
 *     TtmiCreateTerminal @ 0x1409AADA8 (TtmiCreateTerminal.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409F09FC (EtwpCovSampCaptureContextStart.c)
 *     KiInitPrcb @ 0x140A8BB8C (KiInitPrcb.c)
 *     PoInitializePrcb @ 0x140A8C9B0 (PoInitializePrcb.c)
 *     KiCompleteKernelInit @ 0x140A8CAE0 (KiCompleteKernelInit.c)
 *     HalpMcaInitializePcrContext @ 0x140A90488 (HalpMcaInitializePcrContext.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140A920D4 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140A921A0 (PfSnAllocateEnablePrefetcherTimer.c)
 *     IopLiveDumpCorralProcessors @ 0x140A9AEB0 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x140A9D904 (PnprQuiesceProcessors.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140AA05F4 (PfpStartLoggingHardFaultEvents.c)
 *     PopEndMirroring @ 0x140AA2820 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x140AA713C (PopBuildDeviceNotifyList.c)
 *     PopInvokeSystemStateHandler @ 0x140AA859C (PopInvokeSystemStateHandler.c)
 *     KdInitSystem @ 0x140AB1040 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140AD1D78 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140AD50B4 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x140ADE0E8 (VfWdInit.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AEC0B8 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayFade @ 0x140AEC9E8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140AED598 (AnFwDisplayProgressIndicator.c)
 *     AnFwProgressIndicatorTransition @ 0x140AF2174 (AnFwProgressIndicatorTransition.c)
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

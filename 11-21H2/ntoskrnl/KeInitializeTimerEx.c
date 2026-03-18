/*
 * XREFs of KeInitializeTimerEx @ 0x1402F4820
 * Callers:
 *     NtCreateTimer @ 0x1406B4B90 (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x1406EFD44 (EtwpInitLoggerContext.c)
 *     PfSnAsyncContextInitialize @ 0x1407D7B88 (PfSnAsyncContextInitialize.c)
 *     PfSnBeginTrace @ 0x1407DA91C (PfSnBeginTrace.c)
 *     PoUserShutdownInitiated @ 0x1407EC000 (PoUserShutdownInitiated.c)
 *     MiInitializeSections @ 0x14081D9C8 (MiInitializeSections.c)
 *     PiDrvDbCreateNode @ 0x1408268AC (PiDrvDbCreateNode.c)
 *     CmpCmdInit @ 0x140832270 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1408334E4 (CmpInitializeLazyWriters.c)
 *     ExpInitializeTimeZoneInformation @ 0x14083697C (ExpInitializeTimeZoneInformation.c)
 *     ExpWorkQueueManagerInitialize @ 0x140852250 (ExpWorkQueueManagerInitialize.c)
 *     TtmInit @ 0x1408633F0 (TtmInit.c)
 *     IopErrorLogQueueRequest @ 0x14093FB40 (IopErrorLogQueueRequest.c)
 *     TtmiCreateTerminal @ 0x1409A2F78 (TtmiCreateTerminal.c)
 *     KeInitThread @ 0x140A48020 (KeInitThread.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140A48D9C (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x140A50C40 (PopBuildDeviceNotifyList.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140A54598 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitializeProcessor @ 0x140A5943C (KiInitializeProcessor.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140A5B0D0 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     KdInitSystem @ 0x140A70470 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140A91368 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140A95A04 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x140A9D00C (VfWdInit.c)
 *     AnFwProgressIndicatorTransition @ 0x140AAB5FC (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayFade @ 0x140AAC1BC (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140AAD1C4 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AAED7C (AnFwDisplayBackgroundUpdate.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeTimerEx(PKTIMER Timer, TIMER_TYPE Type)
{
  *(_QWORD *)&Timer->Header.Lock = 0LL;
  Timer->Header.Type = Type + 8;
  Timer->Header.WaitListHead.Blink = &Timer->Header.WaitListHead;
  Timer->Header.WaitListHead.Flink = &Timer->Header.WaitListHead;
  Timer->DueTime.QuadPart = 0LL;
  Timer->Period = 0;
  Timer->Processor = 0;
}

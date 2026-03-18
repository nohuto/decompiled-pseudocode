/*
 * XREFs of KeInitializeTimerEx @ 0x1402BE660
 * Callers:
 *     PfSnBeginTrace @ 0x14074D9B8 (PfSnBeginTrace.c)
 *     EtwpInitLoggerContext @ 0x1407B34C0 (EtwpInitLoggerContext.c)
 *     NtCreateTimer @ 0x1407C6590 (NtCreateTimer.c)
 *     PfSnAsyncContextInitialize @ 0x1407DB1D8 (PfSnAsyncContextInitialize.c)
 *     CmpInitializeLazyWriters @ 0x14080A62C (CmpInitializeLazyWriters.c)
 *     PiDrvDbCreateNode @ 0x140811CDC (PiDrvDbCreateNode.c)
 *     TtmInit @ 0x140820E84 (TtmInit.c)
 *     MiInitializeSections @ 0x140837B4C (MiInitializeSections.c)
 *     ExpInitializeTimeZoneInformation @ 0x14083FCD0 (ExpInitializeTimeZoneInformation.c)
 *     CmpCmdInit @ 0x140842A94 (CmpCmdInit.c)
 *     ExpWorkQueueManagerInitialize @ 0x140849990 (ExpWorkQueueManagerInitialize.c)
 *     IopErrorLogQueueRequest @ 0x1409515C4 (IopErrorLogQueueRequest.c)
 *     TtmiCreateTerminal @ 0x1409AADA8 (TtmiCreateTerminal.c)
 *     KeInitThread @ 0x140A875D0 (KeInitThread.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140A920D4 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140A921A0 (PfSnAllocateEnablePrefetcherTimer.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140AA05F4 (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x140AA713C (PopBuildDeviceNotifyList.c)
 *     KdInitSystem @ 0x140AB1040 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140AD1D78 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140AD50B4 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x140ADE0E8 (VfWdInit.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AEC0B8 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayFade @ 0x140AEC9E8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140AED598 (AnFwDisplayProgressIndicator.c)
 *     AnFwProgressIndicatorTransition @ 0x140AF2174 (AnFwProgressIndicatorTransition.c)
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

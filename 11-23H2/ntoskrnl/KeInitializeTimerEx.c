/*
 * XREFs of KeInitializeTimerEx @ 0x1402BE8F0
 * Callers:
 *     PfSnBeginTrace @ 0x14074DBA8 (PfSnBeginTrace.c)
 *     EtwpInitLoggerContext @ 0x1407B36B0 (EtwpInitLoggerContext.c)
 *     NtCreateTimer @ 0x1407C6860 (NtCreateTimer.c)
 *     PfSnAsyncContextInitialize @ 0x1407DB4A8 (PfSnAsyncContextInitialize.c)
 *     CmpInitializeLazyWriters @ 0x14080A8FC (CmpInitializeLazyWriters.c)
 *     PiDrvDbCreateNode @ 0x140811FAC (PiDrvDbCreateNode.c)
 *     TtmInit @ 0x140821184 (TtmInit.c)
 *     MiInitializeSections @ 0x140837E4C (MiInitializeSections.c)
 *     ExpInitializeTimeZoneInformation @ 0x14083FFD0 (ExpInitializeTimeZoneInformation.c)
 *     CmpCmdInit @ 0x140842D94 (CmpCmdInit.c)
 *     ExpWorkQueueManagerInitialize @ 0x140849C90 (ExpWorkQueueManagerInitialize.c)
 *     IopErrorLogQueueRequest @ 0x1409517C4 (IopErrorLogQueueRequest.c)
 *     TtmiCreateTerminal @ 0x1409AAFA8 (TtmiCreateTerminal.c)
 *     KeInitThread @ 0x140A875D0 (KeInitThread.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140A91F54 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140A92020 (PfSnAllocateEnablePrefetcherTimer.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140AA0464 (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x140AA6FAC (PopBuildDeviceNotifyList.c)
 *     KdInitSystem @ 0x140AB1040 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140AD1D68 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140AD50A4 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x140ADE0D8 (VfWdInit.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AEC0B8 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayFade @ 0x140AEC9E8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140AED598 (AnFwDisplayProgressIndicator.c)
 *     AnFwProgressIndicatorTransition @ 0x140AF2184 (AnFwProgressIndicatorTransition.c)
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

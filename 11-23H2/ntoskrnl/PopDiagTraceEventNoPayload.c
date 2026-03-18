/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x140367640
 * Callers:
 *     PopScanIdleList @ 0x14032C910 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x14058FBF0 (PopThermalStandbyNotify.c)
 *     PopPowerInformationInternal @ 0x1407ED06C (PopPowerInformationInternal.c)
 *     PopCoalescingNotify @ 0x140986FE0 (PopCoalescingNotify.c)
 *     PopDispatchSuperfetchNotification @ 0x140989790 (PopDispatchSuperfetchNotification.c)
 *     PopResumeApps @ 0x14098A434 (PopResumeApps.c)
 *     PopResumeServices @ 0x14098A4AC (PopResumeServices.c)
 *     PopSetSystemAwayMode @ 0x14098A890 (PopSetSystemAwayMode.c)
 *     PopSuspendApps @ 0x14098AA14 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x14098AA68 (PopSuspendServices.c)
 *     PopNotifyCallbacksPreSleep @ 0x14098BA7C (PopNotifyCallbacksPreSleep.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x14098E75C (PopDiagTraceDevicesWakeEnd.c)
 *     PopDiagTraceIoCoalescingOff @ 0x14098FC08 (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTracePrepareSleep @ 0x140991434 (PopDiagTracePrepareSleep.c)
 *     PopDiagTracePrepareSleepEnd @ 0x140991450 (PopDiagTracePrepareSleepEnd.c)
 *     PopDiagTraceSuspendResumeNotification @ 0x140991C68 (PopDiagTraceSuspendResumeNotification.c)
 *     PopGracefulShutdown @ 0x140AA0A60 (PopGracefulShutdown.c)
 *     PopTransitionToSleep @ 0x140AA5340 (PopTransitionToSleep.c)
 *     PopFlushVolumes @ 0x140AA64E8 (PopFlushVolumes.c)
 *     PoBroadcastSystemState @ 0x140AA6A68 (PoBroadcastSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x140AA713C (PopBuildDeviceNotifyList.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x140AA7E2C (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140AA7E48 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceZeroHiberFile @ 0x140AA80E4 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x140AA8100 (PopDiagTraceZeroHiberFileEnd.c)
 * Callees:
 *     EtwWrite @ 0x1402578A0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140258420 (EtwEventEnabled.c)
 */

void __fastcall PopDiagTraceEventNoPayload(PCEVENT_DESCRIPTOR EventDescriptor)
{
  REGHANDLE v2; // rdi

  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
      EtwWrite(v2, EventDescriptor, 0LL, 0, 0LL);
  }
}

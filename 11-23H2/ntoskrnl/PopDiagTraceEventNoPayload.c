/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x1403677E0
 * Callers:
 *     PopScanIdleList @ 0x14032CBA0 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x1405900E0 (PopThermalStandbyNotify.c)
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 *     PopCoalescingNotify @ 0x1409871E0 (PopCoalescingNotify.c)
 *     PopDispatchSuperfetchNotification @ 0x140989990 (PopDispatchSuperfetchNotification.c)
 *     PopResumeApps @ 0x14098A634 (PopResumeApps.c)
 *     PopResumeServices @ 0x14098A6AC (PopResumeServices.c)
 *     PopSetSystemAwayMode @ 0x14098AA90 (PopSetSystemAwayMode.c)
 *     PopSuspendApps @ 0x14098AC14 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x14098AC68 (PopSuspendServices.c)
 *     PopNotifyCallbacksPreSleep @ 0x14098BC7C (PopNotifyCallbacksPreSleep.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x14098E95C (PopDiagTraceDevicesWakeEnd.c)
 *     PopDiagTraceIoCoalescingOff @ 0x14098FE08 (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTracePrepareSleep @ 0x140991634 (PopDiagTracePrepareSleep.c)
 *     PopDiagTracePrepareSleepEnd @ 0x140991650 (PopDiagTracePrepareSleepEnd.c)
 *     PopDiagTraceSuspendResumeNotification @ 0x140991E68 (PopDiagTraceSuspendResumeNotification.c)
 *     PopGracefulShutdown @ 0x140AA08D0 (PopGracefulShutdown.c)
 *     PopTransitionToSleep @ 0x140AA51B0 (PopTransitionToSleep.c)
 *     PopFlushVolumes @ 0x140AA6358 (PopFlushVolumes.c)
 *     PoBroadcastSystemState @ 0x140AA68D8 (PoBroadcastSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x140AA6FAC (PopBuildDeviceNotifyList.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x140AA7C9C (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140AA7CB8 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceZeroHiberFile @ 0x140AA7F54 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x140AA7F70 (PopDiagTraceZeroHiberFileEnd.c)
 * Callees:
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
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

/*
 * XREFs of EtwpReleaseLoggerContext @ 0x1406BE208
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140228540 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetPmcSessions @ 0x1405FC234 (EtwpGetPmcSessions.c)
 *     EtwpTransitionToRealtime @ 0x1405FF618 (EtwpTransitionToRealtime.c)
 *     EtwpGetCompressionSettings @ 0x140602968 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x140602BC8 (EtwpSetCompressionSettings.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140682118 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     EtwpLookupLoggerIdByName @ 0x1406BD758 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406BD7EC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAddRegEntryToGroup @ 0x1406BE860 (EtwpAddRegEntryToGroup.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BED1C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpTrackProviderRegistration @ 0x1406BFBE0 (EtwpTrackProviderRegistration.c)
 *     NtTraceControl @ 0x140725C40 (NtTraceControl.c)
 *     EtwpEnableGuid @ 0x140780210 (EtwpEnableGuid.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1407E5CC4 (EtwQueryTraceHandleByLoggerName.c)
 *     AddDecodeGuidToSessions @ 0x1407E9FA0 (AddDecodeGuidToSessions.c)
 *     EtwpRealtimeConnect @ 0x1407F5B64 (EtwpRealtimeConnect.c)
 *     EtwpFlushTrace @ 0x1407F6068 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x1407F8630 (EtwpUpdateTrace.c)
 *     EtwpStopTrace @ 0x1407F8938 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1407F8FD4 (EtwpQueryTrace.c)
 *     WmiQueryTraceInformation @ 0x140833A30 (WmiQueryTraceInformation.c)
 *     EtwpGetTraceGuidInfo @ 0x140853498 (EtwpGetTraceGuidInfo.c)
 *     EtwpTrackProviderBinary @ 0x14085B0E0 (EtwpTrackProviderBinary.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140860054 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpTracingProvEnableCallback @ 0x1408662F0 (EtwpTracingProvEnableCallback.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409E1F34 (EtwSetPerformanceTraceInformation.c)
 *     EtwShutdown @ 0x1409E2BCC (EtwShutdown.c)
 *     EtwpUpdateDisallowList @ 0x1409E79A8 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1409E7D78 (EtwpGetDisallowList.c)
 *     EtwpIncrementTraceFile @ 0x1409E7FE0 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x1409E80CC (EtwpQueryReferenceTime.c)
 *     EtwRegisterEventCallback @ 0x1409EC100 (EtwRegisterEventCallback.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409ECBC8 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1409ECE80 (SendCaptureStateNotificationsWorker.c)
 *     EtwpGetSoftRestartInformation @ 0x1409ED3E4 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1409ED590 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1409EE1BC (EtwpSetSoftRestartInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1409EE9E4 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpSetProviderBinaryTracking @ 0x1409F549C (EtwpSetProviderBinaryTracking.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140A76940 (EtwpEventTracingCounterSetCallback.c)
 *     EtwpFixBootLoggers @ 0x140B68B2C (EtwpFixBootLoggers.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140B985B4 (EtwpEnableBootLoggerRegistryProviders.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259BB0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeReleaseMutex @ 0x1402AFF40 (KeReleaseMutex.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 158), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 137) + 448LL) + 8LL * *a1),
    1u);
}

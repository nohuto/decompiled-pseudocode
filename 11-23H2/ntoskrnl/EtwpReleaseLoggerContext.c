/*
 * XREFs of EtwpReleaseLoggerContext @ 0x1406BE208
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140228520 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetPmcSessions @ 0x1405FC1A4 (EtwpGetPmcSessions.c)
 *     EtwpTransitionToRealtime @ 0x1405FF588 (EtwpTransitionToRealtime.c)
 *     EtwpGetCompressionSettings @ 0x1406028F8 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x140602B58 (EtwpSetCompressionSettings.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140682118 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     EtwpLookupLoggerIdByName @ 0x1406BD758 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406BD7EC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAddRegEntryToGroup @ 0x1406BE810 (EtwpAddRegEntryToGroup.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BECCC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpTrackProviderRegistration @ 0x1406BFB90 (EtwpTrackProviderRegistration.c)
 *     NtTraceControl @ 0x140725BD0 (NtTraceControl.c)
 *     EtwpEnableGuid @ 0x14077FD00 (EtwpEnableGuid.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1407E5744 (EtwQueryTraceHandleByLoggerName.c)
 *     AddDecodeGuidToSessions @ 0x1407E9A20 (AddDecodeGuidToSessions.c)
 *     EtwpRealtimeConnect @ 0x1407F54F4 (EtwpRealtimeConnect.c)
 *     EtwpFlushTrace @ 0x1407F59F8 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x1407F7F7C (EtwpUpdateTrace.c)
 *     EtwpStopTrace @ 0x1407F8284 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1407F8920 (EtwpQueryTrace.c)
 *     WmiQueryTraceInformation @ 0x140831EE0 (WmiQueryTraceInformation.c)
 *     EtwpGetTraceGuidInfo @ 0x140852588 (EtwpGetTraceGuidInfo.c)
 *     EtwpTrackProviderBinary @ 0x14085A910 (EtwpTrackProviderBinary.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14085FEF4 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpTracingProvEnableCallback @ 0x140865E20 (EtwpTracingProvEnableCallback.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409E1E84 (EtwSetPerformanceTraceInformation.c)
 *     EtwShutdown @ 0x1409E2B1C (EtwShutdown.c)
 *     EtwpUpdateDisallowList @ 0x1409E78F8 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1409E7CC8 (EtwpGetDisallowList.c)
 *     EtwpIncrementTraceFile @ 0x1409E7F30 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x1409E801C (EtwpQueryReferenceTime.c)
 *     EtwRegisterEventCallback @ 0x1409EC050 (EtwRegisterEventCallback.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409ECB18 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1409ECDD0 (SendCaptureStateNotificationsWorker.c)
 *     EtwpGetSoftRestartInformation @ 0x1409ED334 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1409ED4E0 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1409EE10C (EtwpSetSoftRestartInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1409EE934 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpSetProviderBinaryTracking @ 0x1409F53EC (EtwpSetProviderBinaryTracking.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140A768D0 (EtwpEventTracingCounterSetCallback.c)
 *     EtwpFixBootLoggers @ 0x140B6801C (EtwpFixBootLoggers.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140B975B4 (EtwpEnableBootLoggerRegistryProviders.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259CD0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeReleaseMutex @ 0x1402AFF70 (KeReleaseMutex.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 158), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 137) + 448LL) + 8LL * *a1),
    1u);
}

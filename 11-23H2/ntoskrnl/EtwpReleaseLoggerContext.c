/*
 * XREFs of EtwpReleaseLoggerContext @ 0x1406BE238
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140228630 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetPmcSessions @ 0x1405FC714 (EtwpGetPmcSessions.c)
 *     EtwpTransitionToRealtime @ 0x1405FFAF8 (EtwpTransitionToRealtime.c)
 *     EtwpGetCompressionSettings @ 0x140602E48 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1406030A8 (EtwpSetCompressionSettings.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140682118 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpStartLogger @ 0x1406BBFE0 (EtwpStartLogger.c)
 *     EtwpLookupLoggerIdByName @ 0x1406BD788 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406BD81C (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAddRegEntryToGroup @ 0x1406BE840 (EtwpAddRegEntryToGroup.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BECFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpTrackProviderRegistration @ 0x1406BFBC0 (EtwpTrackProviderRegistration.c)
 *     NtTraceControl @ 0x140725DD0 (NtTraceControl.c)
 *     EtwpEnableGuid @ 0x14077FEF0 (EtwpEnableGuid.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1407E5A14 (EtwQueryTraceHandleByLoggerName.c)
 *     AddDecodeGuidToSessions @ 0x1407E9CF0 (AddDecodeGuidToSessions.c)
 *     EtwpRealtimeConnect @ 0x1407F57C4 (EtwpRealtimeConnect.c)
 *     EtwpFlushTrace @ 0x1407F5CC8 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x1407F824C (EtwpUpdateTrace.c)
 *     EtwpStopTrace @ 0x1407F8554 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1407F8BF0 (EtwpQueryTrace.c)
 *     WmiQueryTraceInformation @ 0x1408321E0 (WmiQueryTraceInformation.c)
 *     EtwpGetTraceGuidInfo @ 0x140852888 (EtwpGetTraceGuidInfo.c)
 *     EtwpTrackProviderBinary @ 0x14085AB50 (EtwpTrackProviderBinary.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140860134 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpTracingProvEnableCallback @ 0x140866060 (EtwpTracingProvEnableCallback.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409E2114 (EtwSetPerformanceTraceInformation.c)
 *     EtwShutdown @ 0x1409E2DAC (EtwShutdown.c)
 *     EtwpUpdateDisallowList @ 0x1409E7B88 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1409E7F58 (EtwpGetDisallowList.c)
 *     EtwpIncrementTraceFile @ 0x1409E81C0 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x1409E82AC (EtwpQueryReferenceTime.c)
 *     EtwRegisterEventCallback @ 0x1409EC2E0 (EtwRegisterEventCallback.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409ECDA8 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1409ED060 (SendCaptureStateNotificationsWorker.c)
 *     EtwpGetSoftRestartInformation @ 0x1409ED5C4 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1409ED770 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1409EE39C (EtwpSetSoftRestartInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1409EEBC4 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpSetProviderBinaryTracking @ 0x1409F567C (EtwpSetProviderBinaryTracking.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140A76B80 (EtwpEventTracingCounterSetCallback.c)
 *     EtwpFixBootLoggers @ 0x140B6801C (EtwpFixBootLoggers.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140B975B4 (EtwpEnableBootLoggerRegistryProviders.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259F60 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeReleaseMutex @ 0x1402B0200 (KeReleaseMutex.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 158), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 137) + 448LL) + 8LL * *a1),
    1u);
}

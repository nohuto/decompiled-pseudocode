/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x1406BECFC
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140228630 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetPmcSessions @ 0x1405FC714 (EtwpGetPmcSessions.c)
 *     EtwpGetCompressionSettings @ 0x140602E48 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1406030A8 (EtwpSetCompressionSettings.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140682118 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpStartLogger @ 0x1406BBFE0 (EtwpStartLogger.c)
 *     EtwpLookupLoggerIdByName @ 0x1406BD788 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406BD81C (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpUpdateEnableMask @ 0x1406BDCC4 (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x1406BE840 (EtwpAddRegEntryToGroup.c)
 *     EtwpTrackProviderRegistration @ 0x1406BFBC0 (EtwpTrackProviderRegistration.c)
 *     NtTraceControl @ 0x140725DD0 (NtTraceControl.c)
 *     EtwpValidateEnableNotification @ 0x140780818 (EtwpValidateEnableNotification.c)
 *     AddDecodeGuidToSessions @ 0x1407E9CF0 (AddDecodeGuidToSessions.c)
 *     EtwpRealtimeConnect @ 0x1407F57C4 (EtwpRealtimeConnect.c)
 *     EtwpAcquireLoggerContext @ 0x1407F8D10 (EtwpAcquireLoggerContext.c)
 *     WmiQueryTraceInformation @ 0x1408321E0 (WmiQueryTraceInformation.c)
 *     EtwpGetTraceGuidInfo @ 0x140852888 (EtwpGetTraceGuidInfo.c)
 *     EtwpTrackProviderBinary @ 0x14085AB50 (EtwpTrackProviderBinary.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140860134 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpTracingProvEnableCallback @ 0x140866060 (EtwpTracingProvEnableCallback.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409E2114 (EtwSetPerformanceTraceInformation.c)
 *     EtwShutdown @ 0x1409E2DAC (EtwShutdown.c)
 *     EtwpUpdateDisallowList @ 0x1409E7B88 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1409E7F58 (EtwpGetDisallowList.c)
 *     EtwpQueryReferenceTime @ 0x1409E82AC (EtwpQueryReferenceTime.c)
 *     EtwRegisterEventCallback @ 0x1409EC2E0 (EtwRegisterEventCallback.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409ECDA8 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpGetSoftRestartInformation @ 0x1409ED5C4 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1409ED770 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1409EE39C (EtwpSetSoftRestartInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1409EEBC4 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpSetProviderBinaryTracking @ 0x1409F567C (EtwpSetProviderBinaryTracking.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140A76B80 (EtwpEventTracingCounterSetCallback.c)
 *     EtwpFixBootLoggers @ 0x140B6801C (EtwpFixBootLoggers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259F60 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140322090 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseLoggerContext @ 0x1406BE238 (EtwpReleaseLoggerContext.c)
 */

unsigned int *__fastcall EtwpAcquireLoggerContextByLoggerId(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  unsigned int *v7; // rbx

  v4 = a2;
  v6 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 16)
    || (*(_QWORD *)(*(_QWORD *)(a1 + 456) + 8LL * a2) & 1) != 0
    || !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8LL * a2), 1u) )
  {
    return 0LL;
  }
  if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 16)
    || (_mm_lfence(), v7 = *(unsigned int **)(*(_QWORD *)(a1 + 456) + 8 * v4), ((unsigned __int8)v7 & 1) != 0) )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * v6), 1u);
    return 0LL;
  }
  if ( a3 )
    KeWaitForSingleObject(v7 + 158, Executive, 0, 0, 0LL);
  if ( !v7[80] )
  {
    EtwpReleaseLoggerContext(v7, a3);
    return 0LL;
  }
  return v7;
}

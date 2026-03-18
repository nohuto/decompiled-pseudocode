/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x1406BECCC
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140228520 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetPmcSessions @ 0x1405FC1A4 (EtwpGetPmcSessions.c)
 *     EtwpGetCompressionSettings @ 0x1406028F8 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x140602B58 (EtwpSetCompressionSettings.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140682118 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     EtwpLookupLoggerIdByName @ 0x1406BD758 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406BD7EC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpUpdateEnableMask @ 0x1406BDC94 (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x1406BE810 (EtwpAddRegEntryToGroup.c)
 *     EtwpTrackProviderRegistration @ 0x1406BFB90 (EtwpTrackProviderRegistration.c)
 *     NtTraceControl @ 0x140725BD0 (NtTraceControl.c)
 *     EtwpValidateEnableNotification @ 0x140780628 (EtwpValidateEnableNotification.c)
 *     AddDecodeGuidToSessions @ 0x1407E9A20 (AddDecodeGuidToSessions.c)
 *     EtwpRealtimeConnect @ 0x1407F54F4 (EtwpRealtimeConnect.c)
 *     EtwpAcquireLoggerContext @ 0x1407F8A40 (EtwpAcquireLoggerContext.c)
 *     WmiQueryTraceInformation @ 0x140831EE0 (WmiQueryTraceInformation.c)
 *     EtwpGetTraceGuidInfo @ 0x140852588 (EtwpGetTraceGuidInfo.c)
 *     EtwpTrackProviderBinary @ 0x14085A910 (EtwpTrackProviderBinary.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14085FEF4 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpTracingProvEnableCallback @ 0x140865E20 (EtwpTracingProvEnableCallback.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409E1E84 (EtwSetPerformanceTraceInformation.c)
 *     EtwShutdown @ 0x1409E2B1C (EtwShutdown.c)
 *     EtwpUpdateDisallowList @ 0x1409E78F8 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1409E7CC8 (EtwpGetDisallowList.c)
 *     EtwpQueryReferenceTime @ 0x1409E801C (EtwpQueryReferenceTime.c)
 *     EtwRegisterEventCallback @ 0x1409EC050 (EtwRegisterEventCallback.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409ECB18 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpGetSoftRestartInformation @ 0x1409ED334 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1409ED4E0 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1409EE10C (EtwpSetSoftRestartInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1409EE934 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpSetProviderBinaryTracking @ 0x1409F53EC (EtwpSetProviderBinaryTracking.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140A768D0 (EtwpEventTracingCounterSetCallback.c)
 *     EtwpFixBootLoggers @ 0x140B6801C (EtwpFixBootLoggers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259CD0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140321E00 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseLoggerContext @ 0x1406BE208 (EtwpReleaseLoggerContext.c)
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

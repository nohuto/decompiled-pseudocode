/*
 * XREFs of StorpUnRegisterTraceLogging @ 0x1C0090374
 * Callers:
 *     RaDeleteDriver @ 0x1C008DE8C (RaDeleteDriver.c)
 * Callees:
 *     StorpUninitializePerfTelemetry @ 0x1C00645E4 (StorpUninitializePerfTelemetry.c)
 */

void StorpUnRegisterTraceLogging()
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx

  if ( OnDemandDataProviderInitialized == 1 )
  {
    v0 = qword_1C0079240;
    qword_1C0079240 = 0LL;
    dword_1C0079220 = 0;
    EtwUnregister(v0);
    OnDemandDataProviderInitialized = 0;
  }
  if ( TelemetryProviderInitialized == 1 )
  {
    KeCancelTimer(&g_StorpTraceLoggingHierarchicalResetTimer);
    KeCancelTimer(&g_StorpTraceLoggingDailyTimer);
    if ( g_StorpTraceLoggingPerformanceEnabled || g_StorpTraceLoggingErrorDataEnabled )
      KeCancelTimer(&g_StorpTraceLoggingPerformanceTimer);
    if ( g_StorpTraceLoggingDeviceHealthEnabled )
      KeCancelTimer(&g_StorpTraceLoggingDeviceHealthTimer);
    KeCancelTimer(&g_StorpTraceLoggingDeviceLogPagesTimer);
    v1 = RegHandle;
    RegHandle = 0LL;
    dword_1C0079058 = 0;
    EtwUnregister(v1);
    StorpUninitializePerfTelemetry();
    TelemetryProviderInitialized = 0;
  }
}

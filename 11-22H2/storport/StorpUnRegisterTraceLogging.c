/*
 * XREFs of StorpUnRegisterTraceLogging @ 0x1C00AAED4
 * Callers:
 *     RaDeleteDriver @ 0x1C00A8568 (RaDeleteDriver.c)
 * Callees:
 *     StorpUninitializePerfTelemetry @ 0x1C00731C0 (StorpUninitializePerfTelemetry.c)
 */

void StorpUnRegisterTraceLogging()
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx
  REGHANDLE v2; // rcx

  if ( NotificationProviderInitialized == 1 )
  {
    v0 = qword_1C0092058;
    qword_1C0092058 = 0LL;
    dword_1C0092038 = 0;
    EtwUnregister(v0);
    NotificationProviderInitialized = 0;
  }
  if ( OnDemandDataProviderInitialized == 1 )
  {
    v1 = qword_1C0092020;
    qword_1C0092020 = 0LL;
    dword_1C0092000 = 0;
    EtwUnregister(v1);
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
    v2 = RegHandle;
    RegHandle = 0LL;
    dword_1C00920C8 = 0;
    EtwUnregister(v2);
    StorpUninitializePerfTelemetry();
    TelemetryProviderInitialized = 0;
  }
}

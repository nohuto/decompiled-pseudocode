/*
 * XREFs of ?FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x18004DBB0
 * Callers:
 *     <none>
 * Callees:
 *     atexit @ 0x180022154 (atexit.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180043A88 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180043BE0 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ??1Completer@?$static_lazy@VContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@@details@wil@@QEAA@XZ @ 0x18004C9C4 (--1Completer@-$static_lazy@VContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@@.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::FallbackTelemetryCallback(
        char a1,
        const struct wil::FailureInfo *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  WINBOOL v8; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  if ( InitOnceBeginInitialize(
         &`ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance'::`2'::wrapper,
         0,
         &v8,
         (LPVOID *)&v9)
    && v8 )
  {
    v6 = &`ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance'::`2'::wrapper;
    v9 = (wil::TraceLoggingProvider *)&qword_1801AF020;
    qword_1801AF020 = (__int64)&CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    atexit(_lambda_f445b1b04a1e911cb28a3e84927aae7d_::_lambda_invoker_cdecl_);
    v7 = 0;
    wil::details::static_lazy<ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry>::Completer::~Completer((__int64)&v6);
  }
  if ( !a1 )
  {
    if ( *((_DWORD *)v9 + 5) == 1 )
    {
      wil::TraceLoggingProvider::ReportTelemetryFailure(v9, a2, v4, v5);
    }
    else if ( *((_DWORD *)v9 + 5) == 2 )
    {
      wil::TraceLoggingProvider::ReportTraceLoggingFailure(v9, a2, v4, v5);
    }
  }
}

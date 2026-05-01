/*
 * XREFs of ?IsEnabled@StartWindowTelemetry@@SA_NE_K@Z @ 0x18003CB80
 * Callers:
 *     ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18003C784 (-BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x1801AB4E0 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VStartWindowTelemetry@@@details@wil@@QEAA@XZ @ 0x18003CC14 (--1Completer@-$static_lazy@VStartWindowTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800C3614 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

bool __fastcall StartWindowTelemetry::IsEnabled(char a1)
{
  unsigned __int64 v1; // r8
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  WINBOOL v5; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v6; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v5) = a1;
  v6 = 0LL;
  if ( __std_init_once_begin_initialize(&`StartWindowTelemetry::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6) && v5 )
  {
    v3 = &`StartWindowTelemetry::Instance'::`2'::wrapper;
    v6 = (wil::TraceLoggingProvider *)&qword_18098F9E8;
    qword_18098F9E8 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_7be3e90a96589580164e7896806c54b3_::_lambda_invoker_cdecl_);
    v4 = 0;
    wil::details::static_lazy<StartWindowTelemetry>::Completer::~Completer(&v3);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v6, 0, v1);
}

/*
 * XREFs of ?IsEnabled@StartWindowTelemetry@@SA_NE_K@Z @ 0x180045A98
 * Callers:
 *     ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x1800456BC (-BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x180173D00 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VStartWindowTelemetry@@@details@wil@@QEAA@XZ @ 0x180044AA8 (--1Completer@-$static_lazy@VStartWindowTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

bool __fastcall StartWindowTelemetry::IsEnabled(char a1)
{
  unsigned __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // r8
  union _RTL_RUN_ONCE *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  WINBOOL v7; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v8; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v7) = a1;
  v8 = 0LL;
  if ( __std_init_once_begin_initialize(&`StartWindowTelemetry::Instance'::`2'::wrapper, 0, &v7, (LPVOID *)&v8) && v7 )
  {
    v5 = &`StartWindowTelemetry::Instance'::`2'::wrapper;
    v8 = (wil::TraceLoggingProvider *)&qword_1807B5278;
    qword_1807B5278 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_7be3e90a96589580164e7896806c54b3_::_lambda_invoker_cdecl_);
    v6 = 0;
    wil::details::static_lazy<StartWindowTelemetry>::Completer::~Completer((__int64)&v5, v2, v3);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v8, 0, v1);
}

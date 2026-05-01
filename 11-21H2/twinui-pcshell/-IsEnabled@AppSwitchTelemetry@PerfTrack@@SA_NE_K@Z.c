/*
 * XREFs of ?IsEnabled@AppSwitchTelemetry@PerfTrack@@SA_NE_K@Z @ 0x1804BD7A4
 * Callers:
 *     ??$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@PerfTrack@@SAXAEAW4SwitchLocation@1@$$QEAPEAGAEAW4SwitchInvokeMethod@1@@Z @ 0x1804BD51C (--$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ??1Completer@?$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAA@XZ @ 0x180386604 (--1Completer@-$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAA@XZ.c)
 */

char __fastcall PerfTrack::AppSwitchTelemetry::IsEnabled(char a1)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v4) = a1;
  v5 = 0LL;
  if ( __std_init_once_begin_initialize(&`PerfTrack::AppSwitchTelemetry::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5)
    && v4 )
  {
    v2 = &`PerfTrack::AppSwitchTelemetry::Instance'::`2'::wrapper;
    v5 = (wil::TraceLoggingProvider *)&qword_1807B5548;
    qword_1807B5548 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_2ca303a503a9bc4bb017c32a5a335e85_::_lambda_invoker_cdecl_);
    v3 = 0;
    wil::details::static_lazy<PerfTrack::AppSwitchTelemetry>::Completer::~Completer((__int64)&v2);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v5, 0);
}

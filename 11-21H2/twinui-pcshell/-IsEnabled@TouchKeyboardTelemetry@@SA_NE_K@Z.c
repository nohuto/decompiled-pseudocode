/*
 * XREFs of ?IsEnabled@TouchKeyboardTelemetry@@SA_NE_K@Z @ 0x1804823D8
 * Callers:
 *     ??$HostInvokedMethod@AEAPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07$$CBGAEBU_GUID@@_N_N_N_NAEB_NAEB_NAEA_NAEA_NAEA_NPEBG_NAEA_NHAEA_N@TouchKeyboardTelemetry@@SAXAEAPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@21AEBU_GUID@@$$QEA_N444AEB_N5AEA_N66$$QEAPEBG46$$QEAH6@Z @ 0x18047F5F0 (--$HostInvokedMethod@AEAPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07$$CBGAEBU_GUID.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ??1Completer@?$static_lazy@VTouchKeyboardTelemetry@@@details@wil@@QEAA@XZ @ 0x1804803D8 (--1Completer@-$static_lazy@VTouchKeyboardTelemetry@@@details@wil@@QEAA@XZ.c)
 */

char __fastcall TouchKeyboardTelemetry::IsEnabled(char a1)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v4) = a1;
  v5 = 0LL;
  if ( __std_init_once_begin_initialize(&`TouchKeyboardTelemetry::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v2 = &`TouchKeyboardTelemetry::Instance'::`2'::wrapper;
    v5 = (wil::TraceLoggingProvider *)&qword_1807B54C0;
    qword_1807B54C0 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_1bb754991d9aec61d6443053699089ac_::_lambda_invoker_cdecl_);
    v3 = 0;
    wil::details::static_lazy<TouchKeyboardTelemetry>::Completer::~Completer((__int64)&v2);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v5, 0);
}

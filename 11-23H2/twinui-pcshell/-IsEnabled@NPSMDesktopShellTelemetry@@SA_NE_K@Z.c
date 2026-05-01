/*
 * XREFs of ?IsEnabled@NPSMDesktopShellTelemetry@@SA_NE_K@Z @ 0x1800364A0
 * Callers:
 *     ??$TraceDbgMsg@AEAY0BC@$$CBGAEAPEAUHWND__@@@NPSMDesktopShellTelemetry@@SAXAEAY0BC@$$CBGAEAPEAUHWND__@@@Z @ 0x180036428 (--$TraceDbgMsg@AEAY0BC@$$CBGAEAPEAUHWND__@@@NPSMDesktopShellTelemetry@@SAXAEAY0BC@$$CBGAEAPEAUHW.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800C3614 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??1Completer@?$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAA@XZ @ 0x1806ED95C (--1Completer@-$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAA@XZ.c)
 */

bool __fastcall NPSMDesktopShellTelemetry::IsEnabled(char a1)
{
  unsigned __int64 v1; // r8
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  WINBOOL v5; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v6; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v5) = a1;
  v6 = 0LL;
  if ( __std_init_once_begin_initialize(&`NPSMDesktopShellTelemetry::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6)
    && v5 )
  {
    v3 = &`NPSMDesktopShellTelemetry::Instance'::`2'::wrapper;
    v6 = (wil::TraceLoggingProvider *)&qword_18098ED38;
    qword_18098ED38 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_f99bc1824c278e72bef545089591412c_::_lambda_invoker_cdecl_);
    v4 = 0;
    wil::details::static_lazy<NPSMDesktopShellTelemetry>::Completer::~Completer(&v3);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v6, 0, v1);
}

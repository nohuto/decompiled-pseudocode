/*
 * XREFs of ?IsEnabled@PenWorkspaceBrokerTelemetry@@SA_NE_K@Z @ 0x1803B814C
 * Callers:
 *     ??$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z @ 0x1803B5F00 (--$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ??1Completer@?$static_lazy@VPenWorkspaceBrokerTelemetry@@@details@wil@@QEAA@XZ @ 0x1803B734C (--1Completer@-$static_lazy@VPenWorkspaceBrokerTelemetry@@@details@wil@@QEAA@XZ.c)
 */

char __fastcall PenWorkspaceBrokerTelemetry::IsEnabled(char a1)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v4) = a1;
  v5 = 0LL;
  if ( __std_init_once_begin_initialize(&`PenWorkspaceBrokerTelemetry::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5)
    && v4 )
  {
    v2 = &`PenWorkspaceBrokerTelemetry::Instance'::`2'::wrapper;
    v5 = (wil::TraceLoggingProvider *)&qword_1807B5148;
    qword_1807B5148 = (__int64)&PenWorkspaceBrokerTelemetry::`vftable';
    atexit(_lambda_147e36a80022279d49a89264b6535513_::_lambda_invoker_cdecl_);
    v3 = 0;
    wil::details::static_lazy<PenWorkspaceBrokerTelemetry>::Completer::~Completer((__int64)&v2);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v5, 0);
}

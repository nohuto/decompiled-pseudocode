/*
 * XREFs of ?IsEnabled@ShoulderTapExperienceManagerTelemetry@@SA_NE_K@Z @ 0x18036CBC8
 * Callers:
 *     ??$PositionShoulderTapEnd@PEBGHAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG$$QEAHAEAJ22222222222@Z @ 0x18036BF3C (--$PositionShoulderTapEnd@PEBGHAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@ShoulderTapExper.c)
 *     ??$PositionShoulderTapStart@PEBG@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x18036C0BC (--$PositionShoulderTapStart@PEBG@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$ShoulderTap@PEBGPEBGPEBGAEAHAEAHAEAH@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG00AEAH11@Z @ 0x18036C2A0 (--$ShoulderTap@PEBGPEBGPEBGAEAHAEAHAEAH@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG00AEA.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ??1Completer@?$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAA@XZ @ 0x18036C794 (--1Completer@-$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAA@XZ.c)
 */

char __fastcall ShoulderTapExperienceManagerTelemetry::IsEnabled(char a1)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v4) = a1;
  v5 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`ShoulderTapExperienceManagerTelemetry::Instance'::`2'::wrapper,
         0,
         &v4,
         (LPVOID *)&v5)
    && v4 )
  {
    v2 = &`ShoulderTapExperienceManagerTelemetry::Instance'::`2'::wrapper;
    v5 = (wil::TraceLoggingProvider *)&qword_1807B4E58;
    qword_1807B4E58 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_43b277c613f9e9ea449b850c5995e33f_::_lambda_invoker_cdecl_);
    v3 = 0;
    wil::details::static_lazy<ShoulderTapExperienceManagerTelemetry>::Completer::~Completer((__int64)&v2);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v5, 0);
}

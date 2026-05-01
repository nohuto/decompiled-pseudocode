/*
 * XREFs of ?IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z @ 0x1804F52D4
 * Callers:
 *     ??$VAPositioner_AppViewDestroyed@AEAPEAUIApplicationView@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAUIApplicationView@@@Z @ 0x1804F242C (--$VAPositioner_AppViewDestroyed@AEAPEAUIApplicationView@@@VoiceAssistantPositionerTelemetry@@SA.c)
 *     ??$VAPositioner_CacheViewToManage@AEAPEAUIApplicationView@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAUIApplicationView@@@Z @ 0x1804F24CC (--$VAPositioner_CacheViewToManage@AEAPEAUIApplicationView@@@VoiceAssistantPositionerTelemetry@@S.c)
 *     ??$VAPositioner_ControlLostHelper@AEAPEAUIApplicationView@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAUIApplicationView@@@Z @ 0x1804F256C (--$VAPositioner_ControlLostHelper@AEAPEAUIApplicationView@@@VoiceAssistantPositionerTelemetry@@S.c)
 *     ??$VAPositioner_CreateAppViewOperationToUpdateView@AEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AEAHAEAHAEAUtagSIZE@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AEAH3AEAUtagSIZE@@@Z @ 0x1804F260C (--$VAPositioner_CreateAppViewOperationToUpdateView@AEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AE.c)
 *     ??$VAPositioner_HandleRecoveryForView@AEAPEAUIApplicationView@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAUIApplicationView@@@Z @ 0x1804F270C (--$VAPositioner_HandleRecoveryForView@AEAPEAUIApplicationView@@@VoiceAssistantPositionerTelemetr.c)
 *     ??$VAPositioner_HideView@AEAPEAUIApplicationView@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAUIApplicationView@@@Z @ 0x1804F27AC (--$VAPositioner_HideView@AEAPEAUIApplicationView@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAU.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800C50A0 (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

char __fastcall VoiceAssistantPositionerTelemetry::IsEnabled(char a1)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v4) = a1;
  v5 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`VoiceAssistantPositionerTelemetry::Instance'::`2'::wrapper,
         0,
         &v4,
         (LPVOID *)&v5)
    && v4 )
  {
    v2 = &`VoiceAssistantPositionerTelemetry::Instance'::`2'::wrapper;
    v5 = (wil::TraceLoggingProvider *)&qword_1807B55A0;
    qword_1807B55A0 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_b2cc13a1030bf75285c22b578959c011_::_lambda_invoker_cdecl_);
    v3 = 0;
    wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v2);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v5, 0);
}

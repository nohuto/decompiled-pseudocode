/*
 * XREFs of ??$VAPositioner_HandleRecoveryForView@AEAPEAUIApplicationView@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAUIApplicationView@@@Z @ 0x1804F270C
 * Callers:
 *     ?HandleRecoveryForView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804F4E10 (-HandleRecoveryForView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800C50A0 (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ?IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z @ 0x1804F52D4 (-IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z.c)
 *     ?VAPositioner_HandleRecoveryForView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z @ 0x1804F99B4 (-VAPositioner_HandleRecoveryForView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationVie.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_HandleRecoveryForView<IApplicationView * &>(
        struct IApplicationView **a1,
        unsigned __int64 a2)
{
  VoiceAssistantPositionerTelemetry *v3; // rcx
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+48h] [rbp+10h] BYREF
  LPVOID Context; // [rsp+50h] [rbp+18h] BYREF

  if ( VoiceAssistantPositionerTelemetry::IsEnabled((unsigned __int8)a1, a2) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(
           &`VoiceAssistantPositionerTelemetry::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context) )
    {
      if ( fPending )
      {
        v4 = &`VoiceAssistantPositionerTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1807B55A0;
        qword_1807B55A0 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_b2cc13a1030bf75285c22b578959c011_::_lambda_invoker_cdecl_);
        v5 = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v4);
      }
    }
    VoiceAssistantPositionerTelemetry::VAPositioner_HandleRecoveryForView_(v3, *a1);
  }
}

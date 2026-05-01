/*
 * XREFs of ??$VAPositioner_CreateAppViewOperationToUpdateView@AEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AEAHAEAHAEAUtagSIZE@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AEAH3AEAUtagSIZE@@@Z @ 0x1804F260C
 * Callers:
 *     ?CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1804F3E08 (-CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAU.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800C50A0 (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ?IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z @ 0x1804F52D4 (-IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z.c)
 *     ?VAPositioner_CreateAppViewOperationToUpdateView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@_NUtagRECT@@HHUtagSIZE@@@Z @ 0x1804F989C (-VAPositioner_CreateAppViewOperationToUpdateView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIA.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_CreateAppViewOperationToUpdateView<IApplicationView * &,bool &,tagRECT &,int &,int &,tagSIZE &>(
        struct IApplicationView **a1,
        bool *a2,
        struct tagRECT *a3,
        int *a4,
        int *a5,
        struct tagSIZE *a6)
{
  struct tagSIZE v10; // rax
  WINBOOL fPending; // [rsp+40h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-20h] BYREF
  struct tagRECT v13; // [rsp+50h] [rbp-18h] BYREF

  if ( VoiceAssistantPositionerTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
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
        *(_QWORD *)&v13.left = &`VoiceAssistantPositionerTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1807B55A0;
        qword_1807B55A0 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_b2cc13a1030bf75285c22b578959c011_::_lambda_invoker_cdecl_);
        v13.right = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v13);
      }
    }
    v10 = *a6;
    v13 = *a3;
    VoiceAssistantPositionerTelemetry::VAPositioner_CreateAppViewOperationToUpdateView_(
      (VoiceAssistantPositionerTelemetry *)(unsigned int)*a5,
      *a1,
      *a2,
      &v13,
      *a4,
      *a5,
      v10);
  }
}

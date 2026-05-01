/*
 * XREFs of ??$SnapAssistItemSelected@AEAPEAUHWND__@@AEBUtagRECT@@@CSnapComponentTelemetry@@SAXAEAPEAUHWND__@@AEBUtagRECT@@@Z @ 0x18059A9F8
 * Callers:
 *     ?ItemSelected@CSnapAssistControllerBase@@UEAAJPEAUHWND__@@PEBUtagRECT@@@Z @ 0x18059C740 (-ItemSelected@CSnapAssistControllerBase@@UEAAJPEAUHWND__@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800C50A0 (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x1805940E4 (-IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z.c)
 *     ?SnapAssistItemSelected_@CSnapComponentTelemetry@@QEAAXPEAUHWND__@@UtagRECT@@@Z @ 0x18059CDC8 (-SnapAssistItemSelected_@CSnapComponentTelemetry@@QEAAXPEAUHWND__@@UtagRECT@@@Z.c)
 */

void __fastcall CSnapComponentTelemetry::SnapAssistItemSelected<HWND__ * &,tagRECT const &>(
        HWND *a1,
        struct tagRECT *a2)
{
  CSnapComponentTelemetry *v4; // rcx
  HWND v5; // rdx
  struct tagRECT v6; // [rsp+20h] [rbp-18h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp+18h] BYREF
  LPVOID Context; // [rsp+58h] [rbp+20h] BYREF

  if ( CSnapComponentTelemetry::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CSnapComponentTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        *(_QWORD *)&v6.left = &`CSnapComponentTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1807B4700;
        qword_1807B4700 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_3442a9d6c0a6f0a8d43c13feb2a6d4f2_::_lambda_invoker_cdecl_);
        v6.right = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v6);
      }
    }
    v5 = *a1;
    v6 = *a2;
    CSnapComponentTelemetry::SnapAssistItemSelected_(v4, v5, &v6);
  }
}

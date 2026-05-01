/*
 * XREFs of ??$SnapAssistZOrder@AEBUCRect@Geometry@@AEAPEAUHWND__@@AEAPEAU3@@XamlSwitcherTelemetry@@SAXAEBUCRect@Geometry@@AEAPEAUHWND__@@1@Z @ 0x1805FF8B4
 * Callers:
 *     ?GetSnapAssistZOrder@XamlSnapAssistViewHost@@AEAAPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x180602728 (-GetSnapAssistZOrder@XamlSnapAssistViewHost@@AEAAPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@.c)
 * Callees:
 *     ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x180017060 (-IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z.c)
 *     ??1Completer@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ @ 0x180017200 (--1Completer@-$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ?SnapAssistZOrder_@XamlSwitcherTelemetry@@QEAAXAEBUtagRECT@@PEAUHWND__@@1@Z @ 0x180603D9C (-SnapAssistZOrder_@XamlSwitcherTelemetry@@QEAAXAEBUtagRECT@@PEAUHWND__@@1@Z.c)
 */

void __fastcall XamlSwitcherTelemetry::SnapAssistZOrder<Geometry::CRect const &,HWND__ * &,HWND__ * &>(
        struct tagRECT *a1,
        HWND *a2,
        HWND *a3)
{
  XamlSwitcherTelemetry *v6; // rcx
  LPVOID Context; // [rsp+20h] [rbp-28h] BYREF
  union _RTL_RUN_ONCE *v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  WINBOOL fPending; // [rsp+68h] [rbp+20h] BYREF

  if ( XamlSwitcherTelemetry::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`XamlSwitcherTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v8 = &`XamlSwitcherTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1807B4440;
        qword_1807B4440 = (__int64)&XamlSwitcherTelemetry::`vftable';
        atexit(_lambda_2520381e1860fe6008a618d103f3de1f_::_lambda_invoker_cdecl_);
        v9 = 0;
        wil::details::static_lazy<XamlSwitcherTelemetry>::Completer::~Completer((__int64)&v8);
      }
    }
    XamlSwitcherTelemetry::SnapAssistZOrder_(v6, a1, *a2, *a3);
  }
}

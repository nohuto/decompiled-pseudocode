/*
 * XREFs of ??$SnapWindowFromSnapAssist@AEAPEAUHWND__@@AEAURect@Foundation@Windows@@I@CSnapComponentTelemetry@@SAXAEAPEAUHWND__@@AEAURect@Foundation@Windows@@$$QEAI@Z @ 0x180669210
 * Callers:
 *     ?SnapWindowFromSnapAssist@CSnapAssistControllerBase@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@4@@Z @ 0x18066BB80 (-SnapWindowFromSnapAssist@CSnapAssistControllerBase@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArr.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800173DC (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x18066189C (-IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z.c)
 *     ?SnapWindowFromSnapAssist_@CSnapComponentTelemetry@@QEAAXPEAUHWND__@@AEBURect@Foundation@Windows@@I@Z @ 0x18066BD00 (-SnapWindowFromSnapAssist_@CSnapComponentTelemetry@@QEAAXPEAUHWND__@@AEBURect@Foundation@Windows.c)
 */

void __fastcall CSnapComponentTelemetry::SnapWindowFromSnapAssist<HWND__ * &,Windows::Foundation::Rect &,unsigned int>(
        HWND *a1,
        const struct Windows::Foundation::Rect *a2,
        unsigned int *a3)
{
  CSnapComponentTelemetry *v6; // rcx
  LPVOID Context; // [rsp+20h] [rbp-28h] BYREF
  union _RTL_RUN_ONCE *v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  WINBOOL fPending; // [rsp+68h] [rbp+20h] BYREF

  if ( CSnapComponentTelemetry::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CSnapComponentTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v8 = &`CSnapComponentTelemetry::Instance'::`2'::wrapper;
        Context = &qword_18098EBC8;
        qword_18098EBC8 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_3442a9d6c0a6f0a8d43c13feb2a6d4f2_::_lambda_invoker_cdecl_);
        v9 = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v8);
      }
    }
    CSnapComponentTelemetry::SnapWindowFromSnapAssist_(v6, *a1, a2, *a3);
  }
}

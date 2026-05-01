/*
 * XREFs of ??$GestureActionResult@AEAIAEAIAEAH@MultitaskingViewTelemetry@@SAXAEAI0AEAH@Z @ 0x18049D864
 * Callers:
 *     ?PTPGestureActionCompletedTelemetry@MultitaskingViewGestureTelemetry@@YAHIIH@Z @ 0x18049DA90 (-PTPGestureActionCompletedTelemetry@MultitaskingViewGestureTelemetry@@YAHIIH@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800C50A0 (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x180496F94 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?GestureActionResult_@MultitaskingViewTelemetry@@QEBAXII_N@Z @ 0x18049D9E8 (-GestureActionResult_@MultitaskingViewTelemetry@@QEBAXII_N@Z.c)
 */

void __fastcall MultitaskingViewTelemetry::GestureActionResult<unsigned int &,unsigned int &,int &>(
        unsigned int *a1,
        unsigned int *a2,
        _DWORD *a3)
{
  MultitaskingViewTelemetry *v6; // rcx
  LPVOID Context; // [rsp+20h] [rbp-28h] BYREF
  union _RTL_RUN_ONCE *v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  WINBOOL fPending; // [rsp+68h] [rbp+20h] BYREF

  if ( MultitaskingViewTelemetry::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`MultitaskingViewTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v8 = &`MultitaskingViewTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1807B4528;
        qword_1807B4528 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
        v9 = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v8);
      }
    }
    MultitaskingViewTelemetry::GestureActionResult_(v6, *a1, *a2, *a3 != 0);
  }
}

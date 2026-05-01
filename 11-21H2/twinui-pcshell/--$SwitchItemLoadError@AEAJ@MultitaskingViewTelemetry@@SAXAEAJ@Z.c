/*
 * XREFs of ??$SwitchItemLoadError@AEAJ@MultitaskingViewTelemetry@@SAXAEAJ@Z @ 0x1804B4A48
 * Callers:
 *     ?v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180237380 (-v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationSt.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800C50A0 (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x180496F94 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?SwitchItemLoadError_@MultitaskingViewTelemetry@@QEBAXJ@Z @ 0x1804B4CC0 (-SwitchItemLoadError_@MultitaskingViewTelemetry@@QEBAXJ@Z.c)
 */

void __fastcall MultitaskingViewTelemetry::SwitchItemLoadError<long &>(int *a1)
{
  MultitaskingViewTelemetry *v2; // rcx
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+48h] [rbp+10h] BYREF
  LPVOID Context; // [rsp+50h] [rbp+18h] BYREF

  if ( MultitaskingViewTelemetry::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`MultitaskingViewTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v3 = &`MultitaskingViewTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1807B4528;
        qword_1807B4528 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
        v4 = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v3);
      }
    }
    MultitaskingViewTelemetry::SwitchItemLoadError_(v2, *a1);
  }
}

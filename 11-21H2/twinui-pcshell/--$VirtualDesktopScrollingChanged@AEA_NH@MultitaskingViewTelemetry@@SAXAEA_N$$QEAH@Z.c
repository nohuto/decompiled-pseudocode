/*
 * XREFs of ??$VirtualDesktopScrollingChanged@AEA_NH@MultitaskingViewTelemetry@@SAXAEA_N$$QEAH@Z @ 0x1804D93D0
 * Callers:
 *     ?NotifyScrollingChanged@CVirtualDesktopContainerElement@@UEAAX_N@Z @ 0x1804DAAF0 (-NotifyScrollingChanged@CVirtualDesktopContainerElement@@UEAAX_N@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800C50A0 (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x180496F94 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?VirtualDesktopScrollingChanged_@MultitaskingViewTelemetry@@QEBAX_NI@Z @ 0x1804DB12C (-VirtualDesktopScrollingChanged_@MultitaskingViewTelemetry@@QEBAX_NI@Z.c)
 */

void __fastcall MultitaskingViewTelemetry::VirtualDesktopScrollingChanged<bool &,int>(bool *a1, unsigned int *a2)
{
  MultitaskingViewTelemetry *v4; // rcx
  union _RTL_RUN_ONCE *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+50h] [rbp+18h] BYREF
  LPVOID Context; // [rsp+58h] [rbp+20h] BYREF

  if ( MultitaskingViewTelemetry::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`MultitaskingViewTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v5 = &`MultitaskingViewTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1807B4528;
        qword_1807B4528 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
        v6 = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v5);
      }
    }
    MultitaskingViewTelemetry::VirtualDesktopScrollingChanged_(v4, *a1, *a2);
  }
}

/*
 * XREFs of ??$SwitchItemInvoked@AEA_KHPEAG@MultitaskingViewTelemetry@@SAXAEA_K$$QEAH$$QEAPEAG@Z @ 0x180589F5C
 * Callers:
 *     ?InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z @ 0x18058A370 (-InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800173DC (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x18054F3C8 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?SwitchItemInvoked_@MultitaskingViewTelemetry@@QEBAX_KIPEBG@Z @ 0x18058A5A0 (-SwitchItemInvoked_@MultitaskingViewTelemetry@@QEBAX_KIPEBG@Z.c)
 */

void __fastcall MultitaskingViewTelemetry::SwitchItemInvoked<unsigned __int64 &,int,unsigned short *>(
        unsigned __int64 *a1,
        unsigned int *a2,
        const unsigned __int16 **a3)
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
        Context = &qword_18098EA08;
        qword_18098EA08 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
        v9 = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v8);
      }
    }
    MultitaskingViewTelemetry::SwitchItemInvoked_(v6, *a1, *a2, *a3);
  }
}

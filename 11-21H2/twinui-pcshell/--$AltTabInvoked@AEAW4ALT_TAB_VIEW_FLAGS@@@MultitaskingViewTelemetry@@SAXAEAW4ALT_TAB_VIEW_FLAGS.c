/*
 * XREFs of ??$AltTabInvoked@AEAW4ALT_TAB_VIEW_FLAGS@@@MultitaskingViewTelemetry@@SAXAEAW4ALT_TAB_VIEW_FLAGS@@@Z @ 0x1804995F0
 * Callers:
 *     _lambda_96b4b9d69bfc42f917c8cf51ea7a8297_::operator() @ 0x1804997C4 (_lambda_96b4b9d69bfc42f917c8cf51ea7a8297_--operator().c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800C50A0 (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x180496F94 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?AltTabInvoked_@MultitaskingViewTelemetry@@QEBAXW4ALT_TAB_VIEW_FLAGS@@@Z @ 0x1804999A8 (-AltTabInvoked_@MultitaskingViewTelemetry@@QEBAXW4ALT_TAB_VIEW_FLAGS@@@Z.c)
 */

char __fastcall MultitaskingViewTelemetry::AltTabInvoked<enum ALT_TAB_VIEW_FLAGS &>(unsigned int *a1)
{
  char result; // al
  __int64 v3; // rcx
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+48h] [rbp+10h] BYREF
  LPVOID Context; // [rsp+50h] [rbp+18h] BYREF

  result = MultitaskingViewTelemetry::IsEnabled((char)a1);
  if ( result )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`MultitaskingViewTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v4 = &`MultitaskingViewTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1807B4528;
        qword_1807B4528 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
        v5 = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v4);
      }
    }
    return MultitaskingViewTelemetry::AltTabInvoked_(v3, *a1);
  }
  return result;
}

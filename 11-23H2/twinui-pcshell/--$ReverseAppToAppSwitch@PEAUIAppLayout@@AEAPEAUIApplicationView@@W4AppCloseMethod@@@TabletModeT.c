/*
 * XREFs of ??$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeTelemetry@@SAX$$QEAPEAUIAppLayout@@AEAPEAUIApplicationView@@$$QEAW4AppCloseMethod@@@Z @ 0x1805B7B8C
 * Callers:
 *     ?ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1805C2734 (-ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetAppViewCloseOverrideOperation@WindowArrangementView@@AEAAJPEAUITabletModePositioner@@PEAUIApplicationView@@PEAPEAUIAppLayoutOperation@@@Z @ 0x1805D1CC4 (-GetAppViewCloseOverrideOperation@WindowArrangementView@@AEAAJPEAUITabletModePositioner@@PEAUIAp.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800173DC (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ?IsEnabled@TabletModeTelemetry@@SA_NE_K@Z @ 0x1805BD5E0 (-IsEnabled@TabletModeTelemetry@@SA_NE_K@Z.c)
 *     ?ReverseAppToAppSwitch_@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@W4AppCloseMethod@@@Z @ 0x1805BE1B8 (-ReverseAppToAppSwitch_@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@W4AppClo.c)
 */

char __fastcall TabletModeTelemetry::ReverseAppToAppSwitch<IAppLayout *,IApplicationView * &,enum AppCloseMethod>(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int *a3)
{
  char result; // al
  __int64 v7; // rcx
  LPVOID Context; // [rsp+20h] [rbp-28h] BYREF
  union _RTL_RUN_ONCE *v9; // [rsp+28h] [rbp-20h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  WINBOOL fPending; // [rsp+68h] [rbp+20h] BYREF

  result = TabletModeTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2);
  if ( result )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`TabletModeTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v9 = &`TabletModeTelemetry::Instance'::`2'::wrapper;
        Context = &qword_18098EA70;
        qword_18098EA70 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_51d33002daa63bfc4d65f85f7f956340_::_lambda_invoker_cdecl_);
        v10 = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v9);
      }
    }
    return TabletModeTelemetry::ReverseAppToAppSwitch_(v7, *a1, *a2, *a3);
  }
  return result;
}

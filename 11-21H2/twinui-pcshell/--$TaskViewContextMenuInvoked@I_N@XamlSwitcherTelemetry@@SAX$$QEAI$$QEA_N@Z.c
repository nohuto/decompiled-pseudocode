/*
 * XREFs of ??$TaskViewContextMenuInvoked@I_N@XamlSwitcherTelemetry@@SAX$$QEAI$$QEA_N@Z @ 0x180440100
 * Callers:
 *     ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x180441C28 (-ContextMenuInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISw.c)
 * Callees:
 *     ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x180017060 (-IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z.c)
 *     ??1Completer@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ @ 0x180017200 (--1Completer@-$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ?TaskViewContextMenuInvoked_@XamlSwitcherTelemetry@@QEBAXI_N@Z @ 0x180444D58 (-TaskViewContextMenuInvoked_@XamlSwitcherTelemetry@@QEBAXI_N@Z.c)
 */

void __fastcall XamlSwitcherTelemetry::TaskViewContextMenuInvoked<unsigned int,bool>(unsigned int *a1, bool *a2)
{
  XamlSwitcherTelemetry *v4; // rcx
  union _RTL_RUN_ONCE *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+50h] [rbp+18h] BYREF
  LPVOID Context; // [rsp+58h] [rbp+20h] BYREF

  if ( XamlSwitcherTelemetry::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`XamlSwitcherTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v5 = &`XamlSwitcherTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1807B4440;
        qword_1807B4440 = (__int64)&XamlSwitcherTelemetry::`vftable';
        atexit(_lambda_2520381e1860fe6008a618d103f3de1f_::_lambda_invoker_cdecl_);
        v6 = 0;
        wil::details::static_lazy<XamlSwitcherTelemetry>::Completer::~Completer((__int64)&v5);
      }
    }
    XamlSwitcherTelemetry::TaskViewContextMenuInvoked_(v4, *a1, *a2);
  }
}

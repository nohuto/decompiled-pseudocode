/*
 * XREFs of ?get@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z @ 0x18001C194
 * Callers:
 *     ??$WorkAreaUpdate@AEAMAEAMMMAEAN@XamlSwitcherTelemetry@@SAXAEAM0$$QEAM1AEAN@Z @ 0x18001C0F4 (--$WorkAreaUpdate@AEAMAEAMMMAEAN@XamlSwitcherTelemetry@@SAXAEAM0$$QEAM1AEAN@Z.c)
 *     ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x18001C170 (-IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z.c)
 *     ?CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180078304 (-CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ??$SnapAssistZOrder@AEBUCRect@Geometry@@AEAPEAUHWND__@@AEAPEAU3@@XamlSwitcherTelemetry@@SAXAEBUCRect@Geometry@@AEAPEAUHWND__@@1@Z @ 0x1807692D8 (--$SnapAssistZOrder@AEBUCRect@Geometry@@AEAPEAUHWND__@@AEAPEAU3@@XamlSwitcherTelemetry@@SAXAEBUC.c)
 *     ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x18077DA3C (-ContextMenuInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISw.c)
 *     ??$DisplayMonitorInfoUpdate@MMAEBN@XamlSwitcherTelemetry@@SAX$$QEAM0AEBN@Z @ 0x180785EF0 (--$DisplayMonitorInfoUpdate@MMAEBN@XamlSwitcherTelemetry@@SAX$$QEAM0AEBN@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ @ 0x18001C228 (--1Completer@-$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<XamlSwitcherTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0LL;
  if ( __std_init_once_begin_initialize(&`XamlSwitcherTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v6, (LPVOID *)&v7)
    && (_DWORD)v6 )
  {
    v4 = &`XamlSwitcherTelemetry::Instance'::`2'::wrapper;
    v7 = &qword_18098F2E8;
    qword_18098F2E8 = (__int64)&XamlSwitcherTelemetry::`vftable';
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<XamlSwitcherTelemetry>::Completer::~Completer(&v4);
  }
  return v7;
}

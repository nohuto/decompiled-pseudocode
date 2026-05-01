/*
 * XREFs of ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x18001C170
 * Callers:
 *     ??$WorkAreaUpdate@AEAMAEAMMMAEAN@XamlSwitcherTelemetry@@SAXAEAM0$$QEAM1AEAN@Z @ 0x18001C0F4 (--$WorkAreaUpdate@AEAMAEAMMMAEAN@XamlSwitcherTelemetry@@SAXAEAM0$$QEAM1AEAN@Z.c)
 *     ?CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180078304 (-CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ??$SnapAssistZOrder@AEBUCRect@Geometry@@AEAPEAUHWND__@@AEAPEAU3@@XamlSwitcherTelemetry@@SAXAEBUCRect@Geometry@@AEAPEAUHWND__@@1@Z @ 0x1807692D8 (--$SnapAssistZOrder@AEBUCRect@Geometry@@AEAPEAUHWND__@@AEAPEAU3@@XamlSwitcherTelemetry@@SAXAEBUC.c)
 *     ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x18077DA3C (-ContextMenuInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISw.c)
 *     ??$DisplayMonitorInfoUpdate@MMAEBN@XamlSwitcherTelemetry@@SAX$$QEAM0AEBN@Z @ 0x180785EF0 (--$DisplayMonitorInfoUpdate@MMAEBN@XamlSwitcherTelemetry@@SAX$$QEAM0AEBN@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z @ 0x18001C194 (-get@-$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z.c)
 */

bool __fastcall XamlSwitcherTelemetry::IsEnabled(__int64 a1)
{
  wil::TraceLoggingProvider *v1; // rax
  unsigned __int64 v2; // r8

  v1 = (wil::TraceLoggingProvider *)wil::details::static_lazy<XamlSwitcherTelemetry>::get(
                                      a1,
                                      _lambda_2520381e1860fe6008a618d103f3de1f_::_lambda_invoker_cdecl_);
  return wil::TraceLoggingProvider::IsEnabled_(v1, 0, v2);
}

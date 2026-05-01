/*
 * XREFs of ??$make_unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P812345@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVLightDismissEventHandler@2345@@ZP812345@E$AAAXV678@@ZV92345@@details@wil@@YA?AV?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P834567@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVLightDismissEventHandler@4567@@ZP834567@E$AAAXV89Windows@@@Z1@Z @ 0x18007E20C
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x18007D65C (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     ?RegisterForEvents@?QXamlBaseViewController@@XamlAltTabViewController@@UE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18077A124 (-RegisterForEvents@-QXamlBaseViewController@@XamlAltTabViewController@@UE$AAAXAEBUXamlExplorerHo.c)
 *     ?RegisterForEvents@?QXamlBaseViewController@@GuidedSnapAssistViewController@@UE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180789E34 (-RegisterForEvents@-QXamlBaseViewController@@GuidedSnapAssistViewController@@UE$AAAXAEBUXamlExpl.c)
 * Callees:
 *     ?add@LightDismiss@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVLightDismissEventHandler@3456@@Z @ 0x180072594 (-add@LightDismiss@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AA.c)
 *     ??0?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@VEventRegistrationToken@Foundation@Windows@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P856789@E$AAAX0@Z@Z @ 0x18007E1C0 (--0-$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@Window.c)
 */

_QWORD *wil::details::make_unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel,Windows::Foundation::EventRegistrationToken (WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::*)(WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler __gc *)__gc ,void (WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::*)(Windows::Foundation::EventRegistrationToken)__gc ,WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  va_list va; // [rsp+58h] [rbp+20h]
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF
  __int64 v8; // [rsp+60h] [rbp+28h]
  va_list va1; // [rsp+68h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  v8 = va_arg(va1, _QWORD);
  WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::LightDismiss::add(a2, (__int64 *)va, v8);
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>(
    a1,
    v7,
    a2,
    (__int64)WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::LightDismiss::remove);
  return a1;
}

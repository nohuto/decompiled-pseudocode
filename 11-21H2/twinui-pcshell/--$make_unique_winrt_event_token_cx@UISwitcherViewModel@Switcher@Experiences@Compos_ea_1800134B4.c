/*
 * XREFs of ??$make_unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P812345@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemCloseInvokedEventHandler@2345@@ZP812345@E$AAAXV678@@ZV92345@@details@wil@@YA?AV?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P834567@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemCloseInvokedEventHandler@4567@@ZP834567@E$AAAXV89Windows@@@Z1@Z @ 0x1800134B4
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x180010454 (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     ?RegisterForEvents@XamlAltTabViewController@@QE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@9Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18060F194 (-RegisterForEvents@XamlAltTabViewController@@QE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@.c)
 *     ?RegisterForEvents@XamlSnapAssistViewController@@QE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@9Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180611A18 (-RegisterForEvents@XamlSnapAssistViewController@@QE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerH.c)
 * Callees:
 *     ??0?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@VEventRegistrationToken@Foundation@Windows@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P856789@E$AAAX0@Z@Z @ 0x18001355C (--0-$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@Window.c)
 *     ?add@SwitchItemCloseInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemCloseInvokedEventHandler@3456@@Z @ 0x180042C7C (-add@SwitchItemCloseInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInter.c)
 */

__int64 wil::details::make_unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel,Windows::Foundation::EventRegistrationToken (WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::*)(WindowsInternal::ComposableShell::Experiences::Switcher::ItemCloseInvokedEventHandler __gc *)__gc ,void (WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::*)(Windows::Foundation::EventRegistrationToken)__gc ,WindowsInternal::ComposableShell::Experiences::Switcher::ItemCloseInvokedEventHandler>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  _QWORD *v5; // rax
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  __int64 v9; // [rsp+50h] [rbp+28h]
  va_list va1; // [rsp+58h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  v9 = va_arg(va1, _QWORD);
  v5 = (_QWORD *)WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemCloseInvoked::add(
                   a2,
                   (__int64 *)va,
                   v9);
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>(
    a1,
    *v5,
    a2,
    WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemCloseInvoked::remove);
  return a1;
}

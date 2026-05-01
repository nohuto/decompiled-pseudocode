/*
 * XREFs of ??$make_unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P812345@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemContextMenuInvokedHandler@2345@@ZP812345@E$AAAXV678@@ZV92345@@details@wil@@YA?AV?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P834567@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemContextMenuInvokedHandler@4567@@ZP834567@E$AAAXV89Windows@@@Z1@Z @ 0x18007E16C
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x18007D65C (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?add@SwitchItemContextMenuInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemContextMenuInvokedHandler@3456@@Z @ 0x1800724F8 (-add@SwitchItemContextMenuInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@Window.c)
 *     ??0?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@VEventRegistrationToken@Foundation@Windows@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P856789@E$AAAX0@Z@Z @ 0x18007E1C0 (--0-$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@Window.c)
 */

__int64 wil::details::make_unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel,Windows::Foundation::EventRegistrationToken (WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::*)(WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler __gc *)__gc ,void (WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::*)(Windows::Foundation::EventRegistrationToken)__gc ,WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(
        __int64 a1,
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
  WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemContextMenuInvoked::add(
    a2,
    (__int64 *)va,
    v8);
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>(
    a1,
    v7,
    a2,
    WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemContextMenuInvoked::remove);
  return a1;
}

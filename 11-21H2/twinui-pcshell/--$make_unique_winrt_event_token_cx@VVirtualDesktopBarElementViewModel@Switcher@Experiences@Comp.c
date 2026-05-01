/*
 * XREFs of ??$make_unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P812345@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVVirtualDesktopInvokedEventHandler@2345@@ZP812345@E$AAAXV678@@ZV92345@@details@wil@@YA?AV?$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@PE$AAVVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P834567@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVVirtualDesktopInvokedEventHandler@4567@@ZP834567@E$AAAXV89Windows@@@Z1@Z @ 0x1800115B4
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x180010454 (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     ?Initialize@VirtualDesktopSwitcherController@@AE$AAAXXZ @ 0x1806129A0 (-Initialize@VirtualDesktopSwitcherController@@AE$AAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::make_unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel,Windows::Foundation::EventRegistrationToken (WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel::*)(WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler __gc *)__gc ,void (WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel::*)(Windows::Foundation::EventRegistrationToken)__gc ,WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5)
{
  _QWORD *v8; // rax
  __int128 v9; // xmm6
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = a1;
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *, __int64))a3)(a2 + *(int *)(a3 + 8), &v11, a5);
  v9 = *a4;
  *(_QWORD *)a1 = *v8;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 8) = Platform::Details::GetWeakReference(a2);
  *(_OWORD *)(a1 + 16) = v9;
  *(_QWORD *)(a1 + 32) = 0LL;
  return a1;
}

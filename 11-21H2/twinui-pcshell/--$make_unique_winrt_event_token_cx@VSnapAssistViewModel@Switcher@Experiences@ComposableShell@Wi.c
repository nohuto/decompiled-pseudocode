/*
 * XREFs of ??$make_unique_winrt_event_token_cx@VSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P812345@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAV?$TypedEventHandler@PE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@78@@ZP812345@E$AAAXV678@@ZV978@@details@wil@@YA?AV?$unique_winrt_event_token_cx@VSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@PE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P834567@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAV?$TypedEventHandler@PE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@9Windows@@@ZP834567@E$AAAXV89Windows@@@Z1@Z @ 0x180610640
 * Callers:
 *     ?RegisterForEvents@XamlSnapAssistViewController@@QE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@9Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180611A18 (-RegisterForEvents@XamlSnapAssistViewController@@QE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerH.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::make_unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistViewModel,Windows::Foundation::EventRegistrationToken (WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistViewModel::*)(Windows::Foundation::TypedEventHandler<Platform::Object __gc *,WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel __gc *> __gc *)__gc ,void (WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistViewModel::*)(Windows::Foundation::EventRegistrationToken)__gc ,Windows::Foundation::TypedEventHandler<Platform::Object __gc *,WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel __gc *>>(
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

/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@V?$TypedEventHandler@PE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Foundation@Windows@@@@YAXPE$ADV?$TypedEventHandler@PE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Foundation@Windows@@@Z @ 0x1807884A4
 * Callers:
 *     _GuidedSnapAssistViewController::[XamlBaseViewController]::RegisterForEvents_::_1_::dtor$15 @ 0x18078A352 (_GuidedSnapAssistViewController--[XamlBaseViewController]--RegisterForEvents_--_1_--dtor$15.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<Windows::Foundation::TypedEventHandler<Platform::Object __gc *,WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel __gc *>>(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}

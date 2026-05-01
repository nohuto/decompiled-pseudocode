/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VBecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVBecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180778640
 * Callers:
 *     _XamlAltTabViewController::[XamlBaseViewController]::RegisterForEvents_::_1_::dtor$14 @ 0x18077A598 (_XamlAltTabViewController--[XamlBaseViewController]--RegisterForEvents_--_1_--dtor$14.c)
 *     _GuidedSnapAssistViewController::[XamlBaseViewController]::RegisterForEvents_::_1_::dtor$7 @ 0x18078A2E0 (_GuidedSnapAssistViewController--[XamlBaseViewController]--RegisterForEvents_--_1_--dtor$7.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::BecameEmptyEventHandler>(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}

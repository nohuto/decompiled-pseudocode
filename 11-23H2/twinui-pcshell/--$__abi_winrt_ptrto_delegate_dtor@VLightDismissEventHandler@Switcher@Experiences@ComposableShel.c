/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VLightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVLightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1807786F0
 * Callers:
 *     _TaskViewFrame::RegisterForEvents_::_1_::dtor$18 @ 0x1802C38FC (_TaskViewFrame--RegisterForEvents_--_1_--dtor$18.c)
 *     _XamlAltTabViewController::[XamlBaseViewController]::RegisterForEvents_::_1_::dtor$17 @ 0x18077A5C5 (_XamlAltTabViewController--[XamlBaseViewController]--RegisterForEvents_--_1_--dtor$17.c)
 *     _GuidedSnapAssistViewController::[XamlBaseViewController]::RegisterForEvents_::_1_::dtor$10 @ 0x18078A30D (_GuidedSnapAssistViewController--[XamlBaseViewController]--RegisterForEvents_--_1_--dtor$10.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler>(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}

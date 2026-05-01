/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18077866C
 * Callers:
 *     _TaskViewFrame::RegisterForEvents_::_1_::dtor$9 @ 0x1802C3851 (_TaskViewFrame--RegisterForEvents_--_1_--dtor$9.c)
 *     _XamlAltTabViewController::[XamlBaseViewController]::RegisterForEvents_::_1_::dtor$11 @ 0x18077A56B (_XamlAltTabViewController--[XamlBaseViewController]--RegisterForEvents_--_1_--dtor$11.c)
 *     _GuidedSnapAssistViewController::[XamlBaseViewController]::RegisterForEvents_::_1_::dtor$4 @ 0x18078A2B3 (_GuidedSnapAssistViewController--[XamlBaseViewController]--RegisterForEvents_--_1_--dtor$4.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemCloseInvokedEventHandler>(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}

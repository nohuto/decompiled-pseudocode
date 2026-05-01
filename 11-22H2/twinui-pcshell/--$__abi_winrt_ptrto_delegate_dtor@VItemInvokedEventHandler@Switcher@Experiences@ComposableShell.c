/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180778698
 * Callers:
 *     _TaskViewFrame::RegisterForEvents_::_1_::dtor$6 @ 0x1802C3818 (_TaskViewFrame--RegisterForEvents_--_1_--dtor$6.c)
 *     _XamlAltTabViewController::[XamlBaseViewController]::RegisterForEvents_::_1_::dtor$8 @ 0x18077A53E (_XamlAltTabViewController--[XamlBaseViewController]--RegisterForEvents_--_1_--dtor$8.c)
 *     _GuidedSnapAssistViewController::[XamlBaseViewController]::RegisterForEvents_::_1_::dtor$1 @ 0x18078A286 (_GuidedSnapAssistViewController--[XamlBaseViewController]--RegisterForEvents_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler>(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}

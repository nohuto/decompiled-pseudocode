/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VVirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVVirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180785FF8
 * Callers:
 *     _TaskViewFrame::RegisterForEvents_::_1_::dtor$29 @ 0x1802C3992 (_TaskViewFrame--RegisterForEvents_--_1_--dtor$29.c)
 *     _VirtualDesktopSwitcherController::Initialize_::_1_::dtor$1 @ 0x18078C760 (_VirtualDesktopSwitcherController--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler>(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}

/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VVirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVVirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18042CBE4
 * Callers:
 *     _TaskViewFrame::RegisterForEvents_::_1_::dtor$29 @ 0x1802132E1 (_TaskViewFrame--RegisterForEvents_--_1_--dtor$29.c)
 *     _MonitorFrame::Initialize_::_1_::dtor$26 @ 0x1804352B2 (_MonitorFrame--Initialize_--_1_--dtor$26.c)
 *     _VirtualDesktopSwitcherController::Initialize_::_1_::dtor$1 @ 0x180612AA8 (_VirtualDesktopSwitcherController--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler>(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}

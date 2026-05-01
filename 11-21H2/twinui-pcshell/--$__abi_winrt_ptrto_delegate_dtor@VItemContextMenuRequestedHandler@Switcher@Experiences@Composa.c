/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuRequestedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuRequestedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18042CB08
 * Callers:
 *     _TaskViewFrame::RegisterForEvents_::_1_::dtor$12 @ 0x1802131D9 (_TaskViewFrame--RegisterForEvents_--_1_--dtor$12.c)
 *     _MonitorFrame::Initialize_::_1_::dtor$9 @ 0x180435180 (_MonitorFrame--Initialize_--_1_--dtor$9.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuRequestedHandler>(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}

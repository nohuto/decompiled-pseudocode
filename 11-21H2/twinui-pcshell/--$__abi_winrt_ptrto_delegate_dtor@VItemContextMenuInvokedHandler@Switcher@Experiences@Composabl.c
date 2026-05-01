/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18042CADC
 * Callers:
 *     _TaskViewFrame::RegisterForEvents_::_1_::dtor$15 @ 0x180213212 (_TaskViewFrame--RegisterForEvents_--_1_--dtor$15.c)
 *     _MonitorFrame::Initialize_::_1_::dtor$11 @ 0x1804351AD (_MonitorFrame--Initialize_--_1_--dtor$11.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}

/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18042CAB0
 * Callers:
 *     _TaskViewFrame::RegisterForEvents_::_1_::dtor$9 @ 0x1802131A0 (_TaskViewFrame--RegisterForEvents_--_1_--dtor$9.c)
 *     _MonitorFrame::Initialize_::_1_::dtor$7 @ 0x180435153 (_MonitorFrame--Initialize_--_1_--dtor$7.c)
 *     _XamlAltTabViewController::RegisterForEvents_::_1_::dtor$8 @ 0x18060F4E8 (_XamlAltTabViewController--RegisterForEvents_--_1_--dtor$8.c)
 *     _XamlSnapAssistViewController::RegisterForEvents_::_1_::dtor$4 @ 0x180611E9A (_XamlSnapAssistViewController--RegisterForEvents_--_1_--dtor$4.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemCloseInvokedEventHandler>(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}

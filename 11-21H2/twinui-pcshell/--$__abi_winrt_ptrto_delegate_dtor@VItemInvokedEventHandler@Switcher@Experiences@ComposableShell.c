/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18042CB34
 * Callers:
 *     _TaskViewFrame::RegisterForEvents_::_1_::dtor$6 @ 0x180213167 (_TaskViewFrame--RegisterForEvents_--_1_--dtor$6.c)
 *     _MonitorFrame::Initialize_::_1_::dtor$5 @ 0x180435126 (_MonitorFrame--Initialize_--_1_--dtor$5.c)
 *     _XamlAltTabViewController::RegisterForEvents_::_1_::dtor$5 @ 0x18060F4BB (_XamlAltTabViewController--RegisterForEvents_--_1_--dtor$5.c)
 *     _XamlSnapAssistViewController::RegisterForEvents_::_1_::dtor$1 @ 0x180611E6D (_XamlSnapAssistViewController--RegisterForEvents_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler>(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}

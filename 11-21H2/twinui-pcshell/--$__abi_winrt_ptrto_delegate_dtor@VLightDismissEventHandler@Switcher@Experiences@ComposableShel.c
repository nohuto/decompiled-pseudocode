/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VLightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVLightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18042CB60
 * Callers:
 *     _TaskViewFrame::RegisterForEvents_::_1_::dtor$18 @ 0x18021324B (_TaskViewFrame--RegisterForEvents_--_1_--dtor$18.c)
 *     _MonitorFrame::Initialize_::_1_::dtor$13 @ 0x1804351DA (_MonitorFrame--Initialize_--_1_--dtor$13.c)
 *     _XamlAltTabViewController::RegisterForEvents_::_1_::dtor$14 @ 0x18060F542 (_XamlAltTabViewController--RegisterForEvents_--_1_--dtor$14.c)
 *     _XamlSnapAssistViewController::RegisterForEvents_::_1_::dtor$10 @ 0x180611EF4 (_XamlSnapAssistViewController--RegisterForEvents_--_1_--dtor$10.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler>(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}

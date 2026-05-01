/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VBecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVBecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18060D7F4
 * Callers:
 *     _XamlAltTabViewController::RegisterForEvents_::_1_::dtor$11 @ 0x18060F515 (_XamlAltTabViewController--RegisterForEvents_--_1_--dtor$11.c)
 *     _XamlSnapAssistViewController::RegisterForEvents_::_1_::dtor$7 @ 0x180611EC7 (_XamlSnapAssistViewController--RegisterForEvents_--_1_--dtor$7.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::BecameEmptyEventHandler>(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}

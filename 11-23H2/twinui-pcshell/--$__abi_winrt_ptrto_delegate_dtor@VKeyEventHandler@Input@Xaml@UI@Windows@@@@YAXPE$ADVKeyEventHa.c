/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VKeyEventHandler@Input@Xaml@UI@Windows@@@@YAXPE$ADVKeyEventHandler@Input@Xaml@UI@Windows@@@Z @ 0x1807786C4
 * Callers:
 *     _XamlAltTabViewController::[XamlBaseViewController]::RegisterForEvents_::_1_::dtor$6 @ 0x18077A511 (_XamlAltTabViewController--[XamlBaseViewController]--RegisterForEvents_--_1_--dtor$6.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<Windows::UI::Xaml::Input::KeyEventHandler>(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}

/*
 * XREFs of ?__abi_IXamlSwitcherWindowInteractionEvents____abi_HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAJ_N_K@Z @ 0x180041E70
 * Callers:
 *     ?__abi_IXamlSwitcherWindowInteractionEvents____abi_HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@WBA@E$AAAJ_N_K@Z @ 0x180203900 (-__abi_IXamlSwitcherWindowInteractionEvents____abi_HostWindowActivationChanged@-QIX_ea_180203900.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_IXamlSwitcherWindowInteractionEvents____abi_HostWindowActivationChanged__QIXamlSwitcherWindowInteractionEvents__XamlBaseViewController__UE_AAAJ_N_K_Z(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 136) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
    JUMPOUT(0x180248A85LL);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 96LL))(a1 + 16);
  return 0LL;
}

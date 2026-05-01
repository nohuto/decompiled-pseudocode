/*
 * XREFs of ?__abi_IXamlSwitcherWindowInteractionEvents____abi_HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAJ_N_K@Z @ 0x180071728
 * Callers:
 *     ?__abi_IXamlSwitcherWindowInteractionEvents____abi_HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@WBA@E$AAAJ_N_K@Z @ 0x1802AF340 (-__abi_IXamlSwitcherWindowInteractionEvents____abi_HostWindowActivationChanged@-QIX_ea_1802AF340.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_IXamlSwitcherWindowInteractionEvents____abi_HostWindowActivationChanged__QIXamlSwitcherWindowInteractionEvents__XamlBaseViewController__UE_AAAJ_N_K_Z(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 136) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
    JUMPOUT(0x180344BC1LL);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 80LL))(a1 + 16);
  return 0LL;
}

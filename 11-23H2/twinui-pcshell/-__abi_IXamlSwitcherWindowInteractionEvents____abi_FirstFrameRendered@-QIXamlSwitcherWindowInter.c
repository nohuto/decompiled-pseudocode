/*
 * XREFs of ?__abi_IXamlSwitcherWindowInteractionEvents____abi_FirstFrameRendered@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAJPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@Xaml@UI@Windows@@@Z @ 0x180071770
 * Callers:
 *     ?__abi_IXamlSwitcherWindowInteractionEvents____abi_FirstFrameRendered@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@WBA@E$AAAJPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@Xaml@UI@Windows@@@Z @ 0x1802AF320 (-__abi_IXamlSwitcherWindowInteractionEvents____abi_FirstFrameRendered@-QIXamlSwitch_ea_1802AF320.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_IXamlSwitcherWindowInteractionEvents____abi_FirstFrameRendered__QIXamlSwitcherWindowInteractionEvents__XamlBaseViewController__UE_AAAJPE_AAVObject_Platform__PE_AAVRoutedEventArgs_Xaml_UI_Windows___Z(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 136) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
    JUMPOUT(0x180344BCFLL);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 104LL))(a1 + 16);
  return 0LL;
}

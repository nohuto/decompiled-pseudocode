/*
 * XREFs of ?__abi_IXamlSwitcherWindowInteractionEvents____abi_FirstFrameRendered@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAJPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@Xaml@UI@Windows@@@Z @ 0x180041E28
 * Callers:
 *     ?__abi_IXamlSwitcherWindowInteractionEvents____abi_FirstFrameRendered@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@WBA@E$AAAJPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@Xaml@UI@Windows@@@Z @ 0x1802038E0 (-__abi_IXamlSwitcherWindowInteractionEvents____abi_FirstFrameRendered@-QIXamlSwitch_ea_1802038E0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_IXamlSwitcherWindowInteractionEvents____abi_FirstFrameRendered__QIXamlSwitcherWindowInteractionEvents__XamlBaseViewController__UE_AAAJPE_AAVObject_Platform__PE_AAVRoutedEventArgs_Xaml_UI_Windows___Z(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 136) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
    JUMPOUT(0x180248A77LL);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 120LL))(a1 + 16);
  return 0LL;
}

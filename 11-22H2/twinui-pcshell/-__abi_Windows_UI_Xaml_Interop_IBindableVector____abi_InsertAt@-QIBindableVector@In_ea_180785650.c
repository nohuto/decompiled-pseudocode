/*
 * XREFs of ?__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_InsertAt@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@UE$AAAJIPE$AAVObject@8@@Z @ 0x180785650
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_InsertAt@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@WCI@E$AAAJIPE$AAVObject@8@@Z @ 0x1802B1E20 (-__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_InsertAt@-QIBindableVector@Interop@Xaml@UI.c)
 * Callees:
 *     ?BindableInsertAt@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@EE$AAAXIPE$AAVObject@8@@Z @ 0x18077D68C (-BindableInsertAt@-QIBindableVector@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitch_ea_18077D68C.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Interop_IBindableVector____abi_InsertAt__QIBindableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__UE_AAAJIPE_AAVObject_8__Z(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, __int64, __int64 *))
{
  if ( *(_BYTE *)(a1 + 168) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    _BindableInsertAt__QIBindableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__EE_AAAXIPE_AAVObject_8__Z(
      a1,
      a2,
      a3);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}

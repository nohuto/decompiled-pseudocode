/*
 * XREFs of ?__abi_Windows_UI_Xaml_Interop_IBindableIterator____abi_get_Current@?QIBindableIterator@Interop@Xaml@UI@Windows@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@UE$AAAJPEAPE$AAVObject@9@@Z @ 0x180446FE0
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableIterator____abi_get_Current@?QIBindableIterator@Interop@Xaml@UI@Windows@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@WBA@E$AAAJPEAPE$AAVObject@9@@Z @ 0x180204280 (-__abi_Windows_UI_Xaml_Interop_IBindableIterator____abi_get_Current@-QIBindableIter_ea_180204280.c)
 * Callees:
 *     ?BindableCurrent@?QCurrent@IBindableIterator@Interop@Xaml@UI@Windows@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@EE$AAAPE$AAVObject@Platform@@XZ @ 0x1804415E0 (-BindableCurrent@-QCurrent@IBindableIterator@Interop@Xaml@UI@Windows@@-$IteratorFor_ea_1804415E0.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Interop_IBindableIterator____abi_get_Current__QIBindableIterator_Interop_Xaml_UI_Windows____IteratorForVectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Details_Collections_Platform__UE_AAAJPEAPE_AAVObject_9__Z(
        __int64 a1,
        __int64 *a2)
{
  if ( *(_BYTE *)(a1 + 104) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  try
  {
    *a2 = 0LL;
    *a2 = _BindableCurrent__QCurrent_IBindableIterator_Interop_Xaml_UI_Windows____IteratorForVectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Details_Collections_Platform__EE_AAAPE_AAVObject_Platform__XZ(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}

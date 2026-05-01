/*
 * XREFs of ?__abi_Windows_UI_Xaml_Interop_IBindableIterator____abi_get_HasCurrent@?QIBindableIterator@Interop@Xaml@UI@Windows@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@UE$AAAJPEA_N@Z @ 0x1807850FC
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableIterator____abi_get_HasCurrent@?QIBindableIterator@Interop@Xaml@UI@Windows@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@WBA@E$AAAJPEA_N@Z @ 0x1802B1CC0 (-__abi_Windows_UI_Xaml_Interop_IBindableIterator____abi_get_HasCurrent@-QIBindableIterator@Inter.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Interop_IBindableIterator____abi_get_HasCurrent__QIBindableIterator_Interop_Xaml_UI_Windows____IteratorForVectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Details_Collections_Platform__UE_AAAJPEA_N_Z(
        _BYTE *a1,
        _BYTE *a2)
{
  if ( a1[104] )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  try
  {
    *a2 = 0;
    *a2 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 88LL))(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}

/*
 * XREFs of ?__abi_Windows_UI_Xaml_Interop_IBindableVectorView____abi_get_Size@?QIBindableVectorView@Interop@Xaml@UI@Windows@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@UE$AAAJPEAI@Z @ 0x18043E928
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableVectorView____abi_get_Size@?QIBindableVectorView@Interop@Xaml@UI@Windows@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@WBI@E$AAAJPEAI@Z @ 0x1802024A0 (-__abi_Windows_UI_Xaml_Interop_IBindableVectorView____abi_get_Size@-QIBindableVectorView@Interop.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Interop_IBindableVectorView____abi_get_Size__QIBindableVectorView_Interop_Xaml_UI_Windows____VectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_Collections_Platform__UE_AAAJPEAI_Z(
        _BYTE *a1,
        _DWORD *a2)
{
  if ( a1[120] )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  try
  {
    *a2 = 0;
    *a2 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 80LL))(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}

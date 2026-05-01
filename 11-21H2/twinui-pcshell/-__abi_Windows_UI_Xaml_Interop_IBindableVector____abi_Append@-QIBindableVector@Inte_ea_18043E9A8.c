/*
 * XREFs of ?__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_Append@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@UE$AAAJPE$AAVObject@8@@Z @ 0x18043E9A8
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_Append@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@WCI@E$AAAJPE$AAVObject@8@@Z @ 0x1802024C0 (-__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_Append@-QIBindableVector@Interop@Xaml@UI@W.c)
 * Callees:
 *     ?BindableAppend@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@EE$AAAXPE$AAVObject@8@@Z @ 0x1804319F0 (-BindableAppend@-QIBindableVector@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitchIt_ea_1804319F0.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Interop_IBindableVector____abi_Append__QIBindableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_Collections_Platform__UE_AAAJPE_AAVObject_8__Z(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64, __int64 *))
{
  if ( *(_BYTE *)(a1 + 168) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    _BindableAppend__QIBindableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_Collections_Platform__EE_AAAXPE_AAVObject_8__Z(
      a1,
      a2);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}

/*
 * XREFs of ?__abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_add_VectorChanged@?QIBindableObservableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@UE$AAAJPE$AAVBindableVectorChangedEventHandler@2345@PEAVEventRegistrationToken@Foundation@5@@Z @ 0x18078517C
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_add_VectorChanged@?QIBindableObservableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@WCA@E$AAAJPE$AAVBindableVectorChangedEventHandler@2345@PEAVEventRegistrationToken@Foundation@5@@Z @ 0x1802B1CE0 (-__abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_add_VectorChanged@-QIBindableObs.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_add_VectorChanged__QIBindableObservableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__UE_AAAJPE_AAVBindableVectorChangedEventHandler_2345_PEAVEventRegistrationToken_Foundation_5__Z(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 168) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  memset_0(&v6, 0, sizeof(v6));
  try
  {
    *a3 = v6;
    *(_BYTE *)(a1 + 112) = 1;
    *a3 = Platform::Details::EventSourceAdd(a1 + 128, a1 + 152);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}

/*
 * XREFs of ??4?$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BDI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18060E5E0
 * Callers:
 *     ?RegisterForEvents@XamlAltTabViewController@@QE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@9Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18060F194 (-RegisterForEvents@XamlAltTabViewController@@QE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@.c)
 *     ?RegisterForEvents@XamlSnapAssistViewController@@QE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@9Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180611A18 (-RegisterForEvents@XamlSnapAssistViewController@@QE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerH.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??1?$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BDI@AA@impl@winrt@@QEAA@XZ @ 0x18060E3AC (--1-$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@-$a.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall __4__factory_event_revoker_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt___MP8type___abi_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BDI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
        winrt::Windows::Foundation::IUnknown *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  v7 = 0LL;
  v8 = v4;
  v9 = v2;
  winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)&v7, a1);
  winrt::Windows::Foundation::IUnknown::operator=(a1, (winrt::Windows::Foundation::IUnknown *)&v9);
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  v5 = v8;
  v8 = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 1) = v5;
  __1__factory_event_revoker_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt___MP8type___abi_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BDI_AA_impl_winrt__QEAA_XZ((winrt::Windows::Foundation::IUnknown *)&v7);
  return a1;
}

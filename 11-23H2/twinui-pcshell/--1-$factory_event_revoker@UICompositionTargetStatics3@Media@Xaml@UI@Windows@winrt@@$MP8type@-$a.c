/*
 * XREFs of ??1?$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BDI@AA@impl@winrt@@QEAA@XZ @ 0x180778F98
 * Callers:
 *     ??1XamlAltTabViewController@@AE$AAA@XZ @ 0x1802ED08A (--1XamlAltTabViewController@@AE$AAA@XZ.c)
 *     _XamlAltTabViewController::_XamlAltTabViewController_::_1_::dtor$6 @ 0x1802ED192 (_XamlAltTabViewController--_XamlAltTabViewController_--_1_--dtor$6.c)
 *     _XamlAltTabViewController::XamlAltTabViewController_::_1_::dtor$5 @ 0x180778C0B (_XamlAltTabViewController--XamlAltTabViewController_--_1_--dtor$5.c)
 *     ??4?$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BDI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180778FE0 (--4-$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@-$a.c)
 *     ?RegisterForEvents@?QXamlBaseViewController@@XamlAltTabViewController@@UE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18077A124 (-RegisterForEvents@-QXamlBaseViewController@@XamlAltTabViewController@@UE$AAAXAEBUXamlExplorerHo.c)
 *     _GuidedSnapAssistViewController::GuidedSnapAssistViewController_::_1_::dtor$6 @ 0x180788864 (_GuidedSnapAssistViewController--GuidedSnapAssistViewController_--_1_--dtor$6.c)
 *     ??1GuidedSnapAssistViewController@@AE$AAA@XZ @ 0x180788CAC (--1GuidedSnapAssistViewController@@AE$AAA@XZ.c)
 *     _GuidedSnapAssistViewController::_GuidedSnapAssistViewController_::_1_::dtor$7 @ 0x180788DEB (_GuidedSnapAssistViewController--_GuidedSnapAssistViewController_--_1_--dtor$7.c)
 *     ?RegisterForEvents@?QXamlBaseViewController@@GuidedSnapAssistViewController@@UE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180789E34 (-RegisterForEvents@-QXamlBaseViewController@@GuidedSnapAssistViewController@@UE$AAAXAEBUXamlExpl.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?revoke_impl@?$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BDI@AA@impl@winrt@@AEAAXUICompositionTargetStatics3@Media@Xaml@UI@Windows@3@@Z @ 0x18077B4AC (-revoke_impl@-$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$M.c)
 */

void __fastcall __1__factory_event_revoker_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt___MP8type___abi_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BDI_AA_impl_winrt__QEAA_XZ(
        winrt::Windows::Foundation::IUnknown *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)this )
  {
    v2 = *(_QWORD *)this;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v2);
    _revoke_impl___factory_event_revoker_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt___MP8type___abi_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BDI_AA_impl_winrt__AEAAXUICompositionTargetStatics3_Media_Xaml_UI_Windows_3__Z(
      this,
      &v2);
  }
  if ( *(_QWORD *)this )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(this);
}

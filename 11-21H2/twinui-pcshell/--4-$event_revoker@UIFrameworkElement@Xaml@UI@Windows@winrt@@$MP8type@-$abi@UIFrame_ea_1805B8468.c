/*
 * XREFs of ??4?$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFrameworkElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBHA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1805B8468
 * Callers:
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1AEBUIInspectable@Foundation@67@@Z @ 0x1805B8EB4 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 * Callees:
 *     ??$swap@U?$weak_ref@UIFrameworkElement@Xaml@UI@Windows@winrt@@@winrt@@$0A@@std@@YAXAEAU?$weak_ref@UIFrameworkElement@Xaml@UI@Windows@winrt@@@winrt@@0@Z @ 0x1805AE478 (--$swap@U-$weak_ref@UIFrameworkElement@Xaml@UI@Windows@winrt@@@winrt@@$0A@@std@@YAXAEAU-$weak_re.c)
 *     ??1?$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFrameworkElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBHA@AA@impl@winrt@@QEAA@XZ @ 0x1805AE830 (--1-$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIFrame_ea_1805AE830.c)
 */

__int64 *__fastcall __4__event_revoker_UIFrameworkElement_Xaml_UI_Windows_winrt___MP8type___abi_UIFrameworkElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BBHA_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v2 = *a2;
  *a2 = 0LL;
  v6 = v2;
  v7 = a2[1];
  std::swap<winrt::weak_ref<winrt::Windows::UI::Xaml::IFrameworkElement>,0>(&v6, a1);
  v4 = v7;
  v7 = a1[1];
  a1[1] = v4;
  __1__event_revoker_UIFrameworkElement_Xaml_UI_Windows_winrt___MP8type___abi_UIFrameworkElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BBHA_AA_impl_winrt__QEAA_XZ(&v6);
  return a1;
}

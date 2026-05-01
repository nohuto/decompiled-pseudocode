/*
 * XREFs of ?perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1801805B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??1IAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x18019B8AC (--1IAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1801A3CC0 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_c7ad7d039b35a8565706af83963bb0b1___ @ 0x1801C155C (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Foundation--IInspectable_winrt--hs.c)
 *     ??$?4UIInspectable@Foundation@Windows@winrt@@Uevent_token@3@$0A@@?$tuple@AEAUIInspectable@Foundation@Windows@winrt@@AEAUevent_token@4@@std@@QEAAAEAV01@$$QEAU?$pair@UIInspectable@Foundation@Windows@winrt@@Uevent_token@4@@1@@Z @ 0x1801C1604 (--$-4UIInspectable@Foundation@Windows@winrt@@Uevent_token@3@$0A@@-$tuple@AEAUIInspectable@Founda.c)
 *     _lambda_c7ad7d039b35a8565706af83963bb0b1_::_lambda_c7ad7d039b35a8565706af83963bb0b1_ @ 0x1801C3ED0 (_lambda_c7ad7d039b35a8565706af83963bb0b1_--_lambda_c7ad7d039b35a8565706af83963bb0b1_.c)
 *     _lambda_c7ad7d039b35a8565706af83963bb0b1_::_lambda_c7ad7d039b35a8565706af83963bb0b1__0 @ 0x1801C3EE8 (_lambda_c7ad7d039b35a8565706af83963bb0b1_--_lambda_c7ad7d039b35a8565706af83963bb0b1__0.c)
 *     _lambda_c7ad7d039b35a8565706af83963bb0b1_::__lambda_c7ad7d039b35a8565706af83963bb0b1_ @ 0x1801C4550 (_lambda_c7ad7d039b35a8565706af83963bb0b1_--__lambda_c7ad7d039b35a8565706af83963bb0b1_.c)
 *     ?RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4StartUpEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x1801C9DD0 (-RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and.c)
 *     ?UpdateWidgetsTelemetryAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1801CCBC8 (-UpdateWidgetsTelemetryAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-.c)
 *     ?VerifyAndActivateAppAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1801CD9DC (-VerifyAndActivateAppAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AugmentedEntryPoint@@@details@wil@@QEAA_NXZ @ 0x1801CED34 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AugmentedEntryPoint@@@details@wil.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_NotifyTaskbarDashboardSettingChanged@@@details@wil@@QEAA_NXZ @ 0x1801CED74 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_NotifyTaskbarDashboardS.c)
 *     ?get_weak@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@QEAA?AU?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1801CF87C (-get_weak@-$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uim.c)
 *     ?SubscribeToDaSettingChanged@DashboardTaskbarSettings@@YA?AU?$pair@UIInspectable@Foundation@Windows@winrt@@Uevent_token@4@@std@@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@@Z @ 0x1801D0AD4 (-SubscribeToDaSettingChanged@DashboardTaskbarSettings@@YA-AU-$pair@UIInspectable@Foundation@Wind.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::perform_delayed_initialization(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  char *v2; // rbx
  __int64 weak; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v7[16]; // [rsp+30h] [rbp-10h] BYREF
  char v8; // [rsp+60h] [rbp+20h] BYREF
  char v9; // [rsp+68h] [rbp+28h] BYREF
  char v10; // [rsp+70h] [rbp+30h] BYREF
  char v11; // [rsp+78h] [rbp+38h] BYREF

  v2 = (char *)this - 24;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync((char *)this - 24, &v8);
  winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync(v2, &v8);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AugmentedEntryPoint>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_AugmentedEntryPoint>::GetImpl'::`2'::impl) )
    winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent(v2, &v8, 1LL);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_NotifyTaskbarDashboardSettingChanged>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_NotifyTaskbarDashboardSettingChanged>::GetImpl'::`2'::impl) )
  {
    weak = winrt::implements<winrt::Windows::Internal::Shell::implementation::DashboardManager,winrt::Windows::Internal::Shell::DashboardManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IEdgeUiTouchInvocation>::get_weak(
             v2,
             &v10);
    lambda_c7ad7d039b35a8565706af83963bb0b1_::_lambda_c7ad7d039b35a8565706af83963bb0b1_(&v9, weak);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v10);
    v4 = lambda_c7ad7d039b35a8565706af83963bb0b1_::_lambda_c7ad7d039b35a8565706af83963bb0b1__0(&v11, &v9);
    winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_c7ad7d039b35a8565706af83963bb0b1___(
      &v8,
      v4);
    v5 = DashboardTaskbarSettings::SubscribeToDaSettingChanged((winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)v7);
    v6[0] = (char *)this + 176;
    v6[1] = (char *)this + 168;
    std::tuple<winrt::Windows::Foundation::IInspectable &,winrt::event_token &>::operator=<winrt::Windows::Foundation::IInspectable,winrt::event_token,0>(
      v6,
      v5);
    winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal::~IAppInstallManagerInternal((winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal *)v7);
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v8);
    lambda_c7ad7d039b35a8565706af83963bb0b1_::__lambda_c7ad7d039b35a8565706af83963bb0b1_(&v9);
  }
}

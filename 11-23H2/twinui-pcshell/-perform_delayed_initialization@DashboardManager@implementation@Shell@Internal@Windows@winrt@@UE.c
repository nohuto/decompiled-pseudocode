/*
 * XREFs of ?perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x180184370
 * Callers:
 *     <none>
 * Callees:
 *     ??1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ @ 0x180085B0C (--1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FBC (--1-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@wi.c)
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1800DAED0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AugmentedEntryPoint@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801168E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AugmentedEntryPoint@@@details@wil@@QEAAX_.c)
 *     ?ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180155034 (-ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?get_weak@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@QEAA?AU?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x18018445C (-get_weak@-$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uim.c)
 *     ??$?4UIInspectable@Foundation@Windows@winrt@@Uevent_token@3@$0A@@?$tuple@AEAUIInspectable@Foundation@Windows@winrt@@AEAUevent_token@4@@std@@QEAAAEAV01@$$QEAU?$pair@UIInspectable@Foundation@Windows@winrt@@Uevent_token@4@@1@@Z @ 0x180184480 (--$-4UIInspectable@Foundation@Windows@winrt@@Uevent_token@3@$0A@@-$tuple@AEAUIInspectable@Founda.c)
 *     ?SubscribeToDaSettingChanged@DashboardTaskbarSettings@@YA?AU?$pair@UIInspectable@Foundation@Windows@winrt@@Uevent_token@4@@std@@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@@Z @ 0x18018452C (-SubscribeToDaSettingChanged@DashboardTaskbarSettings@@YA-AU-$pair@UIInspectable@Foundation@Wind.c)
 *     _lambda_f7708ede42cbb90dfb878b61b26817f2_::_lambda_f7708ede42cbb90dfb878b61b26817f2_ @ 0x180225678 (_lambda_f7708ede42cbb90dfb878b61b26817f2_--_lambda_f7708ede42cbb90dfb878b61b26817f2_.c)
 *     _lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_ @ 0x180225928 (_lambda_00799cc444f9312ab8cc556666836ecb_--__lambda_00799cc444f9312ab8cc556666836ecb_.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_3e6690ebfd5912eedaaffd7303d678cc___ @ 0x18022E7B4 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Foundation--IInspectable_winrt--hs.c)
 *     _lambda_3e6690ebfd5912eedaaffd7303d678cc_::_lambda_3e6690ebfd5912eedaaffd7303d678cc_ @ 0x1802336B8 (_lambda_3e6690ebfd5912eedaaffd7303d678cc_--_lambda_3e6690ebfd5912eedaaffd7303d678cc_.c)
 *     ?RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4StartUpEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x180240D10 (-RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and.c)
 *     ?UpdateWidgetsTelemetryAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x18024653C (-UpdateWidgetsTelemetryAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-.c)
 *     ?VerifyAndActivateAppAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1802471F4 (-VerifyAndActivateAppAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::perform_delayed_initialization(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  char *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 weak; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  _BYTE v8[8]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v9[2]; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v10[24]; // [rsp+38h] [rbp-18h] BYREF
  char v11; // [rsp+78h] [rbp+28h] BYREF
  char v12; // [rsp+80h] [rbp+30h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF

  v2 = (char *)this - 24;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync((char *)this - 24, &v11);
  winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync(v2, &v11);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AugmentedEntryPoint>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_AugmentedEntryPoint>::GetImpl'::`2'::impl,
    1u,
    v3,
    v4);
  if ( !winrt::Windows::Internal::Shell::implementation::DashboardManager::ShouldDeferWidgetsInitialization() )
    winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent(v2, &v11, 1LL);
  weak = winrt::implements<winrt::Windows::Internal::Shell::implementation::DashboardManager,winrt::Windows::Internal::Shell::DashboardManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IEdgeUiTouchInvocation>::get_weak(
           v2,
           &v13);
  lambda_f7708ede42cbb90dfb878b61b26817f2_::_lambda_f7708ede42cbb90dfb878b61b26817f2_(&v12, weak);
  winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(&v13);
  v6 = lambda_3e6690ebfd5912eedaaffd7303d678cc_::_lambda_3e6690ebfd5912eedaaffd7303d678cc_(v8, &v12);
  winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_3e6690ebfd5912eedaaffd7303d678cc___(
    &v11,
    v6);
  v7 = DashboardTaskbarSettings::SubscribeToDaSettingChanged((winrt::Windows::Foundation::IUnknown *)v10);
  v9[0] = (char *)this + 200;
  v9[1] = (char *)this + 192;
  std::tuple<winrt::Windows::Foundation::IInspectable &,winrt::event_token &>::operator=<winrt::Windows::Foundation::IInspectable,winrt::event_token,0>(
    v9,
    v7);
  winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection::~IVirtualDesktopCollection((winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *)v10);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>::~TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>((winrt::Windows::Foundation::IUnknown *)&v11);
  lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_(&v12);
}

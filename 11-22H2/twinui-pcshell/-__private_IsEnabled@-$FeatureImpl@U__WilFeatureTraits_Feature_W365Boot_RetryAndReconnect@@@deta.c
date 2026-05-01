/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@@QEAA_NXZ @ 0x180115CD0
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1800DA6BC (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 *     _lambda_af365597022eb112c50f104cc7bcdff6_::operator()_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs_ @ 0x18027A5F4 (_lambda_af365597022eb112c50f104cc7bcdff6_--operator()_winrt--Windows--Internal--Shell--RemoteSys.c)
 *     _lambda_501a545e3e62ea2d6f88499b5047d98e_::operator() @ 0x18027AE10 (_lambda_501a545e3e62ea2d6f88499b5047d98e_--operator().c)
 *     _lambda_665315f8e7a3be3e9382c02473f3b139_::operator() @ 0x18027B6B8 (_lambda_665315f8e7a3be3e9382c02473f3b139_--operator().c)
 *     ?GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AURemoteSystem@RemoteSystemData@@AEBUWindowId@UI@56@@Z @ 0x180711B68 (-GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@win.c)
 *     ?DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@@Z @ 0x180721258 (-DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::WindowId___lambda_e22f66c9943d4383c52f9a8ad3733f3b___::Invoke @ 0x180721B40 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--UI--WindowId___la.c)
 *     ?OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180722188 (-OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX.c)
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18072CB80 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 *     ?ShowErrorTransitionScreen@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180736440 (-ShowErrorTransitionScreen@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXA.c)
 *     ?ShowTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@MEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBUhstring@6@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@8@@Z @ 0x180736970 (-ShowTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@MEAAXAEBV.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180115D0C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconne.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801B8BAC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::__private_IsEnabled(
        __int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::ReportUsage(a1, v3);
  return v2;
}

/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes@@@details@wil@@QEAA_NXZ @ 0x1802787F0
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1800DA6BC (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 *     ?unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1801AC940 (-unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPE.c)
 *     _lambda_af365597022eb112c50f104cc7bcdff6_::operator()_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs_ @ 0x18027A5F4 (_lambda_af365597022eb112c50f104cc7bcdff6_--operator()_winrt--Windows--Internal--Shell--RemoteSys.c)
 *     ?OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180722188 (-OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180277810 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bug.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802784F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes@@@details@w.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}

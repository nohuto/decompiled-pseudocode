/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@@details@wil@@QEAA_NXZ @ 0x180098904
 * Callers:
 *     ?EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@CAX_N_JAEBVCorrelationVector@@@Z @ 0x180098AF8 (-EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun@MeetAndChatManager@implementation@Shell@.c)
 *     ?subscribe_to_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800E8760 (-subscribe_to_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAU.c)
 *     ?RegisterHotKeys@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18019B0E0 (-RegisterHotKeys@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?perform_delayed_initialization@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x18019DAF0 (-perform_delayed_initialization@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?IsMaCDisabledForDevice@MeetAndChatHelpers@@YA_NXZ @ 0x1806BE8A0 (-IsMaCDisabledForDevice@MeetAndChatHelpers@@YA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180098944 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180098A0C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@@details@wil@@QEA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MainKey_ChatCompliance>::__private_IsEnabled(
        __int64 a1)
{
  __int64 v2; // r8
  char v3; // bl
  __int64 v4; // rdx
  char v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MainKey_ChatCompliance>::GetCachedFeatureEnabledState(a1, &v6);
  LOBYTE(v2) = 3;
  v3 = v6 & 1;
  LOBYTE(v4) = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MainKey_ChatCompliance>::ReportUsage(a1, v4, v2);
  return v3;
}

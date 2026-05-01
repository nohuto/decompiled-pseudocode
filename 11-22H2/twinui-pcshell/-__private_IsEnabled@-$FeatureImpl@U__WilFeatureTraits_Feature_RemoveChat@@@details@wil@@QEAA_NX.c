/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveChat@@@details@wil@@QEAA_NXZ @ 0x180098788
 * Callers:
 *     ?EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@CAX_N_JAEBVCorrelationVector@@@Z @ 0x180098AF8 (-EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun@MeetAndChatManager@implementation@Shell@.c)
 *     ?subscribe_to_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800E8760 (-subscribe_to_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAU.c)
 *     ?RegisterHotKeys@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18019B0E0 (-RegisterHotKeys@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?perform_delayed_initialization@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x18019DAF0 (-perform_delayed_initialization@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?IsMaCDisabledForDevice@MeetAndChatHelpers@@YA_NXZ @ 0x1806BE8A0 (-IsMaCDisabledForDevice@MeetAndChatHelpers@@YA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveChat@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800987C4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveChat@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveChat@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009888C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveChat@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveChat>::__private_IsEnabled(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveChat>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveChat>::ReportUsage(a1, v3);
  return v2;
}

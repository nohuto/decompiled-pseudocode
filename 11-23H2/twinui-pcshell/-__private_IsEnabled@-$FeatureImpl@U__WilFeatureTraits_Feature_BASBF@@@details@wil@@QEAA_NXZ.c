/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BASBF@@@details@wil@@QEAA_NXZ @ 0x1801DBA48
 * Callers:
 *     ?unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1801AC940 (-unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPE.c)
 *     ?IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ @ 0x1801DAD44 (-IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ.c)
 *     ?B2CIsPhysicalDeviceAccessConfigured@@YA_NXZ @ 0x1801F1EB0 (-B2CIsPhysicalDeviceAccessConfigured@@YA_NXZ.c)
 *     _lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1::operator() @ 0x180276D10 (_lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1--operator().c)
 *     ?HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180277CEC (-HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_BASBF@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801DA71C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_BASBF@@@details@wil@@AEA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_BASBF@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801DB208 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_BASBF@@@details@wil@@QEAAX_NW4ReportingKi.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_BASBF>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_BASBF>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_BASBF>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}

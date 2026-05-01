/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID47173054@@@details@wil@@QEAA_NXZ @ 0x1805FB334
 * Callers:
 *     ?IsAppBarView@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@@Z @ 0x1805FA97C (-IsAppBarView@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ID47173054@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805FA7A8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ID47173054@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID47173054@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805FB078 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID47173054@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID47173054>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID47173054>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID47173054>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}

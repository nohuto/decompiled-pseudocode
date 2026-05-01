/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_44667252@@@details@wil@@QEAA_NXZ @ 0x18011400C
 * Callers:
 *     ?SuspendAppInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180051EEC (-SuspendAppInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180112970 (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ?TryInstallDefaultWebSearchProviderWhenSearchHidden@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801EFC6C (-TryInstallDefaultWebSearchProviderWhenSearchHidden@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_44667252@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18011404C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_44667252@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_44667252@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180114114 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_44667252@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_44667252>::__private_IsEnabled(__int64 a1)
{
  __int64 v2; // r8
  char v3; // bl
  __int64 v4; // rdx
  char v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_44667252>::GetCachedFeatureEnabledState(a1, &v6);
  LOBYTE(v2) = 3;
  v3 = v6 & 1;
  LOBYTE(v4) = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_44667252>::ReportUsage(a1, v4, v2);
  return v3;
}

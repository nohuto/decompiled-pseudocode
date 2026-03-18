/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAA_NXZ @ 0x14000803C
 * Callers:
 *     ??1CPortClient@@UEAA@XZ @ 0x1400027F0 (--1CPortClient@@UEAA@XZ.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x140007EBC (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x140007B54 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x140007D00 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_2163525945>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  char v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_2163525945>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_2163525945>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}

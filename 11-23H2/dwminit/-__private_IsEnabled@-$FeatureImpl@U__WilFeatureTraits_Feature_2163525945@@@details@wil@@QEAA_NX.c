/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAA_NXZ @ 0x18000E250
 * Callers:
 *     ??1CApiPortClient@@QEAA@XZ @ 0x18000D3A8 (--1CApiPortClient@@QEAA@XZ.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000D4C4 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x18000DF74 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x18000E4AC (--1CPortClient@@UEAA@XZ.c)
 *     ?ConnectWithName@CPortClient@@QEAAJPEBG@Z @ 0x18000E584 (-ConnectWithName@CPortClient@@QEAAJPEBG@Z.c)
 *     ?Disconnect@CPortClient@@QEAAXXZ @ 0x18000E778 (-Disconnect@CPortClient@@QEAAXXZ.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x18000E958 (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000D6D8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000D918 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_2163525945>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v4; // r8
  __int64 v5; // r9
  signed __int32 v7; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_2163525945>::GetCachedFeatureEnabledState(a1, &v7);
  v2 = v7 & 1;
  LOBYTE(v3) = v7 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_2163525945>::ReportUsage(a1, v3, v4, v5);
  return v2;
}

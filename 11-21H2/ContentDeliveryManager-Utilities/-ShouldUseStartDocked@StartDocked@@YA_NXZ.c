/*
 * XREFs of ?ShouldUseStartDocked@StartDocked@@YA_NXZ @ 0x1800C11D0
 * Callers:
 *     ??0SwapStartTileService@Actions@CreativeFramework@@QEAA@PEB_W0AEBUSwapStartTileProperties@12@@Z @ 0x1800BCFE0 (--0SwapStartTileService@Actions@CreativeFramework@@QEAA@PEB_W0AEBUSwapStartTileProperties@12@@Z.c)
 *     ?ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z @ 0x1800E2404 (-ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_STest03@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005C544 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_STest03@@@details@wil@@A.c)
 */

char __fastcall StartDocked::ShouldUseStartDocked(StartDocked *this)
{
  unsigned int v1; // r8d
  int v3; // [rsp+50h] [rbp+8h] BYREF
  char v4; // [rsp+54h] [rbp+Ch]
  __int64 v5; // [rsp+58h] [rbp+10h]
  signed __int32 v6; // [rsp+60h] [rbp+18h] BYREF

  v1 = `wil::Feature<__WilFeatureTraits_Feature_STest03>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_STest03>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v5 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_STest03>::GetCachedFeatureEnabledState(
                      &`wil::Feature<__WilFeatureTraits_Feature_STest03>::GetImpl'::`2'::impl,
                      &v6);
    v1 = v5;
  }
  v4 = 3;
  v3 = 0;
  wil::details::ReportUsageToService(
    (__int64)&unk_1801AF1B8,
    0x1C563ECu,
    (v1 >> 8) & 1,
    (v1 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v3,
    1,
    0);
  return 1;
}

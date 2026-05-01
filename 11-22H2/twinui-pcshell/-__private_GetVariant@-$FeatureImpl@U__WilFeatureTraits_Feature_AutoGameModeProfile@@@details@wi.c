/*
 * XREFs of ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@@QEAA?AW4Variant_AutoGameModeProfile@@W4VariantReportingKind@3@_N@Z @ 0x1803DCF50
 * Callers:
 *     ?GetGameModeRequest@BroadcastDVRComponent@@AEAAXW4GameModeReason@@PEAUGameConfigInfo@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x1803D82CC (-GetGameModeRequest@BroadcastDVRComponent@@AEAAXW4GameModeReason@@PEAUGameConfigInfo@@PEAU_RM_GA.c)
 * Callees:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803D79B0 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@w.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@@QEAAX_NW4Variant_AutoGameModeProfile@@W4VariantReportingKind@3@_K@Z @ 0x1803DB2A4 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameModeProfile>::__private_GetVariant(
        volatile signed __int64 *a1)
{
  char v2; // bl
  unsigned __int64 v4; // [rsp+20h] [rbp-18h]
  unsigned int v5; // [rsp+58h] [rbp+20h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameModeProfile>::GetCachedVariantState(a1, (__int64)&v5);
  v2 = (v5 >> 12) & 0x3F;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameModeProfile>::ReportVariantUsage(
    (unsigned int *)a1,
    1u,
    v2,
    2,
    v4);
  return v2;
}

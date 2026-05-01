/*
 * XREFs of ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA?AW4Variant_AutoGameMode@@W4VariantReportingKind@3@_N@Z @ 0x1800418B0
 * Callers:
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003FA9C (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 * Callees:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004172C (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEA.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4Variant_AutoGameMode@@W4VariantReportingKind@3@_K@Z @ 0x1800419D8 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::__private_GetVariant(
        volatile signed __int64 *a1)
{
  int v1; // edi
  int v2; // edx
  char v3; // bl
  int v4; // r8d
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  v1 = (int)a1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedVariantState(a1, (__int64)&v6);
  LOBYTE(v2) = 1;
  v3 = (v6 >> 12) & 0x3F;
  LOBYTE(v4) = v3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::ReportVariantUsage(v1, v2, v4, 0);
  return v3;
}

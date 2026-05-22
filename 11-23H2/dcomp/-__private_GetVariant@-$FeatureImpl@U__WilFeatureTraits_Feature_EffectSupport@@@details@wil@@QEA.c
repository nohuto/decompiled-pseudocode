/*
 * XREFs of ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@QEAA?AW4Variant_EffectSupport@@W4VariantReportingKind@3@_N@Z @ 0x180067090
 * Callers:
 *     Windows::UI::Composition::AreEffectsSupportedWorker @ 0x180067050 (Windows--UI--Composition--AreEffectsSupportedWorker.c)
 * Callees:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800670D8 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@AE.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@QEAAX_NW4Variant_EffectSupport@@W4VariantReportingKind@3@_K@Z @ 0x1800671B8 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@QEAAX.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_EffectSupport>::__private_GetVariant(__int64 a1)
{
  int v1; // edi
  int v2; // edx
  char v3; // bl
  int v4; // r8d
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  v1 = a1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_EffectSupport>::GetCachedVariantState(a1, &v6);
  LOBYTE(v2) = 1;
  v3 = (v6 >> 12) & 0x3F;
  LOBYTE(v4) = v3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_EffectSupport>::ReportVariantUsage(v1, v2, v4, 2);
  return v3;
}

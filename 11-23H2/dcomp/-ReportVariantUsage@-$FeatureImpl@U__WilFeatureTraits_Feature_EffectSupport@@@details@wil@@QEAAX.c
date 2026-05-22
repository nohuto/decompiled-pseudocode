/*
 * XREFs of ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@QEAAX_NW4Variant_EffectSupport@@W4VariantReportingKind@3@_K@Z @ 0x1800671B8
 * Callers:
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@QEAA?AW4Variant_EffectSupport@@W4VariantReportingKind@3@_N@Z @ 0x180067090 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@QEA.c)
 * Callees:
 *     ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x180066E1C (-ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATU.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800670D8 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@AE.c)
 */

_UNKNOWN **__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_EffectSupport>::ReportVariantUsage(
        int *a1,
        __int64 a2,
        unsigned __int8 a3,
        int a4,
        unsigned __int64 a5)
{
  unsigned int v6; // ebp
  unsigned int v7; // r8d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  _BYTE v13[16]; // [rsp+50h] [rbp-18h] BYREF
  int v14; // [rsp+70h] [rbp+8h] BYREF
  char v15; // [rsp+74h] [rbp+Ch]

  v6 = (unsigned __int8)a2;
  v7 = *a1;
  HIDWORD(a5) = a1[1];
  LODWORD(a5) = v7;
  if ( (v7 & 4) != 0 )
  {
    v10 = a5;
  }
  else
  {
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_EffectSupport>::GetCachedVariantState(
                       (volatile signed __int64 *)a1,
                       (__int64)v13);
    a5 = v10;
    v7 = v10;
  }
  if ( a3 )
    v11 = HIDWORD(v10);
  else
    LODWORD(v11) = 0;
  v14 = 0;
  v15 = 3;
  return wil::details::ReportVariantUsageToService(
           (struct wil_details_FeatureReportingCache *)(a1 + 2),
           a2,
           (v7 >> 10) & 1,
           (v7 >> 11) & 1,
           (__int64)&v14,
           v6,
           a3,
           v11,
           a4);
}

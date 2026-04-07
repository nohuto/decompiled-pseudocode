/*
 * XREFs of ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@QEAAX_NW4Variant_Wmasfot@@W4VariantReportingKind@3@_K@Z @ 0x180105D50
 * Callers:
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@QEAA?AW4Variant_Wmasfot@@W4VariantReportingKind@3@_N@Z @ 0x18010720C (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@QEAA-AW4V.c)
 * Callees:
 *     ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x180062E30 (-ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATU.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180103864 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@AEAA-ATw.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Wmasfot>::ReportVariantUsage(
        int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4,
        unsigned __int64 a5)
{
  int v6; // ebp
  unsigned int v7; // r8d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // [rsp+50h] [rbp-18h] BYREF
  int v13; // [rsp+70h] [rbp+8h] BYREF
  char v14; // [rsp+74h] [rbp+Ch]

  v6 = a2;
  v7 = *a1;
  HIDWORD(a5) = a1[1];
  LODWORD(a5) = v7;
  if ( (v7 & 2) != 0 )
  {
    v10 = a5;
  }
  else
  {
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Wmasfot>::GetCachedVariantState(
                       (volatile signed __int64 *)a1,
                       (__int64)&v12);
    a5 = v10;
    v7 = v10;
  }
  if ( a3 )
    v11 = HIDWORD(v10);
  else
    LODWORD(v11) = 0;
  v13 = 0;
  v14 = 3;
  wil::details::ReportVariantUsageToService(
    a1 + 2,
    0x1BCA48Du,
    (v7 >> 8) & 1,
    (v7 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v13,
    v6,
    a3,
    v11,
    a4);
}

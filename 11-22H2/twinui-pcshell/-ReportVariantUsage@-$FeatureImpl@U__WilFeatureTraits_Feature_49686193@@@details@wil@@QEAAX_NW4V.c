/*
 * XREFs of ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAAX_NW4Variant_49686193@@W4VariantReportingKind@3@_K@Z @ 0x180242278
 * Callers:
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA?AW4Variant_49686193@@W4VariantReportingKind@3@_N@Z @ 0x180248734 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA-AW4.c)
 * Callees:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18023B26C (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@AEAA-AT.c)
 *     ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x1803DB44C (-ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATU.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::ReportVariantUsage(
        unsigned int *a1,
        unsigned __int8 a2,
        char a3,
        int a4,
        unsigned __int64 a5)
{
  int v6; // ebp
  unsigned int v7; // r8d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v13; // [rsp+50h] [rbp-18h] BYREF
  int v14; // [rsp+70h] [rbp+8h] BYREF
  char v15; // [rsp+74h] [rbp+Ch]

  v6 = a2;
  v7 = *a1;
  HIDWORD(a5) = a1[1];
  LODWORD(a5) = v7;
  if ( (v7 & 4) != 0 )
  {
    v10 = a5;
  }
  else
  {
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::GetCachedVariantState(
                       (volatile signed __int64 *)a1,
                       (__int64)&v13);
    a5 = v10;
    v7 = v10;
  }
  if ( a3 )
    v11 = HIDWORD(v10);
  else
    LODWORD(v11) = 0;
  v14 = 0;
  v15 = 2;
  return wil::details::ReportVariantUsageToService(
           a1 + 2,
           49686193LL,
           (v7 >> 10) & 1,
           (v7 >> 11) & 1,
           &v14,
           v6,
           a3,
           v11,
           a4);
}

/*
 * XREFs of ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_K@Z @ 0x18003ECFC
 * Callers:
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAA?AW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_N@Z @ 0x180043464 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@w.c)
 * Callees:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180033938 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@.c)
 *     ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x18003EDD0 (-ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATU.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::ReportVariantUsage(
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
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedVariantState(
                       (volatile signed __int64 *)a1,
                       (__int64)&v13);
    a5 = v10;
    v7 = v10;
  }
  if ( a3 )
    v11 = HIDWORD(v10);
  else
    LODWORD(v11) = 0;
  v14 = 2;
  v15 = 3;
  return wil::details::ReportVariantUsageToService(a1 + 2, 0LL, (v7 >> 10) & 1, (v7 >> 11) & 1, &v14, v6, a3, v11, a4);
}

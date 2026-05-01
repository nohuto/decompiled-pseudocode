/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ExtendedPlaceholders@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18075AB84
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ExtendedPlaceholders@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18075EDE4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ExtendedPlaceholders@@@details@wi.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800D1C80 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ExtendedPlaceholders@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180754A3C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ExtendedPlaceholders@@@d.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ExtendedPlaceholders>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2)
{
  __int64 v2; // r8
  unsigned int v4; // edi
  int v5; // [rsp+30h] [rbp-38h]
  __int64 v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h] BYREF
  char v8; // [rsp+4Ch] [rbp-1Ch]

  LODWORD(v2) = *a1;
  v4 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v2 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ExtendedPlaceholders>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)&v6);
    v6 = v2;
  }
  v8 = 2;
  v5 = 0;
  v7 = 0;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x2870810u,
    ((unsigned int)v2 >> 10) & 1,
    ((unsigned int)v2 >> 11) & 1,
    (__int64)&v7,
    v4,
    v5);
}

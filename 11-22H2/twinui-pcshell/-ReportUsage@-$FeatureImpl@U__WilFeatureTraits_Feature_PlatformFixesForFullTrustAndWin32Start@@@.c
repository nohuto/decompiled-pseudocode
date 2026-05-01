/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801D52F8
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1801D67F0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start@@@details@wil@@QEAA_NXZ @ 0x1801D6830 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PlatformFixesForFull_ea_1801D6830.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800D1C80 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801D1270 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PlatformFixesForFullTrus.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  int v4; // edi
  volatile unsigned __int32 v6; // r8d
  unsigned int v7; // esi
  int v8; // [rsp+30h] [rbp-28h]
  signed __int32 v9[6]; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF
  char v11; // [rsp+64h] [rbp+Ch]
  __int64 v12; // [rsp+78h] [rbp+20h]

  v12 = a4;
  v4 = a3;
  v6 = *a1;
  v7 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v12 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start>::GetCachedFeatureEnabledState(
                       a1,
                       v9);
    v6 = v12;
  }
  v8 = v4;
  v10 = 0;
  v11 = 2;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x2EFC619u,
    (v6 >> 10) & 1,
    (v6 >> 11) & 1,
    (__int64)&v10,
    v7,
    v8);
}

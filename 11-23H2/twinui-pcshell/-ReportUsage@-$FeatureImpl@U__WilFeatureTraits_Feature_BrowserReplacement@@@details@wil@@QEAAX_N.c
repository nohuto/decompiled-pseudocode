/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18075AA44
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedBrowserReplacement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1807554C0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PackagedBrowserReplacem.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800D1C80 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180754838 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@det.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_BrowserReplacement>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  int v3; // edi
  __int64 v5; // r8
  unsigned int v6; // esi
  int v7; // [rsp+30h] [rbp-38h]
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h] BYREF
  char v10; // [rsp+4Ch] [rbp-1Ch]

  v3 = a3;
  LODWORD(v5) = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v5 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_BrowserReplacement>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)&v8);
    v8 = v5;
  }
  v7 = v3;
  v9 = 0;
  v10 = 3;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x142FEC4u,
    ((unsigned int)v5 >> 10) & 1,
    ((unsigned int)v5 >> 11) & 1,
    (__int64)&v9,
    v6,
    v7);
}

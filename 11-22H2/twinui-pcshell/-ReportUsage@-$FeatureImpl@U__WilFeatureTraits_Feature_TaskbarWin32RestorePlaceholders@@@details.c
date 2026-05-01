/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarWin32RestorePlaceholders@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18075AEA0
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarWin32RestorePlaceholders@@@details@wil@@QEAA_NXZ @ 0x18075EEDC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarWin32RestorePlaceholders@@.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800D1C80 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarWin32RestorePlaceholders@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180754F28 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarWin32RestorePlace.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarWin32RestorePlaceholders>::ReportUsage(
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
    v2 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarWin32RestorePlaceholders>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)&v6);
    v6 = v2;
  }
  v5 = 3;
  v7 = 0;
  v8 = 2;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x2A78137u,
    ((unsigned int)v2 >> 10) & 1,
    ((unsigned int)v2 >> 11) & 1,
    (__int64)&v7,
    v4,
    v5);
}

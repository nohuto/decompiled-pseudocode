/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerLimits@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800107B0
 * Callers:
 *     RmEnableLimits @ 0x180012CD0 (RmEnableLimits.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerLimits@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000DDEC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerLimits@@@.c)
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18001271C (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     ?wil_details_MapReportingKind@@YA?AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z @ 0x18001287C (-wil_details_MapReportingKind@@YA-AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResourceManagerLimits>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        char a3,
        __int64 a4)
{
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // r10d
  __int64 v8; // rdx
  signed __int32 v9[10]; // [rsp+50h] [rbp-28h] BYREF
  int v10; // [rsp+80h] [rbp+8h] BYREF
  char v11; // [rsp+84h] [rbp+Ch]
  int v12; // [rsp+90h] [rbp+18h] BYREF
  __int64 v13; // [rsp+98h] [rbp+20h]

  v13 = a4;
  LOBYTE(v12) = a3;
  v5 = a2;
  if ( (*(_DWORD *)a1 & 2) == 0 )
    v13 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResourceManagerLimits>::GetCachedFeatureEnabledState(
                       a1,
                       v9);
  v11 = 2;
  v10 = 1;
  v12 = 3;
  v6 = wil_details_MapReportingKind(3LL, v5);
  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                       (char *)a1 + 8,
                       v8,
                       (v7 >> 8) & 1,
                       (v7 >> 9) & 1,
                       v6,
                       0) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0x1DD0303u,
        (const struct FEATURE_LOGGED_TRAITS *)&v10,
        0LL,
        v5,
        (const enum wil_ReportingKind *)&v12,
        0LL,
        0,
        1uLL);
  }
}

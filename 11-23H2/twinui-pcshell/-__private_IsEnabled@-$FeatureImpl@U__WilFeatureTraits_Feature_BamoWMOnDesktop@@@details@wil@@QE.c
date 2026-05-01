/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BamoWMOnDesktop@@@details@wil@@QEAA_NXZ @ 0x1800D2C6C
 * Callers:
 *     ?IsBamoEnabled@@YA_NXZ @ 0x1800D2E84 (-IsBamoEnabled@@YA_NXZ.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x1800D1F90 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_BamoWMOnDesktop@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800D2D50 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_BamoWMOnDesktop@@@detail.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     wil_details_MapReportingKind @ 0x1803A51C4 (wil_details_MapReportingKind.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_BamoWMOnDesktop>::__private_IsEnabled(
        __int64 a1)
{
  unsigned __int8 v2; // bl
  unsigned int v3; // eax
  unsigned int v4; // r10d
  __int64 v6; // [rsp+30h] [rbp-38h]
  int v7; // [rsp+30h] [rbp-38h]
  __int64 v8; // [rsp+70h] [rbp+8h] BYREF
  int v9; // [rsp+78h] [rbp+10h] BYREF
  char v10; // [rsp+7Ch] [rbp+14h]
  char v11; // [rsp+80h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_BamoWMOnDesktop>::GetCachedFeatureEnabledState(a1, &v8);
  v2 = v8 & 1;
  if ( (*(_DWORD *)a1 & 4) == 0 )
    v8 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_BamoWMOnDesktop>::GetCachedFeatureEnabledState(
                      a1,
                      &v11);
  v9 = 0;
  v10 = 2;
  LODWORD(v8) = 3;
  v3 = wil_details_MapReportingKind(3LL, v2);
  if ( (unsigned int)wil::details::ReportUsageToServiceDirect(
                       (struct wil_details_FeatureReportingCache *)(a1 + 8),
                       0x21E451Eu,
                       (v4 >> 10) & 1,
                       (v4 >> 11) & 1,
                       v3,
                       0,
                       v6,
                       2u)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    LOBYTE(v7) = 0;
    g_wil_details_pfnFeatureLoggingHook(35538206LL, &v9, 0LL, v2, &v8, 0LL, v7, 1LL);
  }
  return v2;
}

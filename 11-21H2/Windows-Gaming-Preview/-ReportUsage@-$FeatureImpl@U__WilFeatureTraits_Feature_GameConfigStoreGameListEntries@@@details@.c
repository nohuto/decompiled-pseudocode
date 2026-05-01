/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800103A0
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000A7E0 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180010220 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListE.c)
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180012AA8 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        char a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v6; // edi
  signed __int32 v7[10]; // [rsp+50h] [rbp-28h] BYREF
  int v8; // [rsp+80h] [rbp+8h] BYREF
  char v9; // [rsp+84h] [rbp+Ch]
  int v10; // [rsp+90h] [rbp+18h] BYREF
  __int64 v11; // [rsp+98h] [rbp+20h]

  v11 = a4;
  LOBYTE(v10) = a3;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetCachedFeatureEnabledState(
                      a1,
                      v7);
    v11 = v4;
  }
  v9 = 3;
  v8 = 0;
  v10 = 3;
  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                       a1 + 2,
                       11973136LL,
                       ((unsigned int)v4 >> 8) & 1,
                       ((unsigned int)v4 >> 9) & 1,
                       4 * (v6 ^ 1u) + 2,
                       0) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xB6B210u,
        (const struct FEATURE_LOGGED_TRAITS *)&v8,
        0LL,
        v6,
        (const enum wil_ReportingKind *)&v10,
        0LL,
        0,
        1uLL);
  }
}

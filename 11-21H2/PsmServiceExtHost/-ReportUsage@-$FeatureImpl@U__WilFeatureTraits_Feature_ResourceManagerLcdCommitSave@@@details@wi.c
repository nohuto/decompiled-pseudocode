/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003EF70
 * Callers:
 *     ?RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18003EE10 (-RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180050054 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180083FC0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerLcdCommit.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave>::ReportUsage(
        _DWORD *a1,
        __int64 a2,
        char a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v6; // edi
  __int64 v7; // [rsp+50h] [rbp-28h] BYREF
  int v8; // [rsp+80h] [rbp+8h] BYREF
  char v9; // [rsp+84h] [rbp+Ch]
  int v10; // [rsp+90h] [rbp+18h] BYREF
  __int64 v11; // [rsp+98h] [rbp+20h]

  v11 = a4;
  LOBYTE(v10) = a3;
  LODWORD(v4) = *a1;
  v6 = (unsigned __int8)a2;
  if ( (*a1 & 2) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave>::GetCachedFeatureEnabledState(
                      a1,
                      &v7);
    v11 = v4;
  }
  v10 = 3;
  v8 = 1;
  v9 = 1;
  if ( (unsigned int)wil::details::ReportUsageToServiceDirect(
                       a1 + 2,
                       a2,
                       ((unsigned int)v4 >> 8) & 1,
                       ((unsigned int)v4 >> 9) & 1,
                       4 * (v6 ^ 1u) + 2,
                       0) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xFE5BFEu,
        (const struct FEATURE_LOGGED_TRAITS *)&v8,
        0LL,
        v6,
        (const enum wil_ReportingKind *)&v10,
        0LL,
        0,
        1uLL);
  }
}

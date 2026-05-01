/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180012AA8
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800103A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@details@.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4Variant_AutoGameMode@@W4VariantReportingKind@3@_K@Z @ 0x180040C3C (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180040D84 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4Repo.c)
 * Callees:
 *     ?wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z @ 0x18000492C (-wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z.c)
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1800127F4 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        signed __int32 *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6)
{
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v13; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-60h]
  __int64 v15; // [rsp+3Ch] [rbp-5Ch]
  int v16; // [rsp+44h] [rbp-54h]
  __int128 v17; // [rsp+48h] [rbp-50h] BYREF
  __int64 v18; // [rsp+58h] [rbp-40h]

  v10 = wil_details_FeatureReporting_RecordUsageInCache((__int64)&v13, a1, a5, a6);
  v11 = 0;
  v17 = *(_OWORD *)v10;
  v18 = *(_QWORD *)(v10 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(a2, a5, 1LL, a1, &v17);
    if ( a3 )
    {
      v13 = 0LL;
      v15 = 0LL;
      v14 = a5;
      v16 = a4;
      g_wil_details_recordFeatureUsage(a2, a5, 1LL, 0LL, &v13);
    }
  }
  else if ( a3 && a5 != 254 )
  {
    wil_RtlStagingConfig_RecordFeatureUsage(a2, a5, a4);
  }
  LOBYTE(v11) = (_DWORD)v18 == 0;
  return v11;
}

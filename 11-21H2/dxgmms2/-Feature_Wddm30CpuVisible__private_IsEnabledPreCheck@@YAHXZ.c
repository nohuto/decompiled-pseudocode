/*
 * XREFs of ?Feature_Wddm30CpuVisible__private_IsEnabledPreCheck@@YAHXZ @ 0x1C0002A20
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008F230 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C0002B14 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

__int64 Feature_Wddm30CpuVisible__private_IsEnabledPreCheck(void)
{
  __int64 v0; // rax
  int v2; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v3[24]; // [rsp+58h] [rbp-40h] BYREF
  __int128 v4; // [rsp+70h] [rbp-28h] BYREF
  __int64 v5; // [rsp+80h] [rbp-18h]

  v2 = 3;
  v0 = wil_details_FeatureReporting_RecordUsageInCache(v3, &Feature_Wddm30CpuVisible__private_reporting, 2LL);
  v4 = *(_OWORD *)v0;
  v5 = *(_QWORD *)(v0 + 16);
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(31754733LL, 2LL, 1LL, &Feature_Wddm30CpuVisible__private_reporting, &v4);
  if ( !(_DWORD)v5 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0x1E489EDu,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_Wddm30CpuVisible_logged_traits,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v2,
      0LL,
      0,
      1uLL);
  return 1LL;
}

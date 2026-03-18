/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x140361540
 * Callers:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x140649758 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     WbValidateHeapExecuteCallArguments @ 0x1407E3510 (WbValidateHeapExecuteCallArguments.c)
 *     sub_140A0F2FC @ 0x140A0F2FC (sub_140A0F2FC.c)
 *     sub_140A0FC24 @ 0x140A0FC24 (sub_140A0FC24.c)
 *     sub_140A101C8 @ 0x140A101C8 (sub_140A101C8.c)
 *     sub_140A10548 @ 0x140A10548 (sub_140A10548.c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x14036162C (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     RtlNotifyFeatureUsage @ 0x1405E4020 (RtlNotifyFeatureUsage.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        struct wil_details_FeatureReportingCache *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        enum wil_details_ServiceReportingKind a5)
{
  unsigned int v9; // ebx
  unsigned int v11; // [rsp+20h] [rbp-78h]
  unsigned int v12; // [rsp+30h] [rbp-68h] BYREF
  int v13; // [rsp+34h] [rbp-64h]
  struct wil_details_RecordUsageResult v14; // [rsp+38h] [rbp-60h] BYREF
  struct wil_details_RecordUsageResult v15; // [rsp+50h] [rbp-48h] BYREF

  v9 = 0;
  v15 = *wil_details_FeatureReporting_RecordUsageInCache(&v14, a1, a5, a4, v11);
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(a2, (unsigned int)a5, 1LL, a1, &v15);
  if ( a3 && a5 != wil_details_ServiceReportingKind_Store )
  {
    v12 = a2;
    v13 = (unsigned __int16)a5;
    if ( a4 )
      HIWORD(v13) |= 1u;
    RtlNotifyFeatureUsage(&v12);
  }
  LOBYTE(v9) = v15.ignoredUse == 0;
  return v9;
}

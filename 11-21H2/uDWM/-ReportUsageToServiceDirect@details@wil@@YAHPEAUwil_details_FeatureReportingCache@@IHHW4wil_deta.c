/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800627E8
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800626A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x180062E30 (-ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATU.c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180009E80 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18003EF10 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x1800411C0 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_detail.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6)
{
  _DWORD *v10; // rax
  __int64 v11; // xmm0_8
  __int64 v12; // r8
  unsigned int v13; // ebx
  unsigned int v14; // edx
  char v16[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-28h]
  __int64 v18; // [rsp+48h] [rbp-20h] BYREF

  v10 = wil_details_FeatureReporting_RecordUsageInCache((__int64)&v18, a1, a5, a6);
  v11 = *((_QWORD *)v10 + 2);
  *(_OWORD *)v16 = *(_OWORD *)v10;
  v17 = v11;
  wil::details::RecordFeatureUsageCallback(a2, a5, v12, (struct wil_details_FeatureReportingCache *)a1, v16);
  v13 = 0;
  if ( a3 )
  {
    v14 = a5 | 0x80000000;
    if ( !a4 )
      v14 = a5;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a2, v14, 0, 0LL);
  }
  LOBYTE(v13) = (_DWORD)v17 == 0;
  return v13;
}

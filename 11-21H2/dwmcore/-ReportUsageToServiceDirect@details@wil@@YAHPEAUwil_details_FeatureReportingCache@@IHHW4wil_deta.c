/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18010365C
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180103518 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 * Callees:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180028794 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_detail.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18002A138 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1800D2418 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5)
{
  _DWORD *v9; // rax
  __int64 v10; // xmm0_8
  __int64 v11; // r8
  unsigned int v12; // ebx
  unsigned int v13; // edx
  char v15[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h]
  __int64 v17; // [rsp+48h] [rbp-20h] BYREF

  v9 = wil_details_FeatureReporting_RecordUsageInCache((__int64)&v17, a1, a5);
  v10 = *((_QWORD *)v9 + 2);
  *(_OWORD *)v15 = *(_OWORD *)v9;
  v16 = v10;
  wil::details::RecordFeatureUsageCallback(a2, a5, v11, (struct wil_details_FeatureReportingCache *)a1, v15);
  v12 = 0;
  if ( a3 )
  {
    v13 = a5 | 0x80000000;
    if ( !a4 )
      v13 = a5;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a2, v13, 0, 0LL);
  }
  LOBYTE(v12) = (_DWORD)v16 == 0;
  return v12;
}

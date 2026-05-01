/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180050054
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003EF70 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave@@@details@wi.c)
 * Callees:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18003E00C (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_detail.c)
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18003EBDC (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180040584 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6)
{
  _DWORD *v9; // rax
  __int64 v10; // xmm0_8
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  unsigned int v14; // edx
  char v16[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-28h]
  _BYTE v18[32]; // [rsp+48h] [rbp-20h] BYREF

  v9 = wil_details_FeatureReporting_RecordUsageInCache((__int64)v18, a1, a5, a6);
  v10 = *((_QWORD *)v9 + 2);
  *(_OWORD *)v16 = *(_OWORD *)v9;
  v17 = v10;
  wil::details::RecordFeatureUsageCallback(v11, a5, v12, (struct wil_details_FeatureReportingCache *)a1, v16);
  v13 = 0;
  if ( a3 )
  {
    v14 = a5 | 0x80000000;
    if ( !a4 )
      v14 = a5;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0xFE5BFE, v14, 0, 0LL);
  }
  LOBYTE(v13) = (_DWORD)v17 == 0;
  return v13;
}

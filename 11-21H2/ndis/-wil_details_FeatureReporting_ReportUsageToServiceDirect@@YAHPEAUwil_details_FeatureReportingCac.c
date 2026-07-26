/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C0032904
 * Callers:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00328B4 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1C005E268 (-wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCa.c)
 *     ?wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1C005E350 (-wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        struct wil_details_FeatureReportingCache *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        enum wil_details_ServiceReportingKind a5)
{
  unsigned int v5; // edi
  int v10; // ecx
  unsigned int v11; // ecx
  signed __int32 v12; // eax
  int queueBackground; // edx
  int v14; // r8d
  unsigned __int32 exchange; // eax
  unsigned __int32 v16; // ett
  _RTL_FEATURE_USAGE_REPORT FeatureUsageReport; // [rsp+30h] [rbp-40h] BYREF
  struct wil_details_RecordUsageResult v19; // [rsp+38h] [rbp-38h] BYREF
  struct wil_details_RecordUsageResult v20; // [rsp+50h] [rbp-20h] BYREF

  v5 = 0;
  memset(&v19, 0, sizeof(v19));
  if ( a5 == wil_details_ServiceReportingKind_UniqueUsage )
    goto LABEL_27;
  if ( a5 == wil_details_ServiceReportingKind_UniqueOpportunity )
  {
LABEL_26:
    wil_details_FeatureReporting_IncrementOpportunityInCache(a1, a5, a3, &v19);
    goto LABEL_28;
  }
  if ( a5 <= wil_details_ServiceReportingKind_UniqueOpportunity )
    goto LABEL_19;
  if ( a5 <= wil_details_ServiceReportingKind_DeviceOpportunity )
  {
LABEL_8:
    v10 = 0;
    switch ( a5 )
    {
      case wil_details_ServiceReportingKind_DeviceUsage:
        v10 = 2;
        break;
      case wil_details_ServiceReportingKind_DeviceOpportunity:
        v10 = 8;
        break;
      case wil_details_ServiceReportingKind_PotentialDeviceUsage:
        v10 = 4;
        break;
      case wil_details_ServiceReportingKind_PotentialDeviceOpportunity:
        v10 = 16;
        break;
    }
    v11 = v10 | 1;
    _m_prefetchw(a1);
    v12 = _InterlockedOr((volatile signed __int32 *)a1, v11);
    queueBackground = v19.queueBackground;
    if ( (v12 & 1) == 0 )
      queueBackground = 1;
    v19.queueBackground = queueBackground;
    v19.ignoredUse = (v12 & v11 & 0xFFFFFFFE) == (v11 & 0xFFFFFFFE);
    goto LABEL_28;
  }
  if ( a5 == wil_details_ServiceReportingKind_PotentialUniqueUsage )
  {
LABEL_27:
    wil_details_FeatureReporting_IncrementUsageInCache(a1, a5, a3, &v19);
    goto LABEL_28;
  }
  if ( a5 == wil_details_ServiceReportingKind_PotentialUniqueOpportunity )
    goto LABEL_26;
  if ( (unsigned int)(a5 - 6) <= 1 )
    goto LABEL_8;
LABEL_19:
  v14 = a5 - 320;
  if ( (unsigned int)(a5 - 320) < 0x40 )
  {
    exchange = a1->recorded.exchange;
    do
    {
      if ( (exchange & 0x10) == 0 || (v19.ignoredUse = 1, ((exchange >> 5) & 0x3F) != v14) )
        v19.ignoredUse = 0;
      v16 = exchange;
      exchange = _InterlockedCompareExchange(
                   (volatile signed __int32 *)&a1->recorded,
                   (32 * (v14 & 0x3F)) | exchange & 0xFFFFF81F | 0x10,
                   exchange);
    }
    while ( v16 != exchange );
  }
  v19.kindImmediate = a5;
  v19.countImmediate = 1;
  v19.payloadId = 0;
LABEL_28:
  v20 = v19;
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(a2, (unsigned int)a5, 1LL, a1, &v20);
  if ( a3 && a5 != wil_details_ServiceReportingKind_Store )
  {
    FeatureUsageReport.ReportingOptions = 0;
    FeatureUsageReport.FeatureId = a2;
    FeatureUsageReport.ReportingKind = a5;
    if ( a4 )
      FeatureUsageReport.ReportingOptions |= 1u;
    RtlNotifyFeatureUsage(&FeatureUsageReport);
  }
  LOBYTE(v5) = v20.ignoredUse == 0;
  return v5;
}

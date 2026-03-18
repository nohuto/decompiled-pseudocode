/*
 * XREFs of ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x14036162C
 * Callers:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x140361540 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 * Callees:
 *     ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x140649584 (-wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCa.c)
 *     ?wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x14064966C (-wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W.c)
 */

struct wil_details_RecordUsageResult *__fastcall wil_details_FeatureReporting_RecordUsageInCache(
        struct wil_details_RecordUsageResult *__return_ptr retstr,
        struct wil_details_FeatureReportingCache *a2,
        int a3)
{
  int v3; // r11d
  struct wil_details_RecordUsageResult *v5; // r9
  int v6; // ecx
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // ecx
  signed __int32 exchange; // eax
  signed __int32 v12; // ett
  int v14; // ebx
  unsigned __int32 v15; // eax
  int v16; // edx
  unsigned __int32 v17; // ett

  v3 = 0;
  v5 = retstr;
  *(_OWORD *)&retstr->queueBackground = 0LL;
  *(_QWORD *)&retstr->ignoredUse = 0LL;
  if ( !a3 )
    goto LABEL_28;
  if ( a3 == 1 )
  {
LABEL_27:
    wil_details_FeatureReporting_IncrementOpportunityInCache(a2, (enum wil_details_ServiceReportingKind)a3, a3, retstr);
    return v5;
  }
  if ( a3 <= 1 )
    goto LABEL_20;
  if ( a3 <= 3 )
  {
LABEL_8:
    v6 = 0;
    v7 = a3 - 2;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 3;
        if ( v9 )
        {
          if ( v9 == 1 )
            v6 = 16;
        }
        else
        {
          v6 = 4;
        }
      }
      else
      {
        v6 = 8;
      }
    }
    else
    {
      v6 = 2;
    }
    v10 = v6 | 1;
    _m_prefetchw(a2);
    exchange = a2->reported.exchange;
    do
    {
      v12 = exchange;
      exchange = _InterlockedCompareExchange((volatile signed __int32 *)a2, v10 | exchange, exchange);
    }
    while ( v12 != exchange );
    v5->queueBackground = (exchange & 1) == 0;
    LOBYTE(v3) = (exchange & v10 & 0xFFFFFFFE) == (v10 & 0xFFFFFFFE);
    v5->ignoredUse = v3;
    return v5;
  }
  if ( a3 == 4 )
  {
LABEL_28:
    wil_details_FeatureReporting_IncrementUsageInCache(a2, (enum wil_details_ServiceReportingKind)a3, a3, retstr);
    return v5;
  }
  if ( a3 == 5 )
    goto LABEL_27;
  if ( (unsigned int)(a3 - 6) <= 1 )
    goto LABEL_8;
LABEL_20:
  v14 = a3 - 320;
  if ( (unsigned int)(a3 - 320) < 0x40 )
  {
    v15 = a2->recorded.exchange;
    do
    {
      if ( (v15 & 0x10) == 0 || (v16 = 1, ((v15 >> 5) & 0x3F) != v14) )
        v16 = 0;
      retstr->ignoredUse = v16;
      v17 = v15;
      v15 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&a2->recorded,
              (32 * (v14 & 0x3F)) | v15 & 0xFFFFF81F | 0x10,
              v15);
    }
    while ( v17 != v15 );
  }
  retstr->kindImmediate = a3;
  retstr->countImmediate = 1;
  retstr->payloadId = 0;
  return v5;
}

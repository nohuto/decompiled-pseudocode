/*
 * XREFs of ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1C005E268
 * Callers:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C0032904 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureReporting_IncrementOpportunityInCache(
        struct wil_details_FeatureReportingCache *a1,
        enum wil_details_ServiceReportingKind a2,
        __int64 a3,
        struct wil_details_RecordUsageResult *a4)
{
  signed __int32 exchange; // r8d
  BOOL v7; // ebx
  unsigned int v8; // eax
  wil_details_ServiceReportingKind v9; // ecx
  int v10; // edx
  unsigned int v11; // r10d
  unsigned __int64 v12; // rdx
  signed __int32 v13; // eax

  exchange = a1->reported.exchange;
  v7 = a2 == wil_details_ServiceReportingKind_PotentialUniqueOpportunity;
  while ( 1 )
  {
    a4->countImmediate = 0;
    v8 = exchange | 1;
    if ( (((exchange | 1u) >> 22) & 1) != v7 )
    {
      if ( ((v8 >> 15) & 0x7F) != 0 )
      {
        a4->countImmediate = (v8 >> 15) & 0x7F;
        v9 = wil_details_ServiceReportingKind_PotentialUniqueOpportunity;
        if ( a2 != wil_details_ServiceReportingKind_UniqueOpportunity )
          v9 = wil_details_ServiceReportingKind_UniqueOpportunity;
        v8 = exchange & 0xFFC07FFE | 1;
        a4->kindImmediate = v9;
      }
      v10 = 0;
      if ( a2 == wil_details_ServiceReportingKind_PotentialUniqueOpportunity )
        v10 = 0x400000;
      v8 = v8 & 0xFFBFFFFF | v10;
    }
    v11 = (v8 >> 15) & 0x7F;
    v12 = v11 + 1;
    if ( v12 > 0x7F || v12 < ((v8 >> 15) & 0x7F) )
    {
      LODWORD(v12) = 1;
      a4->kindImmediate = a2;
      a4->countImmediate = v11;
    }
    v13 = _InterlockedCompareExchange(
            (volatile signed __int32 *)a1,
            v8 ^ (v8 ^ ((_DWORD)v12 << 15)) & 0x3F8000,
            exchange);
    if ( exchange == v13 )
      break;
    exchange = v13;
  }
  a4->ignoredUse = 0;
  a4->queueBackground = (exchange & 1) == 0;
}

/*
 * XREFs of ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18000CD4C
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180062840 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x18000CE50 (-wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCa.c)
 *     ?wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1800C6010 (-wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W.c)
 */

_DWORD *__fastcall wil_details_FeatureReporting_RecordUsageInCache(
        __int64 a1,
        volatile signed __int32 *a2,
        int a3,
        int a4)
{
  int v4; // r11d
  _DWORD *v7; // r9
  int v8; // edx
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  unsigned int v12; // edx
  signed __int32 v13; // eax
  int v15; // ebx
  unsigned __int32 v16; // eax
  int v17; // ecx
  unsigned __int32 v18; // ett

  v4 = 0;
  v7 = (_DWORD *)a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( !a3 )
    goto LABEL_26;
  if ( a3 == 1 )
  {
LABEL_14:
    wil_details_FeatureReporting_IncrementOpportunityInCache(a2, (unsigned int)a3);
    return v7;
  }
  if ( a3 <= 1 )
    goto LABEL_16;
  if ( a3 <= 3 )
  {
LABEL_8:
    v8 = 0;
    v9 = a3 - 2;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 3;
        if ( v11 )
        {
          if ( v11 == 1 )
            v8 = 16;
        }
        else
        {
          v8 = 4;
        }
      }
      else
      {
        v8 = 8;
      }
    }
    else
    {
      v8 = 2;
    }
    v12 = v8 | 1;
    _m_prefetchw((const void *)a2);
    v13 = _InterlockedOr(a2, v12);
    *v7 = (v13 & 1) == 0;
    LOBYTE(v4) = (v12 & 0xFFFFFFFE & v13) == (v12 & 0xFFFFFFFE);
    v7[4] = v4;
    return v7;
  }
  if ( a3 == 4 )
  {
LABEL_26:
    wil_details_FeatureReporting_IncrementUsageInCache(a2, (unsigned int)a3);
    return v7;
  }
  if ( a3 == 5 )
    goto LABEL_14;
  if ( (unsigned int)(a3 - 6) <= 1 )
    goto LABEL_8;
LABEL_16:
  v15 = a3 - 320;
  if ( (unsigned int)(a3 - 320) < 0x40 )
  {
    v16 = *((_DWORD *)a2 + 1);
    do
    {
      if ( (v16 & 0x10) == 0 || (v17 = 1, ((v16 >> 5) & 0x3F) != v15) )
        v17 = 0;
      v7[4] = v17;
      v18 = v16;
      v16 = _InterlockedCompareExchange(a2 + 1, (32 * (v15 & 0x3F)) | v16 & 0xFFFFF81F | 0x10, v16);
    }
    while ( v18 != v16 );
  }
  v7[2] = a3;
  v7[1] = 1;
  v7[3] = a4;
  return v7;
}

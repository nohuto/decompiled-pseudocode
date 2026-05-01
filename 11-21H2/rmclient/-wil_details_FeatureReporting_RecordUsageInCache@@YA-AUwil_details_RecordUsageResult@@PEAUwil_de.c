/*
 * XREFs of ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1800125C4
 * Callers:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18001271C (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 * Callees:
 *     ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1800123F0 (-wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCa.c)
 *     ?wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1800124D8 (-wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W.c)
 */

_DWORD *__fastcall wil_details_FeatureReporting_RecordUsageInCache(
        __int64 a1,
        volatile signed __int32 *a2,
        __int64 a3,
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
  int v14; // ebx
  unsigned __int32 v15; // eax
  int v16; // ecx
  unsigned __int32 v17; // ett

  v4 = 0;
  v7 = (_DWORD *)a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( !(_DWORD)a3 )
    goto LABEL_25;
  if ( (_DWORD)a3 == 1 )
  {
LABEL_24:
    wil_details_FeatureReporting_IncrementOpportunityInCache(a2, a3, a3, (_DWORD *)a1);
    return v7;
  }
  if ( (int)a3 <= 1 )
    goto LABEL_17;
  if ( (int)a3 <= 3 )
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
  if ( (_DWORD)a3 == 4 )
  {
LABEL_25:
    wil_details_FeatureReporting_IncrementUsageInCache(a2, a3, a3, (_DWORD *)a1);
    return v7;
  }
  if ( (_DWORD)a3 == 5 )
    goto LABEL_24;
  if ( (unsigned int)(a3 - 6) <= 1 )
    goto LABEL_8;
LABEL_17:
  v14 = a3 - 320;
  if ( (unsigned int)(a3 - 320) < 0x40 )
  {
    v15 = *((_DWORD *)a2 + 1);
    do
    {
      if ( (v15 & 0x10) == 0 || (v16 = 1, ((v15 >> 5) & 0x3F) != v14) )
        v16 = 0;
      v7[4] = v16;
      v17 = v15;
      v15 = _InterlockedCompareExchange(a2 + 1, (32 * (v14 & 0x3F)) | v15 & 0xFFFFF81F | 0x10, v15);
    }
    while ( v17 != v15 );
  }
  v7[2] = a3;
  v7[1] = 1;
  v7[3] = a4;
  return v7;
}

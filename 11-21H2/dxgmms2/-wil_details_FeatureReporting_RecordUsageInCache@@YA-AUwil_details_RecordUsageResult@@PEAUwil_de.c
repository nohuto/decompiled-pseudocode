/*
 * XREFs of ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C0002B14
 * Callers:
 *     ?Feature_GuestAllocMapping__private_IsEnabledPreCheck@@YAHXZ @ 0x1C00027F0 (-Feature_GuestAllocMapping__private_IsEnabledPreCheck@@YAHXZ.c)
 *     ?Feature_Wddm30CpuVisible__private_IsEnabledPreCheck@@YAHXZ @ 0x1C0002A20 (-Feature_Wddm30CpuVisible__private_IsEnabledPreCheck@@YAHXZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C001BAC0 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 * Callees:
 *     ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1C002E158 (-wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCa.c)
 *     ?wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1C002E240 (-wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W.c)
 */

_DWORD *__fastcall wil_details_FeatureReporting_RecordUsageInCache(__int64 a1, signed __int32 *a2, int a3)
{
  int v3; // r11d
  _DWORD *v5; // r9
  int v6; // ecx
  int v7; // r8d
  int v8; // ecx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  int v12; // r8d
  int v13; // r8d
  int v14; // ebx
  unsigned __int32 v15; // eax
  int v16; // edx
  unsigned __int32 v17; // ett

  v3 = 0;
  v5 = (_DWORD *)a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( !a3 )
    goto LABEL_29;
  if ( a3 == 1 )
  {
LABEL_28:
    wil_details_FeatureReporting_IncrementOpportunityInCache(a2, (unsigned int)a3);
    return v5;
  }
  if ( a3 <= 1 )
    goto LABEL_21;
  if ( a3 <= 3 )
  {
LABEL_5:
    v6 = 0;
    v7 = a3 - 2;
    if ( v7 )
    {
      v12 = v7 - 1;
      if ( v12 )
      {
        v13 = v12 - 3;
        if ( v13 )
        {
          if ( v13 == 1 )
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
    v8 = v6 | 1;
    _m_prefetchw(a2);
    v9 = *a2;
    do
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange(a2, v8 | v9, v9);
    }
    while ( v10 != v9 );
    *v5 = (v9 & 1) == 0;
    LOBYTE(v3) = (v9 & v8 & 0xFFFFFFFE) == (v8 & 0xFFFFFFFE);
    v5[4] = v3;
    return v5;
  }
  if ( a3 == 4 )
  {
LABEL_29:
    wil_details_FeatureReporting_IncrementUsageInCache(a2, (unsigned int)a3);
    return v5;
  }
  if ( a3 == 5 )
    goto LABEL_28;
  if ( (unsigned int)(a3 - 6) <= 1 )
    goto LABEL_5;
LABEL_21:
  v14 = a3 - 320;
  if ( (unsigned int)(a3 - 320) < 0x40 )
  {
    v15 = a2[1];
    do
    {
      if ( (v15 & 0x10) == 0 || (v16 = 1, ((v15 >> 5) & 0x3F) != v14) )
        v16 = 0;
      *(_DWORD *)(a1 + 16) = v16;
      v17 = v15;
      v15 = _InterlockedCompareExchange(a2 + 1, (32 * (v14 & 0x3F)) | v15 & 0xFFFFF81F | 0x10, v15);
    }
    while ( v17 != v15 );
  }
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 4) = 1;
  *(_DWORD *)(a1 + 12) = 0;
  return v5;
}

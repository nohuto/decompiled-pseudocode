/*
 * XREFs of ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18003B938
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x180037500 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x18003B748 (-wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCa.c)
 *     ?wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x18003B83C (-wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W.c)
 */

__int64 __fastcall wil_details_FeatureReporting_RecordUsageInCache(__int64 a1, volatile signed __int32 *a2, __int64 a3)
{
  int v3; // r11d
  int v6; // r9d
  unsigned __int32 v7; // eax
  int v8; // ecx
  unsigned __int32 v9; // ett
  int v10; // edx
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  unsigned int v14; // edx
  signed __int32 v15; // eax

  v3 = 0;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  switch ( (_DWORD)a3 )
  {
    case 0:
      goto LABEL_25;
    case 1:
LABEL_24:
      wil_details_FeatureReporting_IncrementOpportunityInCache(a2, a3, a3, (_DWORD *)a1);
      return a1;
    case 2:
    case 3:
      goto LABEL_15;
    case 4:
LABEL_25:
      wil_details_FeatureReporting_IncrementUsageInCache(a2, a3, a3, (_DWORD *)a1);
      return a1;
    case 5:
      goto LABEL_24;
  }
  if ( (unsigned int)(a3 - 6) >= 2 )
  {
    v6 = a3 - 320;
    if ( (unsigned int)(a3 - 320) < 0x40 )
    {
      v7 = *((_DWORD *)a2 + 1);
      do
      {
        if ( (v7 & 0x10) == 0 || (v8 = 1, ((v7 >> 5) & 0x3F) != v6) )
          v8 = 0;
        *(_DWORD *)(a1 + 16) = v8;
        v9 = v7;
        v7 = _InterlockedCompareExchange(a2 + 1, (32 * (v6 & 0x3F)) | v7 & 0xFFFFF81F | 0x10, v7);
      }
      while ( v9 != v7 );
    }
    *(_DWORD *)(a1 + 8) = a3;
    *(_DWORD *)(a1 + 4) = 1;
    *(_DWORD *)(a1 + 12) = 0;
    return a1;
  }
LABEL_15:
  v10 = 0;
  v11 = a3 - 2;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 3;
      if ( v13 )
      {
        if ( v13 == 1 )
          v10 = 16;
      }
      else
      {
        v10 = 4;
      }
    }
    else
    {
      v10 = 8;
    }
  }
  else
  {
    v10 = 2;
  }
  v14 = v10 | 1;
  _m_prefetchw((const void *)a2);
  v15 = _InterlockedOr(a2, v14);
  *(_DWORD *)a1 = (v15 & 1) == 0;
  LOBYTE(v3) = (v14 & 0xFFFFFFFE & v15) == (v14 & 0xFFFFFFFE);
  *(_DWORD *)(a1 + 16) = v3;
  return a1;
}

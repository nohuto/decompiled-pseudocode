/*
 * XREFs of ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180126920
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18018FF78 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1802EBF9C (-wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCa.c)
 *     ?wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1802EC084 (-wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W.c)
 */

_DWORD *__fastcall wil_details_FeatureReporting_RecordUsageInCache(
        __int64 a1,
        volatile signed __int32 *a2,
        unsigned int a3,
        int a4)
{
  _DWORD *v6; // r9
  int v7; // r11d
  int v8; // ecx
  unsigned int v9; // ecx
  signed __int32 v10; // eax
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // edx
  unsigned __int32 v15; // eax
  int v16; // ecx
  unsigned __int32 v17; // ett

  v6 = (_DWORD *)a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a3 == 2 )
  {
LABEL_2:
    v7 = 0;
    v8 = 0;
    if ( a3 == 2 )
    {
      v8 = 2;
    }
    else
    {
      v12 = a3 - 3;
      if ( v12 )
      {
        v13 = v12 - 3;
        if ( v13 )
        {
          if ( v13 == 1 )
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
    v9 = v8 | 1;
    _m_prefetchw((const void *)a2);
    v10 = _InterlockedOr(a2, v9);
    *v6 = (v10 & 1) == 0;
    LOBYTE(v7) = (v9 & 0xFFFFFFFE & v10) == (v9 & 0xFFFFFFFE);
    v6[4] = v7;
  }
  else
  {
    switch ( a3 )
    {
      case 0u:
      case 4u:
        wil_details_FeatureReporting_IncrementUsageInCache(a2, a3);
        break;
      case 1u:
      case 5u:
        wil_details_FeatureReporting_IncrementOpportunityInCache(a2, a3);
        break;
      case 3u:
      case 6u:
      case 7u:
        goto LABEL_2;
      default:
        v14 = a3 - 320;
        if ( a3 - 320 < 0x40 )
        {
          v15 = *((_DWORD *)a2 + 1);
          do
          {
            if ( (v15 & 0x10) == 0 || (v16 = 1, ((v15 >> 5) & 0x3F) != v14) )
              v16 = 0;
            v6[4] = v16;
            v17 = v15;
            v15 = _InterlockedCompareExchange(a2 + 1, (32 * (v14 & 0x3F)) | v15 & 0xFFFFF81F | 0x10, v15);
          }
          while ( v17 != v15 );
        }
        v6[2] = a3;
        v6[1] = 1;
        v6[3] = a4;
        break;
    }
  }
  return v6;
}

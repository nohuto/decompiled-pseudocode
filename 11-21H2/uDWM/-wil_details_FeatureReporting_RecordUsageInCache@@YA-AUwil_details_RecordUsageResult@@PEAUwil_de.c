/*
 * XREFs of ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180009E80
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800627E8 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x180098E28 (-wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCa.c)
 *     ?wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x180098F10 (-wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W.c)
 */

_DWORD *__fastcall wil_details_FeatureReporting_RecordUsageInCache(
        __int64 a1,
        volatile signed __int32 *a2,
        __int64 a3,
        int a4)
{
  int v4; // r11d
  _DWORD *v7; // r9
  int v8; // r8d
  int v9; // ecx
  unsigned int v10; // ecx
  signed __int32 v11; // eax
  int v13; // r11d
  int v14; // r11d
  int v15; // edx
  unsigned __int32 v16; // eax
  BOOL v17; // ecx
  unsigned __int32 v18; // ett

  v4 = a3;
  v7 = (_DWORD *)a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_DWORD)a3 == 2 )
  {
LABEL_2:
    v8 = 0;
    v9 = 0;
    if ( v4 == 2 )
    {
      v9 = 2;
    }
    else
    {
      v13 = v4 - 3;
      if ( v13 )
      {
        v14 = v13 - 3;
        if ( v14 )
        {
          if ( v14 == 1 )
            v9 = 16;
        }
        else
        {
          v9 = 4;
        }
      }
      else
      {
        v9 = 8;
      }
    }
    v10 = v9 | 1;
    _m_prefetchw((const void *)a2);
    v11 = _InterlockedOr(a2, v10);
    *v7 = (v11 & 1) == 0;
    LOBYTE(v8) = (v10 & 0xFFFFFFFE & v11) == (v10 & 0xFFFFFFFE);
    v7[4] = v8;
  }
  else
  {
    switch ( (int)a3 )
    {
      case 0:
      case 4:
        wil_details_FeatureReporting_IncrementUsageInCache(a2, (unsigned int)a3, a3, a1);
        break;
      case 1:
      case 5:
        wil_details_FeatureReporting_IncrementOpportunityInCache(a2, (unsigned int)a3, a3, a1);
        break;
      case 3:
      case 6:
      case 7:
        goto LABEL_2;
      default:
        v15 = a3 - 320;
        if ( (unsigned int)(a3 - 320) < 0x40 )
        {
          v16 = *((_DWORD *)a2 + 1);
          do
          {
            v17 = (v16 & 0x10) != 0 && ((v16 >> 5) & 0x3F) == v15;
            v7[4] = v17;
            v18 = v16;
            v16 = _InterlockedCompareExchange(a2 + 1, (32 * (v15 & 0x3F)) | v16 & 0xFFFFF81F | 0x10, v16);
          }
          while ( v18 != v16 );
        }
        v7[2] = a3;
        v7[1] = 1;
        v7[3] = a4;
        break;
    }
  }
  return v7;
}

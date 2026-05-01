/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x18002A720
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x18002A680 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x18007935C (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     wil_atomic_uint32_compare_exchange_relaxed @ 0x18006D580 (wil_atomic_uint32_compare_exchange_relaxed.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x18006D59C (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x18006D690 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 */

__int64 __fastcall wil_details_FeatureReporting_RecordUsageInCache(__int64 a1, _DWORD *a2, __int64 a3, int a4)
{
  int v4; // r10d
  _DWORD *v6; // r11
  int v8; // r9d
  unsigned int v9; // ecx
  __int64 v10; // r8
  char v11; // r8
  __int64 result; // rax
  int v13; // r9d
  int v14; // edi
  unsigned int v15; // r8d
  _DWORD *v16; // rcx
  int v17; // r11d
  int v18; // eax
  unsigned int i; // [rsp+40h] [rbp+18h] BYREF

  v4 = a3;
  v6 = a2;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  switch ( (int)a3 )
  {
    case 0:
    case 4:
      wil_details_FeatureReporting_IncrementUsageInCache(a2, (unsigned int)a3, a3, a1);
      result = a1;
      break;
    case 1:
    case 5:
      wil_details_FeatureReporting_IncrementOpportunityInCache(a2, (unsigned int)a3, a3, a1);
      result = a1;
      break;
    case 2:
    case 3:
    case 6:
    case 7:
      v8 = 0;
      switch ( (_DWORD)a3 )
      {
        case 2:
          v8 = 2;
          break;
        case 3:
          v8 = 8;
          break;
        case 6:
          v8 = 4;
          break;
        case 7:
          v8 = 16;
          break;
      }
      v9 = *a2;
      for ( i = *a2; ; v9 = i )
      {
        v10 = v9 | v8 | 1;
        *(_DWORD *)(a1 + 16) = (v9 | v8) == v9;
        if ( (v9 | v8) == v9 )
          v10 = v9 | v8;
        if ( (unsigned int)wil_atomic_uint32_compare_exchange_relaxed(v6, &i, v10) )
          break;
      }
      if ( (v11 & 1) == 0 || (i & 1) != 0 )
      {
        result = a1;
        *(_DWORD *)a1 = 0;
      }
      else
      {
        result = a1;
        *(_DWORD *)a1 = 1;
      }
      break;
    default:
      v13 = 1;
      v14 = a3 - 320;
      if ( (unsigned int)(a3 - 320) >= 0x40 )
        goto LABEL_30;
      v15 = a2[1];
      v16 = a2 + 1;
      i = v15;
      v17 = 32 * (v14 & 0x3F);
      while ( 1 )
      {
        v18 = (v15 & 0x10) != 0 && ((v15 >> 5) & 0x3F) == v14 ? v13 : 0;
        *(_DWORD *)(a1 + 16) = v18;
        if ( (unsigned int)wil_atomic_uint32_compare_exchange_relaxed(v16, &i, v17 | v15 & 0xFFFFF81F | 0x10) )
          break;
        v15 = i;
      }
      if ( !*(_DWORD *)(a1 + 16) )
      {
LABEL_30:
        *(_DWORD *)(a1 + 8) = v4;
        *(_DWORD *)(a1 + 4) = v13;
        *(_DWORD *)(a1 + 12) = a4;
      }
      result = a1;
      break;
  }
  return result;
}

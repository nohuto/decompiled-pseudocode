/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x1800D73A8
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1800D75FC (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     wil_atomic_uint32_compare_exchange_relaxed @ 0x1800D719C (wil_atomic_uint32_compare_exchange_relaxed.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x1800D71B8 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x1800D72AC (wil_details_FeatureReporting_IncrementUsageInCache.c)
 */

__int64 __fastcall wil_details_FeatureReporting_RecordUsageInCache(
        __int64 a1,
        volatile signed __int32 *a2,
        __int64 a3,
        int a4)
{
  int v5; // r11d
  int v8; // esi
  int v9; // r10d
  volatile signed __int32 *v10; // rcx
  volatile unsigned __int32 v11; // r8d
  int v12; // r9d
  int v13; // eax
  int v14; // r9d
  volatile signed __int32 v15; // ecx
  int v16; // r10d
  signed __int32 v17; // r8d
  unsigned __int8 v18; // r8
  volatile signed __int32 i; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  switch ( (_DWORD)a3 )
  {
    case 0:
      goto LABEL_36;
    case 1:
LABEL_35:
      wil_details_FeatureReporting_IncrementOpportunityInCache(a2, a3, a3, (_DWORD *)a1);
      return a1;
    case 2:
    case 3:
      goto LABEL_18;
    case 4:
LABEL_36:
      wil_details_FeatureReporting_IncrementUsageInCache(a2, a3, a3, (_DWORD *)a1);
      return a1;
    case 5:
      goto LABEL_35;
  }
  if ( (unsigned int)(a3 - 6) >= 2 )
  {
    v8 = a3 - 320;
    v9 = 1;
    if ( (unsigned int)(a3 - 320) >= 0x40 )
      goto LABEL_17;
    v10 = a2 + 1;
    v11 = *((_DWORD *)a2 + 1);
    v12 = 16;
    for ( i = v11; ; v11 = i )
    {
      v13 = ((unsigned __int8)v11 & (unsigned __int8)v12) != 0 && ((v11 >> 5) & 0x3F) == v8 ? v9 : 0;
      *(_DWORD *)(a1 + 16) = v13;
      if ( (unsigned int)wil_atomic_uint32_compare_exchange_relaxed(
                           v10,
                           (signed __int32 *)&i,
                           v12 | (32 * (v8 & 0x3F)) | v11 & 0xFFFFF81F) )
        break;
    }
    if ( !*(_DWORD *)(a1 + 16) )
    {
LABEL_17:
      *(_DWORD *)(a1 + 8) = v5;
      *(_DWORD *)(a1 + 4) = v9;
      *(_DWORD *)(a1 + 12) = a4;
    }
    return a1;
  }
LABEL_18:
  v14 = 0;
  switch ( (_DWORD)a3 )
  {
    case 2:
      v14 = 2;
      break;
    case 3:
      v14 = 8;
      break;
    case 6:
      v14 = 4;
      break;
    case 7:
      v14 = 16;
      break;
  }
  v15 = *a2;
  v16 = 1;
  for ( i = *a2; ; v15 = i )
  {
    v17 = v16 | v15 | v14;
    *(_DWORD *)(a1 + 16) = (v15 | v14) == v15;
    if ( (v15 | v14) == v15 )
      v17 = v15 | v14;
    if ( (unsigned int)wil_atomic_uint32_compare_exchange_relaxed(a2, (signed __int32 *)&i, v17) )
      break;
  }
  if ( (v18 & (unsigned __int8)v16) == 0 || ((unsigned __int8)v16 & (unsigned __int8)i) != 0 )
    v16 = 0;
  *(_DWORD *)a1 = v16;
  return a1;
}

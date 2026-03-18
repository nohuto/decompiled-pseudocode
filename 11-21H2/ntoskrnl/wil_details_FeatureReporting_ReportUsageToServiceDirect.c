/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1402ACAD0
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x140502A6C (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x140502B60 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x14053FE50 (CmFcManagerNotifyFeatureUsage.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6,
        unsigned int a7)
{
  unsigned int v7; // r14d
  volatile signed __int32 *v11; // rbx
  int v12; // ecx
  unsigned int v13; // ecx
  signed __int32 v14; // eax
  int v15; // edx
  unsigned int v16; // esi
  unsigned int v17; // edx
  unsigned __int32 v18; // eax
  unsigned __int32 v19; // ett
  unsigned int v21; // [rsp+30h] [rbp-50h] BYREF
  int v22; // [rsp+34h] [rbp-4Ch]
  __int128 v23; // [rsp+38h] [rbp-48h] BYREF
  __int64 v24; // [rsp+48h] [rbp-38h]
  __int128 v25; // [rsp+50h] [rbp-30h] BYREF
  __int64 v26; // [rsp+60h] [rbp-20h]

  v7 = 0;
  v24 = 0LL;
  v11 = (volatile signed __int32 *)a1;
  v23 = 0LL;
  switch ( a5 )
  {
    case 0u:
    case 4u:
      v16 = a7;
      wil_details_FeatureReporting_IncrementUsageInCache(a1, a5, a7, &v23);
      break;
    case 1u:
    case 5u:
      v16 = a7;
      wil_details_FeatureReporting_IncrementOpportunityInCache(a1, a5, a7, &v23);
      break;
    case 2u:
    case 3u:
    case 6u:
    case 7u:
      v12 = 0;
      switch ( a5 )
      {
        case 2u:
          v12 = 2;
          break;
        case 3u:
          v12 = 8;
          break;
        case 6u:
          v12 = 4;
          break;
        case 7u:
          v12 = 16;
          break;
      }
      v13 = v12 | 1;
      _m_prefetchw((const void *)v11);
      v14 = _InterlockedOr(v11, v13);
      v15 = v23;
      v16 = a7;
      if ( (v14 & 1) == 0 )
        v15 = 1;
      a1 = v13 & 0xFFFFFFFE;
      LODWORD(v23) = v15;
      LODWORD(v24) = (v14 & (unsigned int)a1) == a1;
      break;
    default:
      v17 = a5 - 320;
      if ( a5 - 320 < 0x40 )
      {
        v18 = *(_DWORD *)(a1 + 4);
        do
        {
          if ( (v18 & 0x10) == 0 || (LODWORD(v24) = 1, ((v18 >> 5) & 0x3F) != v17) )
            LODWORD(v24) = 0;
          a1 = (32 * (v17 & 0x3F)) | v18 & 0xFFFFF81F | 0x10;
          v19 = v18;
          v18 = _InterlockedCompareExchange(v11 + 1, a1, v18);
        }
        while ( v19 != v18 );
      }
      v16 = a7;
      DWORD1(v23) = a7;
      *((_QWORD *)&v23 + 1) = a5;
      break;
  }
  v26 = v24;
  v25 = v23;
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(a2, a5, v16, v11, &v25);
  if ( a3 && a5 != 254 )
  {
    v21 = a2;
    v22 = (unsigned __int16)a5;
    if ( a4 )
      HIWORD(v22) |= 1u;
    CmFcManagerNotifyFeatureUsage(a1, &v21);
  }
  LOBYTE(v7) = (_DWORD)v26 == 0;
  return v7;
}

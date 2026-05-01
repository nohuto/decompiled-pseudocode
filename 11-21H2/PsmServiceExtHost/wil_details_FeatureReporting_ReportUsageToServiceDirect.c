/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1800305C4
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x180030400 (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x18006DA3C (wil_RtlStagingConfig_RecordFeatureUsage.c)
 *     ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x18006DAB4 (-wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCa.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x18006DB9C (wil_details_FeatureReporting_IncrementUsageInCache.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  int v7; // r15d
  int v10; // edx
  unsigned int v11; // edx
  signed __int32 v12; // eax
  int v13; // ecx
  unsigned int v14; // r8d
  unsigned __int32 v15; // eax
  unsigned __int32 v16; // ett
  __int128 v18; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+40h] [rbp-30h]
  __int128 v20; // [rsp+48h] [rbp-28h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h]

  v5 = 0;
  v19 = 0LL;
  v7 = a3;
  v18 = 0LL;
  if ( !a5 )
    goto LABEL_27;
  if ( a5 == 1 )
  {
LABEL_26:
    wil_details_FeatureReporting_IncrementOpportunityInCache(a1, a5, a3, &v18);
    goto LABEL_28;
  }
  if ( (int)a5 <= 1 )
    goto LABEL_19;
  if ( (int)a5 <= 3 )
  {
LABEL_8:
    v10 = 0;
    switch ( a5 )
    {
      case 2u:
        v10 = 2;
        break;
      case 3u:
        v10 = 8;
        break;
      case 6u:
        v10 = 4;
        break;
      case 7u:
        v10 = 16;
        break;
    }
    v11 = v10 | 1;
    _m_prefetchw((const void *)a1);
    v12 = _InterlockedOr(a1, v11);
    v13 = v18;
    if ( (v12 & 1) == 0 )
      v13 = 1;
    LODWORD(v18) = v13;
    LODWORD(v19) = (v11 & 0xFFFFFFFE & v12) == (v11 & 0xFFFFFFFE);
    goto LABEL_28;
  }
  if ( a5 == 4 )
  {
LABEL_27:
    wil_details_FeatureReporting_IncrementUsageInCache(a1, a5, a3, &v18);
    goto LABEL_28;
  }
  if ( a5 == 5 )
    goto LABEL_26;
  if ( a5 - 6 <= 1 )
    goto LABEL_8;
LABEL_19:
  v14 = a5 - 320;
  if ( a5 - 320 < 0x40 )
  {
    v15 = *((_DWORD *)a1 + 1);
    do
    {
      if ( (v15 & 0x10) == 0 || (LODWORD(v19) = 1, ((v15 >> 5) & 0x3F) != v14) )
        LODWORD(v19) = 0;
      v16 = v15;
      v15 = _InterlockedCompareExchange(a1 + 1, (32 * (v14 & 0x3F)) | v15 & 0xFFFFF81F | 0x10, v15);
    }
    while ( v16 != v15 );
  }
  *((_QWORD *)&v18 + 1) = a5;
  DWORD1(v18) = 1;
LABEL_28:
  v21 = v19;
  v20 = v18;
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(a2, a5, 1LL, a1, &v20);
  if ( v7 && a5 != 254 )
    wil_RtlStagingConfig_RecordFeatureUsage(a2, a5, a4);
  LOBYTE(v5) = (_DWORD)v21 == 0;
  return v5;
}

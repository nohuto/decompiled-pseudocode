/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18004C5E4
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18004C4A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 * Callees:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x1800065F0 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_detail.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18007EB28 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x18007FD8C (-wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCa.c)
 *     ?wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x18007FE74 (-wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        int a5)
{
  unsigned int v5; // edi
  int v7; // r15d
  int v10; // edx
  unsigned int v11; // edx
  signed __int32 v12; // eax
  int v13; // ecx
  unsigned __int32 v14; // eax
  unsigned __int32 v15; // ett
  unsigned int v16; // edx
  char *v18; // [rsp+20h] [rbp-40h]
  __int128 v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+40h] [rbp-20h]
  char v21[16]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22; // [rsp+58h] [rbp-8h]

  v5 = 0;
  v20 = 0LL;
  v7 = a3;
  v19 = 0LL;
  if ( !a5 )
    goto LABEL_27;
  if ( a5 == 1 )
  {
LABEL_26:
    wil_details_FeatureReporting_IncrementOpportunityInCache(a1, (unsigned int)a5, a3, &v19);
    goto LABEL_28;
  }
  if ( a5 <= 1 )
    goto LABEL_19;
  if ( a5 <= 3 )
  {
LABEL_8:
    v10 = 0;
    switch ( a5 )
    {
      case 2:
        v10 = 2;
        break;
      case 3:
        v10 = 8;
        break;
      case 6:
        v10 = 4;
        break;
      case 7:
        v10 = 16;
        break;
    }
    v11 = v10 | 1;
    _m_prefetchw((const void *)a1);
    v12 = _InterlockedOr(a1, v11);
    v13 = v19;
    if ( (v12 & 1) == 0 )
      v13 = 1;
    LODWORD(v19) = v13;
    LODWORD(v20) = (v11 & 0xFFFFFFFE & v12) == (v11 & 0xFFFFFFFE);
    goto LABEL_28;
  }
  if ( a5 == 4 )
  {
LABEL_27:
    wil_details_FeatureReporting_IncrementUsageInCache(a1, (unsigned int)a5, a3, &v19);
    goto LABEL_28;
  }
  if ( a5 == 5 )
    goto LABEL_26;
  if ( (unsigned int)(a5 - 6) <= 1 )
    goto LABEL_8;
LABEL_19:
  a3 = (unsigned int)(a5 - 320);
  if ( (unsigned int)a3 < 0x40 )
  {
    v14 = *((_DWORD *)a1 + 1);
    do
    {
      if ( (v14 & 0x10) == 0 || (LODWORD(v20) = 1, ((v14 >> 5) & 0x3F) != (_DWORD)a3) )
        LODWORD(v20) = 0;
      v15 = v14;
      v14 = _InterlockedCompareExchange(a1 + 1, (32 * (((_BYTE)a5 - 64) & 0x3F)) | v14 & 0xFFFFF81F | 0x10, v14);
    }
    while ( v15 != v14 );
  }
  *((_QWORD *)&v19 + 1) = (unsigned int)a5;
  DWORD1(v19) = 1;
LABEL_28:
  v22 = v20;
  *(_OWORD *)v21 = v19;
  wil::details::RecordFeatureUsageCallback(a2, a5, a3, (char *)a1, (_FILETIME)v21);
  if ( v7 )
  {
    v16 = a5 | 0x80000000;
    if ( !a4 )
      v16 = a5;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a2, v16, 0, 0, v18);
  }
  LOBYTE(v5) = (_DWORD)v22 == 0;
  return v5;
}

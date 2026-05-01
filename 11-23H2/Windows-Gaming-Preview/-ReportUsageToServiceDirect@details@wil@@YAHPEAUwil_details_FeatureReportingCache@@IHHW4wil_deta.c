/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x180012D44
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180013090 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4Variant_AutoGameMode@@W4VariantReportingKind@3@_K@Z @ 0x1800419D8 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_.c)
 * Callees:
 *     ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAU1@@Z$1?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@XZ @ 0x180007FD4 (--I-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x180012958 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x180012A54 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x180012BA8 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  int v8; // r15d
  unsigned int v11; // ebx
  unsigned int v12; // r9d
  unsigned __int32 v13; // eax
  unsigned __int32 v14; // ett
  int v15; // edx
  signed __int32 v16; // ecx
  char v17; // r9
  signed __int32 v18; // r8d
  signed __int32 v19; // eax
  __int64 v20; // r8
  __int64 *v21; // rax
  void (__fastcall *v22)(__int64 *, void (__fastcall *)(void *), __int64); // r9
  bool v23; // zf
  __int128 v25; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+40h] [rbp-10h]

  v8 = a3;
  v25 = 0LL;
  v26 = 0LL;
  v11 = 0;
  switch ( a5 )
  {
    case 0u:
      goto LABEL_33;
    case 1u:
LABEL_32:
      wil_details_FeatureReporting_IncrementOpportunityInCache(a1, a5, a3, &v25);
      goto LABEL_34;
    case 2u:
    case 3u:
      goto LABEL_16;
    case 4u:
LABEL_33:
      wil_details_FeatureReporting_IncrementUsageInCache(a1, a5, a3, &v25);
      goto LABEL_34;
    case 5u:
      goto LABEL_32;
  }
  if ( a5 - 6 >= 2 )
  {
    v12 = a5 - 320;
    if ( a5 - 320 >= 0x40 )
      goto LABEL_15;
    v13 = *((_DWORD *)a1 + 1);
    do
    {
      if ( (v13 & 0x10) == 0 || (LODWORD(v26) = 1, ((v13 >> 5) & 0x3F) != v12) )
        LODWORD(v26) = 0;
      v14 = v13;
      v13 = _InterlockedCompareExchange(a1 + 1, (32 * (v12 & 0x3F)) | v13 & 0xFFFFF81F | 0x10, v13);
    }
    while ( v14 != v13 );
    if ( !(_DWORD)v26 )
    {
LABEL_15:
      DWORD2(v25) = a5;
      DWORD1(v25) = 1;
    }
    goto LABEL_34;
  }
LABEL_16:
  v15 = 0;
  switch ( a5 )
  {
    case 2u:
      v15 = 2;
      break;
    case 3u:
      v15 = 8;
      break;
    case 6u:
      v15 = 4;
      break;
    case 7u:
      v15 = 16;
      break;
  }
  v16 = *a1;
  do
  {
    v17 = v16;
    LODWORD(v26) = (v16 | v15) == v16;
    v18 = v16 | v15 | 1;
    if ( (v16 | v15) == v16 )
      v18 = v16 | v15;
    v19 = _InterlockedCompareExchange(a1, v18, v16);
    v23 = v16 == v19;
    v16 = v19;
  }
  while ( !v23 );
  LODWORD(v25) = (v18 & 1) != 0 && (v17 & 1) == 0;
LABEL_34:
  if ( g_wil_details_RecordSRUMFeatureUsage && (!a5 || a5 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a2, a5, 1LL);
  if ( (_DWORD)v25 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      a2,
      (struct wil_details_FeatureReportingCache *)a1);
  v20 = DWORD1(v25);
  if ( DWORD1(v25) )
  {
    if ( g_wil_details_internalRecordFeatureUsage )
    {
      g_wil_details_internalRecordFeatureUsage(a2);
    }
    else if ( g_wil_details_apiRecordFeatureUsage )
    {
      g_wil_details_apiRecordFeatureUsage(a2);
    }
  }
  if ( !(_DWORD)v26 && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&stru_180064480);
    if ( !qword_1800644A0 )
    {
      v21 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,void (*)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),&void wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),wistd::integral_constant<unsigned __int64,0>,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,0,std::nullptr_t>>>::operator&(&qword_1800644A0);
      v22 = (void (__fastcall *)(__int64 *, void (__fastcall *)(void *), __int64))g_wil_details_internalSubscribeFeatureStateChangeNotification;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v22 = (void (__fastcall *)(__int64 *, void (__fastcall *)(void *), __int64))g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        v22(v21, _lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_, -1LL);
      }
      else
      {
        *v21 = 0LL;
      }
    }
    ReleaseSRWLockExclusive(&stru_180064480);
  }
  if ( v8 )
  {
    if ( g_wil_details_internalRecordFeatureUsage )
    {
      g_wil_details_internalRecordFeatureUsage(a2);
    }
    else if ( g_wil_details_apiRecordFeatureUsage )
    {
      g_wil_details_apiRecordFeatureUsage(a2);
    }
  }
  v23 = (_DWORD)v26 == 0;
  if ( !(_DWORD)v26 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v20) = a8;
      g_wil_details_realtimeFeatureUsageHook(a2, a5, v20);
    }
    v23 = (_DWORD)v26 == 0;
  }
  LOBYTE(v11) = v23;
  return v11;
}

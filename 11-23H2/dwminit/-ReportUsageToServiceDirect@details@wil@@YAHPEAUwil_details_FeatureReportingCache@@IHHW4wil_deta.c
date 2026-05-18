/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x18000D9FC
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000D918 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAAX_NW4Report.c)
 * Callees:
 *     ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAU1@@Z$1?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@XZ @ 0x180004918 (--I-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180009AAC (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ??$EnsureCoalescedTimer@VEnabledStateManager@details@wil@@@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@AEA_NPEAVEnabledStateManager@01@@Z @ 0x18000D2A4 (--$EnsureCoalescedTimer@VEnabledStateManager@details@wil@@@details@wil@@YAXAEAV-$unique_any_t@V-.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x18000E28C (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x18000E380 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18000F9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  int v9; // r14d
  unsigned int v11; // edi
  unsigned int v12; // r8d
  unsigned __int32 v13; // eax
  unsigned __int32 v14; // ett
  int v15; // edx
  signed __int32 v16; // eax
  char v17; // r10
  signed __int32 v18; // r9d
  signed __int32 v19; // ett
  __int64 v20; // r8
  __int64 *v21; // rax
  void (__fastcall *v22)(__int64 *, void (__fastcall *)(void *), __int64); // r9
  __int64 v23; // rdx
  int Source; // [rsp+30h] [rbp-30h] BYREF
  volatile signed __int32 *v26; // [rsp+38h] [rbp-28h]
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h]

  v28 = 0LL;
  v9 = a3;
  v11 = 1;
  v27 = 0LL;
  switch ( a5 )
  {
    case 0u:
      goto LABEL_34;
    case 1u:
LABEL_33:
      wil_details_FeatureReporting_IncrementOpportunityInCache(a1, a5, a3, &v27);
      goto LABEL_35;
    case 2u:
    case 3u:
      goto LABEL_17;
    case 4u:
LABEL_34:
      wil_details_FeatureReporting_IncrementUsageInCache(a1, a5, a3, &v27);
      goto LABEL_35;
    case 5u:
      goto LABEL_33;
  }
  if ( a5 - 6 >= 2 )
  {
    v12 = a5 - 320;
    if ( a5 - 320 >= 0x40 )
      goto LABEL_16;
    v13 = *((_DWORD *)a1 + 1);
    do
    {
      LODWORD(v28) = (v13 & 0x10) != 0 && ((v13 >> 5) & 0x3F) == v12;
      v14 = v13;
      v13 = _InterlockedCompareExchange(a1 + 1, (32 * (v12 & 0x3F)) | v13 & 0xFFFFF81F | 0x10, v13);
    }
    while ( v14 != v13 );
    if ( !(_DWORD)v28 )
    {
LABEL_16:
      DWORD2(v27) = a5;
      DWORD1(v27) = 1;
    }
    goto LABEL_35;
  }
LABEL_17:
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
    v18 = v16 | v15 | 1;
    LODWORD(v28) = (v16 | v15) == v16;
    if ( (v16 | v15) == v16 )
      v18 = v16 | v15;
    v19 = v16;
    v16 = _InterlockedCompareExchange(a1, v18, v16);
  }
  while ( v19 != v16 );
  LODWORD(v27) = (v18 & 1) != 0 && (v17 & 1) == 0;
LABEL_35:
  if ( g_wil_details_RecordSRUMFeatureUsage && (!a5 || a5 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(57566014LL, a5, 1LL);
  if ( (_DWORD)v27
    && wil::details::g_enabledStateManager
    && !wil::details::g_processShutdownInProgress
    && (!wil::details::g_pfnDllShutdownInProgress || !(unsigned __int8)wil::details::g_pfnDllShutdownInProgress()) )
  {
    AcquireSRWLockExclusive(&SRWLock);
    Source = 57566014;
    v26 = a1;
    wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&unk_1800162F8, &Source, 0x10uLL);
    wil::details::EnsureCoalescedTimer<wil::details::EnabledStateManager>(
      &qword_1800162D8,
      &byte_1800162E0,
      &wil::details::g_enabledStateManager);
    ReleaseSRWLockExclusive(&SRWLock);
  }
  v20 = DWORD1(v27);
  if ( DWORD1(v27) )
  {
    if ( g_wil_details_internalRecordFeatureUsage )
    {
      g_wil_details_internalRecordFeatureUsage(57566014LL, DWORD2(v27), DWORD1(v27), 0LL);
    }
    else if ( g_wil_details_apiRecordFeatureUsage )
    {
      g_wil_details_apiRecordFeatureUsage(57566014LL, DWORD2(v27), DWORD1(v27), 0LL);
    }
  }
  if ( !(_DWORD)v28 && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&SRWLock);
    if ( !qword_1800162F0 )
    {
      v21 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,void (*)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),&void wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),wistd::integral_constant<unsigned __int64,0>,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,0,std::nullptr_t>>>::operator&(&qword_1800162F0);
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
    ReleaseSRWLockExclusive(&SRWLock);
  }
  if ( v9 )
  {
    v23 = a5;
    LODWORD(v23) = a5 | 0x80000000;
    if ( !a4 )
      v23 = a5;
    if ( g_wil_details_internalRecordFeatureUsage )
    {
      g_wil_details_internalRecordFeatureUsage(57566014LL, v23, 0LL, 0LL);
    }
    else if ( g_wil_details_apiRecordFeatureUsage )
    {
      g_wil_details_apiRecordFeatureUsage(57566014LL, v23, 0LL, 0LL);
    }
  }
  if ( (_DWORD)v28 )
  {
    return 0;
  }
  else if ( g_wil_details_realtimeFeatureUsageHook )
  {
    LOBYTE(v20) = a8;
    g_wil_details_realtimeFeatureUsageHook(57566014LL, a5, v20);
  }
  return v11;
}

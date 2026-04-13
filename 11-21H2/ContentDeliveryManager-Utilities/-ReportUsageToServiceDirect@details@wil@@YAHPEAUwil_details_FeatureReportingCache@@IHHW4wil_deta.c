/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180043F20
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_K@Z @ 0x180044148 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil.c)
 * Callees:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18003F414 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18004B214 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        struct wil_details_FeatureReportingCache *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v10; // rax
  unsigned int v11; // ebx
  unsigned int v12; // edx
  __int128 v14; // [rsp+30h] [rbp-48h]
  __int64 v15; // [rsp+40h] [rbp-38h]
  __int64 v16; // [rsp+48h] [rbp-30h] BYREF

  v10 = wil_details_FeatureReporting_RecordUsageInCache(&v16, a1, a5, a6);
  v14 = *(_OWORD *)v10;
  v15 = *(_QWORD *)(v10 + 16);
  v11 = 0;
  if ( g_wil_details_RecordSRUMFeatureUsage && (!a5 || a5 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a2, a5, 1u);
  if ( (_DWORD)v14 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      a2,
      a1);
  if ( DWORD1(v14) )
  {
    if ( g_wil_details_internalRecordFeatureUsage )
    {
      g_wil_details_internalRecordFeatureUsage(a2, DWORD2(v14), DWORD1(v14), 0LL);
    }
    else if ( g_wil_details_apiRecordFeatureUsage )
    {
      g_wil_details_apiRecordFeatureUsage(a2, DWORD2(v14), DWORD1(v14), 0LL);
    }
  }
  if ( !(_DWORD)v15 && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&stru_1801AE300);
    if ( !qword_1801AE320 )
    {
      qword_1801AE320 = 0LL;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification )
      {
        g_wil_details_internalSubscribeFeatureStateChangeNotification(
          (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)&qword_1801AE320,
          (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_,
          (void *)0xFFFFFFFFFFFFFFFFLL);
      }
      else if ( g_wil_details_apiSubscribeFeatureStateChangeNotification )
      {
        g_wil_details_apiSubscribeFeatureStateChangeNotification(
          (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)&qword_1801AE320,
          (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_,
          (void *)0xFFFFFFFFFFFFFFFFLL);
      }
    }
    ReleaseSRWLockExclusive(&stru_1801AE300);
  }
  if ( a3 )
  {
    v12 = a5 | 0x80000000;
    if ( !a4 )
      v12 = a5;
    if ( g_wil_details_internalRecordFeatureUsage )
    {
      g_wil_details_internalRecordFeatureUsage(a2, v12, 0, 0LL);
    }
    else if ( g_wil_details_apiRecordFeatureUsage )
    {
      g_wil_details_apiRecordFeatureUsage(a2, v12, 0, 0LL);
    }
  }
  LOBYTE(v11) = (_DWORD)v15 == 0;
  return v11;
}

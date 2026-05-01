/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180007F60
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x180007878 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall wil::details::RecordFeatureUsageCallback(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        struct wil_details_FeatureReportingCache *a4,
        _DWORD *a5)
{
  unsigned int v7; // r8d
  unsigned int v8; // edx
  unsigned int v9; // edx

  if ( a4 )
  {
    if ( g_wil_details_RecordSRUMFeatureUsage && (!a2 || a2 - 100 <= 0x31) )
      g_wil_details_RecordSRUMFeatureUsage(a1, a2, a3);
    if ( *a5 )
      wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
        a1,
        a4);
    v7 = a5[1];
    if ( v7 )
    {
      v8 = a5[2];
      if ( g_wil_details_internalRecordFeatureUsage )
      {
        g_wil_details_internalRecordFeatureUsage(a1, v8, v7, 0LL);
      }
      else if ( g_wil_details_apiRecordFeatureUsage )
      {
        g_wil_details_apiRecordFeatureUsage(a1, v8, v7, 0LL);
      }
    }
    if ( !a5[4] && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&stru_180062480);
      if ( !qword_1800624A0 )
      {
        qword_1800624A0 = 0LL;
        if ( g_wil_details_internalSubscribeFeatureStateChangeNotification )
        {
          g_wil_details_internalSubscribeFeatureStateChangeNotification(
            (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)&qword_1800624A0,
            (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_,
            (void *)0xFFFFFFFFFFFFFFFFLL);
        }
        else if ( g_wil_details_apiSubscribeFeatureStateChangeNotification )
        {
          g_wil_details_apiSubscribeFeatureStateChangeNotification(
            (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)&qword_1800624A0,
            (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_,
            (void *)0xFFFFFFFFFFFFFFFFLL);
        }
      }
      ReleaseSRWLockExclusive(&stru_180062480);
    }
  }
  else
  {
    v9 = a5[2] | 0x80000000;
    if ( !a5[5] )
      v9 = a5[2];
    if ( g_wil_details_internalRecordFeatureUsage )
    {
      g_wil_details_internalRecordFeatureUsage(a1, v9, 0, 0LL);
    }
    else if ( g_wil_details_apiRecordFeatureUsage )
    {
      g_wil_details_apiRecordFeatureUsage(a1, v9, 0, 0LL);
    }
  }
}

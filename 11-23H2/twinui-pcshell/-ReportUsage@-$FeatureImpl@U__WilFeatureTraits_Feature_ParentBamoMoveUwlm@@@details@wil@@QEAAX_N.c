/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ParentBamoMoveUwlm@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D326C
 * Callers:
 *     ?IsBamoEnabled@@YA_NXZ @ 0x1800D2E84 (-IsBamoEnabled@@YA_NXZ.c)
 * Callees:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x1800D1440 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ParentBamoMoveUwlm@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800D31A4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ParentBamoMoveUwlm@@@det.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1802CEAF6 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1803A5000 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     wil_details_MapReportingKind @ 0x1803A51C4 (wil_details_MapReportingKind.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ParentBamoMoveUwlm>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  unsigned int v4; // esi
  unsigned int v5; // r14d
  volatile signed __int32 v7; // ebx
  struct wil_details_FeatureReportingCache *v8; // r15
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // esi
  unsigned int v13; // edx
  const char *v14; // [rsp+20h] [rbp-49h]
  signed __int32 v15; // [rsp+50h] [rbp-19h] BYREF
  unsigned int v16[4]; // [rsp+58h] [rbp-11h]
  __int64 v17; // [rsp+68h] [rbp-1h]
  _BYTE v18[80]; // [rsp+70h] [rbp+7h] BYREF
  int v19; // [rsp+D0h] [rbp+67h] BYREF
  char v20; // [rsp+D4h] [rbp+6Bh]
  unsigned int v21; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v22; // [rsp+E8h] [rbp+7Fh]

  v22 = a4;
  v4 = a3;
  v5 = a2;
  v7 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    v22 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ParentBamoMoveUwlm>::GetCachedFeatureEnabledState(
                       a1,
                       &v15);
    LOWORD(v7) = v22;
  }
  v8 = (struct wil_details_FeatureReportingCache *)(a1 + 2);
  v19 = 0;
  v20 = 2;
  v21 = v4;
  if ( (_BYTE)v4 )
  {
    v9 = wil_details_MapReportingKind(v4, v5);
    v10 = wil_details_FeatureReporting_RecordUsageInCache(v18, v8, v9, 0LL);
    *(_OWORD *)v16 = *(_OWORD *)v10;
    v17 = *(_QWORD *)(v10 + 16);
    if ( g_wil_details_RecordSRUMFeatureUsage && (!v9 || v9 - 100 <= 0x31) )
      g_wil_details_RecordSRUMFeatureUsage(38032249LL, v9, 1LL);
    if ( v16[0] )
      wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        &wil::details::g_enabledStateManager,
        38032249,
        v8);
    v11 = v16[1];
    if ( v16[1] )
      wil::details::WilApi_RecordFeatureUsage((wil::details *)0x2445379, v16[2], v16[1], 0, v14);
    v12 = v17;
    if ( !(_DWORD)v17 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&SRWLock);
      if ( !qword_18098D890 )
      {
        qword_18098D890 = 0LL;
        if ( g_wil_details_internalSubscribeFeatureStateChangeNotification )
        {
          g_wil_details_internalSubscribeFeatureStateChangeNotification(
            &qword_18098D890,
            _lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_,
            -1LL);
        }
        else if ( g_wil_details_apiSubscribeFeatureStateChangeNotification )
        {
          g_wil_details_apiSubscribeFeatureStateChangeNotification(
            &qword_18098D890,
            _lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_,
            -1LL);
        }
      }
      ReleaseSRWLockExclusive(&SRWLock);
    }
    if ( (v7 & 0x400) != 0 )
    {
      v13 = v9;
      if ( (v7 & 0x800) != 0 )
        v13 = v9 | 0x80000000;
      wil::details::WilApi_RecordFeatureUsage((wil::details *)0x2445379, v13, 0, 0, v14);
    }
    if ( !v12 )
    {
      if ( g_wil_details_realtimeFeatureUsageHook )
      {
        LOBYTE(v11) = 2;
        g_wil_details_realtimeFeatureUsageHook(38032249LL, v9, v11);
      }
      if ( g_wil_details_pfnFeatureLoggingHook )
        g_wil_details_pfnFeatureLoggingHook(38032249LL, &v19, 0LL, v5, &v21, 0LL, 0, 1LL);
    }
  }
}

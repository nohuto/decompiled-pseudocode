/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x14002A9A8
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x14002AB64 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x14002A92C (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140058538 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x140059E40 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x140059E90 (-WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x140059F44 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wil::details::RecordFeatureUsageCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct wil_details_FeatureReportingCache *a4,
        _DWORD *a5)
{
  _DWORD *v6; // rbx
  unsigned int v7; // r8d
  void *v8; // r9
  const char *v9; // [rsp+20h] [rbp-8h]

  if ( g_wil_details_RecordSRUMFeatureUsage && (!(_DWORD)a2 || (unsigned int)(a2 - 100) <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(53104070LL, a2, 1LL);
  v6 = a5;
  if ( *a5 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
      a2,
      a4);
  v7 = v6[1];
  if ( v7 )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x32A4DC6, v6[2], v7, (unsigned int)a4, v9);
  if ( !v6[4] && wil::details::g_enabledStateManager )
  {
    wil::srwlock::lock_exclusive(&qword_1400CF4F0, &a5);
    if ( !*((_QWORD *)&xmmword_1400CF508 + 1) )
    {
      *((_QWORD *)&xmmword_1400CF508 + 1) = 0LL;
      wil::details::WilApi_SubscribeFeatureStateChangeNotification(
        (wil::details *)((char *)&xmmword_1400CF508 + 8),
        (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_,
        (void (*)(void *))0xFFFFFFFFFFFFFFFFLL,
        v8);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&a5);
  }
}

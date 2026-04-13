/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18003B7C8
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x18003EC14 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     ??$EnsureCoalescedTimer@VEnabledStateManager@details@wil@@@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@AEA_NPEAVEnabledStateManager@01@@Z @ 0x1800261B4 (--$EnsureCoalescedTimer@VEnabledStateManager@details@wil@@@details@wil@@YAXAEAV-$unique_any_t@V-.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C230 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180039ED8 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800421EC (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180042238 (-WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBS.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180044D20 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wil::details::RecordFeatureUsageCallback(wil *a1, __int64 a2, __int64 a3, char *a4, RTL_SRWLOCK *a5)
{
  unsigned int v6; // edi
  RTL_SRWLOCK *v7; // rbx
  unsigned int Ptr_high; // r8d
  void *v9; // r9
  char *v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = (unsigned int)a1;
  if ( g_wil_details_RecordSRUMFeatureUsage && (!(_DWORD)a2 || (unsigned int)(a2 - 100) <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a1, a2, 1LL);
  v7 = a5;
  if ( LODWORD(a5->Ptr) && wil::details::g_enabledStateManager && !wil::ProcessShutdownInProgress(a1) )
  {
    AcquireSRWLockExclusive(&stru_180195350);
    a5 = &stru_180195350;
    LODWORD(v10[0]) = v6;
    v10[1] = a4;
    wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&unk_180195378, v10, 0x10uLL);
    wil::details::EnsureCoalescedTimer<wil::details::EnabledStateManager>(
      &qword_180195358,
      byte_180195360,
      &wil::details::g_enabledStateManager);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&a5);
  }
  Ptr_high = HIDWORD(v7->Ptr);
  if ( Ptr_high )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)v6, (unsigned int)v7[1].Ptr, Ptr_high, 0, v10[0]);
  if ( !LODWORD(v7[2].Ptr) && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&stru_180195350);
    a5 = &stru_180195350;
    if ( !qword_180195370 )
    {
      qword_180195370 = 0LL;
      wil::details::WilApi_SubscribeFeatureStateChangeNotification(
        (wil::details *)&qword_180195370,
        (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_,
        (void (*)(void *))0xFFFFFFFFFFFFFFFFLL,
        v9);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&a5);
  }
}

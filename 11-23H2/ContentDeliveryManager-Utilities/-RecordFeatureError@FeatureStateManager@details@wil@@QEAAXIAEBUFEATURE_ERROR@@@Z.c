/*
 * XREFs of ?RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z @ 0x18003B574
 * Callers:
 *     ?WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z @ 0x180042000 (-WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     ??$EnsureCoalescedTimer@VFeatureStateManager@details@wil@@@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@AEA_NPEAVFeatureStateManager@01@@Z @ 0x180026244 (--$EnsureCoalescedTimer@VFeatureStateManager@details@wil@@@details@wil@@YAXAEAV-$unique_any_t@V-.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C230 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180031654 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180039ED8 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x18003B404 (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureStateManager::RecordFeatureError(
        wil::details::FeatureStateManager *this,
        unsigned int a2,
        const struct FEATURE_ERROR *a3)
{
  wil *v6; // rcx
  char v7; // [rsp+30h] [rbp-28h]
  RTL_SRWLOCK *v8; // [rsp+60h] [rbp+8h] BYREF

  if ( *(_BYTE *)this )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      v7 = 0;
      g_wil_details_pfnFeatureLoggingHook(a2, 0LL, a3, 1LL, 0LL, 0LL, v7, 1LL);
    }
    if ( wil::details::FeatureStateManager::EnsureStateData(this)
      && wil::details_abi::FeatureStateData::RecordFeatureError(*((PSRWLOCK *)this + 3), a2, a3)
      && !wil::ProcessShutdownInProgress(v6) )
    {
      AcquireSRWLockExclusive((PSRWLOCK)this + 4);
      v8 = (RTL_SRWLOCK *)((char *)this + 32);
      wil::details::EnsureCoalescedTimer<wil::details::FeatureStateManager>(
        (_QWORD *)this + 6,
        (_BYTE *)this + 65,
        this);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v8);
    }
  }
}

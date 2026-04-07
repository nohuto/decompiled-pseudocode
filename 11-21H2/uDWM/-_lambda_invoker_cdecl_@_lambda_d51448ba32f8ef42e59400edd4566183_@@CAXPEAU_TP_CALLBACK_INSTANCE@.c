/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_d51448ba32f8ef42e59400edd4566183_@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800143C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18003F85C (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180041324 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18004135C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x180094584 (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        wil::details_abi::FeatureStateData **Context,
        PTP_TIMER Timer)
{
  wil::details_abi::FeatureStateData *v4; // rcx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_BYTE *)Context )
  {
    wil::AcquireSRWLockExclusive(&v5, Context + 4);
    *((_BYTE *)Context + 65) = 0;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v5);
    wil::details::FeatureStateManager::FlushUsage((wil::details::FeatureStateManager *)Context);
    v4 = Context[3];
    if ( v4 )
      wil::details_abi::FeatureStateData::RecordUsage(v4);
  }
}

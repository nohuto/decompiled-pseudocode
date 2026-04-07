/*
 * XREFs of ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18003EF40
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_0374aa0a5d1201b2358c6bce99369c58_@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180014370 (-_lambda_invoker_cdecl_@_lambda_0374aa0a5d1201b2358c6bce99369c58_@@CAXPEAU_TP_CALLBACK_INSTANCE@.c)
 *     ?_lambda_invoker_cdecl_@_lambda_aa194dc0bf891154933407eb98fb868a_@@CAXPEAX@Z @ 0x180097040 (-_lambda_invoker_cdecl_@_lambda_aa194dc0bf891154933407eb98fb868a_@@CAXPEAX@Z.c)
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18003EEA0 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180041324 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18004135C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 */

void __fastcall wil::details::EnabledStateManager::OnTimer(wil::details::EnabledStateManager *this)
{
  __int64 v2; // rdx
  void (*v3)(unsigned int, unsigned int, unsigned int, const char *); // r8
  char v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)this )
  {
    wil::AcquireSRWLockExclusive(&v4, (char *)this + 8);
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock(this, v2, v3);
    *((_BYTE *)this + 24) = 0;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v4);
  }
}

/*
 * XREFs of ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180096378
 * Callers:
 *     ?UnsubscribeProcessWideUsageFlush@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180096404 (-UnsubscribeProcessWideUsageFlush@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z.c)
 *     ?WilApiImpl_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180096440 (-WilApiImpl_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_S.c)
 * Callees:
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180041324 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18004135C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180093CE0 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 */

void __fastcall wil::details_abi::SubscriptionList::Unsubscribe(
        struct _RTL_CRITICAL_SECTION *this,
        RTL_SRWLOCK *a2,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a3)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  RTL_SRWLOCK *v7; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+48h] [rbp+20h] BYREF

  if ( a3 )
  {
    EnterCriticalSection(this);
    v8 = this;
    wil::AcquireSRWLockExclusive(&v7, a2);
    DebugInfo = this[1].DebugInfo;
    if ( (unsigned __int64)a3 - 1 < (*(_QWORD *)&this[1].LockCount - (_QWORD)DebugInfo) >> 4 )
      *((_OWORD *)&DebugInfo->Type + (unsigned __int64)a3 - 1) = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v7);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v8);
  }
}

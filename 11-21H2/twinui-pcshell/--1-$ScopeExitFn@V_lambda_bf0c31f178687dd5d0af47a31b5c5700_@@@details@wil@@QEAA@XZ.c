/*
 * XREFs of ??1?$ScopeExitFn@V_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@@details@wil@@QEAA@XZ @ 0x1803B54E4
 * Callers:
 *     _winrt::immersive_shell_component::PublishServices_::_1_::dtor$4 @ 0x1802184BC (_winrt--immersive_shell_component--PublishServices_--_1_--dtor$4.c)
 * Callees:
 *     ?swap@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@QEAAXAEAV12@@Z @ 0x180077848 (-swap@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_descr.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

void __fastcall wil::details::ScopeExitFn<_lambda_bf0c31f178687dd5d0af47a31b5c5700_>::~ScopeExitFn<_lambda_bf0c31f178687dd5d0af47a31b5c5700_>(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    wil::AcquireSRWLockExclusive(&v2, (RTL_SRWLOCK *)(*(_QWORD *)a1 + 80LL));
    std::vector<winrt::immersive_shell_component::service_description>::swap(
      (__int64 *)(*(_QWORD *)a1 + 48LL),
      *(__int64 **)(a1 + 8));
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v2);
  }
}

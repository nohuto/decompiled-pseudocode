/*
 * XREFs of ??1?$unique_ptr@Uthreadpool_resume@?1??resume_apartment_on_threadpool@impl@winrt@@YAXAEBU?$com_ptr@UIContextCallback@impl@winrt@@@4@U?$coroutine_handle@X@experimental@std@@@Z@U?$default_delete@Uthreadpool_resume@?1??resume_apartment_on_threadpool@impl@winrt@@YAXAEBU?$com_ptr@UIContextCallback@impl@winrt@@@4@U?$coroutine_handle@X@experimental@std@@@Z@@8@@std@@QEAA@XZ @ 0x18034CC70
 * Callers:
 *     __lambda_25ebd5c53626aa9093297295a22b60c6_::_lambda_invoker_cdecl__::_1_::dtor$0 @ 0x180345A1B (__lambda_25ebd5c53626aa9093297295a22b60c6_--_lambda_invoker_cdecl__--_1_--dtor$0.c)
 *     _winrt::impl::resume_apartment_on_threadpool_::_1_::dtor$0 @ 0x18035182F (_winrt--impl--resume_apartment_on_threadpool_--_1_--dtor$0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void __fastcall __1__unique_ptr_Uthreadpool_resume__1__resume_apartment_on_threadpool_impl_winrt__YAXAEBU__com_ptr_UIContextCallback_impl_winrt___4_U__coroutine_handle_X_experimental_std___Z_U__default_delete_Uthreadpool_resume__1__resume_apartment_on_threadpool_impl_winrt__YAXAEBU__com_ptr_UIContextCallback_impl_winrt___4_U__coroutine_handle_X_experimental_std___Z__8__std__QEAA_XZ(
        __int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( *v1 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(*a1);
    operator delete(v1);
  }
}

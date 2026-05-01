/*
 * XREFs of _lambda_b34b1a0e0f93d6865fffe40b58850487_::operator() @ 0x18040550C
 * Callers:
 *     wil::details::lambda_call__lambda_b34b1a0e0f93d6865fffe40b58850487___::_lambda_call__lambda_b34b1a0e0f93d6865fffe40b58850487___ @ 0x180405434 (wil--details--lambda_call__lambda_b34b1a0e0f93d6865fffe40b58850487___--_lambda_call__lambda_b34b.c)
 *     _lambda_b54eacfb88775a45f9bf3f20a89a8862_::operator() @ 0x180405574 (_lambda_b54eacfb88775a45f9bf3f20a89a8862_--operator().c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804157EC (-NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal.c)
 */

void __fastcall lambda_b34b1a0e0f93d6865fffe40b58850487_::operator()(__int64 a1)
{
  RTL_SRWLOCK *v2; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(*(_QWORD *)a1 + 280LL) + 208LL))(
    *(_QWORD *)(*(_QWORD *)a1 + 280LL),
    &v2);
  UwpWindowWrapperBase::NavigateInternal(*(_QWORD *)a1 + 8LL, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v2);
}

/*
 * XREFs of _lambda_37ce3c0886db64cd36632e83c34f1ff5_::operator() @ 0x1803FC224
 * Callers:
 *     wil::details::ScopeExitFn__lambda_37ce3c0886db64cd36632e83c34f1ff5___::_ScopeExitFn__lambda_37ce3c0886db64cd36632e83c34f1ff5___ @ 0x1803FC160 (wil--details--ScopeExitFn__lambda_37ce3c0886db64cd36632e83c34f1ff5___--_ScopeExitFn__lambda_37ce.c)
 *     _lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator() @ 0x1803FC320 (_lambda_b1ccbe0050df59b1c7585372b6aa23ae_--operator().c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18040B5CC (-NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_37ce3c0886db64cd36632e83c34f1ff5_::operator()(__int64 a1)
{
  RTL_SRWLOCK *v2; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(*(_QWORD *)a1 + 288LL) + 200LL))(
    *(_QWORD *)(*(_QWORD *)a1 + 288LL),
    &v2);
  WindowWrapperBase::NavigateInternal(*(_QWORD *)a1 + 8LL, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v2);
}

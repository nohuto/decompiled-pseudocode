/*
 * XREFs of ?SetImageLocation@UwpWindowWrapper@@UEAAJURect@Foundation@Windows@@@Z @ 0x180406250
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetImageLocationNoLock@UwpWindowWrapper@@AEAAXURect@Foundation@Windows@@@Z @ 0x180406308 (-SetImageLocationNoLock@UwpWindowWrapper@@AEAAXURect@Foundation@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapper::SetImageLocation(__int64 a1, __int128 *a2)
{
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 - 312);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4);
    v7 = *a2;
    UwpWindowWrapper::SetImageLocationNoLock(a1 - 592, &v7);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x36,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
                           v5);
  }
  return result;
}

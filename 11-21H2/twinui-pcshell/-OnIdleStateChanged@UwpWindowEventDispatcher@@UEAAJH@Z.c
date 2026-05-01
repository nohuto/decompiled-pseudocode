/*
 * XREFs of ?OnIdleStateChanged@UwpWindowEventDispatcher@@UEAAJH@Z @ 0x1803EEE40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall UwpWindowEventDispatcher::OnIdleStateChanged(RTL_SRWLOCK *this, int a2)
{
  __int64 **Ptr; // rbx
  __int64 **v5; // rdi
  __int64 v6; // rax
  const char *v7; // r9
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v12; // [rsp+40h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v12, this + 34);
  Ptr = (__int64 **)this[21].Ptr;
  v5 = (__int64 **)this[22].Ptr;
  try
  {
    while ( Ptr != v5 )
    {
      (*(void (__fastcall **)(__int64 *, __int64 *))(**Ptr + 264))(*Ptr, &v9);
      if ( (*(_BYTE *)(v9 + 16) & 2) == 0 )
      {
        v6 = **Ptr;
        if ( a2 )
          (*(void (**)(void))(v6 + 376))();
        else
          (*(void (**)(void))(v6 + 384))();
      }
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
      ++Ptr;
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1F2,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v7);
  }
  return result;
}

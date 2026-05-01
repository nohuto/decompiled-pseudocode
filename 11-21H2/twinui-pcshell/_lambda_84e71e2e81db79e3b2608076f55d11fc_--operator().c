/*
 * XREFs of _lambda_84e71e2e81db79e3b2608076f55d11fc_::operator() @ 0x18015DEC8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_84e71e2e81db79e3b2608076f55d11fc___::Run @ 0x18015DEA0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_84e71e2e81db79e3b2608076f55d11fc___--.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_84e71e2e81db79e3b2608076f55d11fc_::operator()(_DWORD **a1)
{
  _QWORD **v2; // r8
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rdx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v10; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)*a1 + 35) + 200LL))(*((_QWORD *)*a1 + 35), &v10);
  v2 = (_QWORD **)*a1;
  v3 = *a1[1];
  if ( (*a1)[65] != v3 )
  {
    *((_DWORD *)v2 + 65) = v3;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 != 1 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x8F1,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)0x8000FFFFLL,
            v8);
        v5 = 2LL;
      }
      else
      {
        v5 = 1LL;
      }
    }
    else
    {
      v5 = 0LL;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v2[13] + 96LL))(v2[13], v5);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x8F4,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v6,
        v8);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v10);
  return 0LL;
}

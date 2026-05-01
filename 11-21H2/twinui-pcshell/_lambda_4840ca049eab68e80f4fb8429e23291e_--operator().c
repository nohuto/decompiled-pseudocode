/*
 * XREFs of _lambda_4840ca049eab68e80f4fb8429e23291e_::operator() @ 0x180411B18
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_4840ca049eab68e80f4fb8429e23291e___::Run @ 0x180416780 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_4840ca049eab68e80f4fb8429e23291e___--.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_4840ca049eab68e80f4fb8429e23291e_::operator()(_DWORD **a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdx
  __int64 v4; // r8
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rdx
  int v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)*a1 + 34);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2);
    v3 = *a1;
    v4 = *((_QWORD *)*a1 + 13);
    if ( !v4 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x96D,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)0x8007139FLL,
        v11);
    v5 = *a1[1];
    if ( *((_DWORD *)v3 + 63) != v5 )
    {
      *((_DWORD *)v3 + 63) = v5;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 != 1 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x982,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
              (const char *)0x8000FFFFLL,
              v11);
          v7 = 2LL;
        }
        else
        {
          v7 = 1LL;
        }
      }
      else
      {
        v7 = 0LL;
      }
      v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 152LL))(v4, v7);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x985,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v8,
          v11);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x988,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v9);
  }
  return result;
}

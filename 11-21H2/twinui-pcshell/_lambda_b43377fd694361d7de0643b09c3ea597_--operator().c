/*
 * XREFs of _lambda_b43377fd694361d7de0643b09c3ea597_::operator() @ 0x180412818
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b43377fd694361d7de0643b09c3ea597___::Run @ 0x180416AA0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_b43377fd694361d7de0643b09c3ea597___--.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x180414714 (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ @ 0x180415D54 (-PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_b43377fd694361d7de0643b09c3ea597_::operator()(__int64 a1)
{
  int v2; // edi
  int v3; // ebx
  char v4; // r15
  __int64 v5; // rcx
  __int64 v6; // rcx
  HWND v7; // r14
  int v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = **(_DWORD **)a1;
  v3 = 4;
  if ( v2 == 5 )
  {
    v4 = 1;
    v2 = 4;
  }
  else
  {
    v4 = 0;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 272LL);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 208LL))(v5);
    v6 = *(_QWORD *)(a1 + 8);
    v7 = (HWND)*(int *)(v6 + 288);
    v8 = *(_DWORD *)(v6 + 472);
    if ( v2 != v8 )
    {
      if ( !v8 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v12);
        return 2147947423LL;
      }
      *(_DWORD *)(v6 + 472) = v2;
      if ( (*(_BYTE *)(v6 + 348) & 4) == 0 )
      {
        if ( (unsigned int)(v2 - 4) > 1 )
          v3 = 2;
        if ( v3 != ((*(unsigned __int16 *)(v6 + 244) >> 1) & 7) )
        {
          *(_WORD *)(v6 + 244) = *(_WORD *)(v6 + 244) & 0xFFF1 | (2 * v3);
          UwpWindowWrapperBase::CommitImportanceVector((UwpWindowWrapperBase *)v6);
          v6 = *(_QWORD *)(a1 + 8);
        }
      }
      UwpWindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((UwpWindowWrapperBase *)v6);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v12);
    if ( v4 && v7 )
      SetForegroundWindow(v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x358,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v9);
  }
  return result;
}

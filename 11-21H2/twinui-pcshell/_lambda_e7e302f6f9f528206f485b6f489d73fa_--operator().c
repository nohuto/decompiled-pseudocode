/*
 * XREFs of _lambda_e7e302f6f9f528206f485b6f489d73fa_::operator() @ 0x1804135E8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e7e302f6f9f528206f485b6f489d73fa___::Run @ 0x180416BF0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_e7e302f6f9f528206f485b6f489d73fa___--.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x180414714 (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_e7e302f6f9f528206f485b6f489d73fa_::operator()(int **a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // ecx
  __int16 v6; // dx
  char v7; // cl
  int *v8; // rcx
  int v9; // r8d
  bool v10; // zf
  __int16 v11; // r8
  const char *v12; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v15; // [rsp+30h] [rbp+8h]
  RTL_SRWLOCK *v16; // [rsp+40h] [rbp+18h] BYREF

  v2 = **a1;
  v3 = *((_QWORD *)a1[1] + 34);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 208LL))(v3);
    v4 = *a1[2];
    HIWORD(v15) = HIWORD(v2);
    if ( v4 == -1 )
    {
      v6 = v2;
    }
    else
    {
      v5 = a1[1][61];
      v6 = v5;
      if ( (v4 & 1) != 0 )
        v6 = ((unsigned __int8)v2 ^ (unsigned __int8)v5) & 1 ^ v5;
      if ( (v4 & 2) != 0 )
        v6 ^= ((unsigned __int8)v2 ^ (unsigned __int8)v6) & 0xE;
      if ( (v4 & 4) != 0 )
        v6 ^= ((unsigned __int8)v2 ^ (unsigned __int8)v6) & 0x30;
      if ( (v4 & 8) != 0 )
        v6 ^= ((unsigned __int8)v2 ^ (unsigned __int8)v6) & 0x40;
      if ( (v4 & 0x10) != 0 )
        v6 ^= (v2 ^ v6) & 0x80;
      if ( (v4 & 0x20) != 0 )
        v6 ^= (v2 ^ v6) & 0x100;
      if ( (v4 & 0x40) != 0 )
        v6 ^= (v2 ^ v6) & 0x200;
      if ( (v4 & 0x80) != 0 )
        v6 ^= (v2 ^ v6) & 0x400;
      if ( (v4 & 0x100) != 0 )
        v6 ^= (v2 ^ v6) & 0x800;
      LOBYTE(v5) = BYTE2(v5);
      if ( (v4 & 0x200) != 0 )
        LOBYTE(v5) = BYTE2(v2);
      BYTE2(v15) = v5;
      v7 = HIBYTE(v5);
      if ( (v4 & 0x400) != 0 )
        v7 = HIBYTE(v2);
      HIBYTE(v15) = v7;
    }
    v8 = a1[1];
    v9 = v8[87];
    if ( (v9 & 4) == 0 )
      v6 ^= (*((_WORD *)v8 + 122) ^ v6) & 0xF;
    v10 = (v9 & 8) == 0;
    v11 = *((_WORD *)v8 + 122);
    if ( v10 )
      v6 ^= ((unsigned __int8)v6 ^ (unsigned __int8)v11) & 0x31;
    LOWORD(v15) = (v6 ^ v11) & 0xC0 ^ v6;
    if ( v15 != v8[61] )
    {
      v8[61] = v15;
      UwpWindowWrapperBase::CommitImportanceVector((UwpWindowWrapperBase *)v8);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v16);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x95B,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v12);
  }
  return result;
}

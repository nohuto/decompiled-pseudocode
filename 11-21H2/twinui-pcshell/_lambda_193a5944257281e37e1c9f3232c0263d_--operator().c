/*
 * XREFs of _lambda_193a5944257281e37e1c9f3232c0263d_::operator() @ 0x1804113EC
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_193a5944257281e37e1c9f3232c0263d___::Run @ 0x180416690 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_193a5944257281e37e1c9f3232c0263d___--.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetDesiredPosition@UwpWindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18041702C (-SetDesiredPosition@UwpWindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_193a5944257281e37e1c9f3232c0263d_::operator()(int **a1)
{
  int *v2; // rdx
  int *v3; // rcx
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  float v7[4]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]
  __int64 v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  RTL_SRWLOCK *v13; // [rsp+70h] [rbp+8h] BYREF

  v2 = *a1;
  v7[0] = (float)(*a1)[4];
  v7[1] = (float)v2[5];
  v7[2] = (float)*v2;
  v7[3] = (float)v2[1];
  v3 = a1[1];
  v8 = *(_OWORD *)(v3 + 126);
  v9 = *(_OWORD *)(v3 + 130);
  v10 = *((_QWORD *)v3 + 67);
  v11 = v3[136];
  DWORD2(v9) = v2[8];
  v4 = *((_QWORD *)v3 + 34);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4);
    UwpWindowWrapperBase::SetDesiredPosition(a1[1], v7, 3LL, &v8);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v13);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v13) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x270,
                     (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                     v5);
    return (unsigned int)v13;
  }
  return result;
}

/*
 * XREFs of _lambda_e93f027ec168950fe55b7b43d7510c8a_::operator() @ 0x180401DBC
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e93f027ec168950fe55b7b43d7510c8a___::Run @ 0x180403300 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_e93f027ec168950fe55b7b43d7510c8a___--.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_e93f027ec168950fe55b7b43d7510c8a_::operator()(unsigned int **a1)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int *v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)(*a1 + 64);
  AcquireSRWLockShared(v2);
  v3 = *a1;
  v8 = v2;
  LOBYTE(v2) = *((_BYTE *)v3 + 248);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v8);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool))(**((_QWORD **)*a1 + 36) + 48LL))(
         *((_QWORD *)*a1 + 36),
         *a1[1],
         (_BYTE)v2 == 0);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C2,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}

/*
 * XREFs of _lambda_2324e29893a6d6f79c6a982ef2ca085a_::operator() @ 0x1800C2A48
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2324e29893a6d6f79c6a982ef2ca085a___::Run @ 0x1800C2A20 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_2324e29893a6d6f79c6a982ef2ca085a___--.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1800C2B08 (-SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_2324e29893a6d6f79c6a982ef2ca085a_::operator()(__int64 a1)
{
  int *v2; // rdx
  int v3; // eax
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  float v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = **(int ***)a1;
  v7[2] = (float)(v2[2] - *v2);
  v3 = v2[3] - v2[1];
  v7[3] = (float)v3;
  v7[0] = (float)*v2;
  v7[1] = (float)v2[1];
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 200LL))(v4);
    WindowWrapperBase::SetDesiredPosition(*(_QWORD *)(a1 + 8), v7, 3LL, **(_QWORD **)(a1 + 16));
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x157,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  return result;
}

/*
 * XREFs of ?SetPresenterSettings@WindowingEnvironmentConfig@@UEAAJW4PresenterTypeMask@@@Z @ 0x180155DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_224f9cb247002186ab59ad0be817f863___ @ 0x180155E40 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_224f9cb247002186ab59ad0be817f863.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentConfig::SetPresenterSettings(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  int v5; // eax
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  int *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  if ( !*(_QWORD *)(a1 + 32) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x6D,
      (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)0x8000FFFFLL,
      v7[0]);
  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(a1 + 48) + 48LL))(*(_QWORD *)(a1 + 48), &v10);
  if ( v11 != *(_DWORD *)(a1 + 64) )
  {
    *(_QWORD *)v7 = a1 - 32;
    v8 = &v11;
    CurrentThreadId = GetCurrentThreadId();
    v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_224f9cb247002186ab59ad0be817f863___(
           v4,
           CurrentThreadId,
           v7);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA3,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v5,
        v7[0]);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v10);
  return 0LL;
}

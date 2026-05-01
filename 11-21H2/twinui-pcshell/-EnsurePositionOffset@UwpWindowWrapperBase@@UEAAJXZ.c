/*
 * XREFs of ?EnsurePositionOffset@UwpWindowWrapperBase@@UEAAJXZ @ 0x180414890
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a6b32a0b6616cd8ad7d644a35fbdc2e5___ @ 0x1804101EC (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_a6b32a0b6616cd8ad7d644a35fbdc2e5.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::EnsurePositionOffset(UwpWindowWrapperBase *this)
{
  __int64 v2; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  UwpWindowWrapperBase *v10; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 34);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2);
    v10 = this;
    CurrentThreadId = GetCurrentThreadId();
    v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a6b32a0b6616cd8ad7d644a35fbdc2e5___(
           v4,
           CurrentThreadId,
           &v10);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x13C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v5,
        v8);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x140,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v6);
  }
  return result;
}

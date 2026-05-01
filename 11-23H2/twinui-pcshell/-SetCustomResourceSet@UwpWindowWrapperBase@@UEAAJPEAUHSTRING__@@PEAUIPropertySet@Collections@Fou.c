/*
 * XREFs of ?SetCustomResourceSet@UwpWindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804F1A50
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_0e2d807dd49ed02a1afb401992f06010___ @ 0x1801F6700 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_0e2d807dd49ed02a1afb401992f06010.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::SetCustomResourceSet(
        UwpWindowWrapperBase *this,
        HSTRING a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 v3; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v5; // ecx
  __int64 v6; // r8
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+30h] [rbp+8h]

  v3 = *((_QWORD *)this + 30);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 208LL))(v3);
    CurrentThreadId = GetCurrentThreadId();
    v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_0e2d807dd49ed02a1afb401992f06010___(
           v5,
           CurrentThreadId,
           v6);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9EA,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v7,
        v10);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9EE,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v8);
  }
  return result;
}

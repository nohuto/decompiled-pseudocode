/*
 * XREFs of ?get_ExecutionState@WindowWrapperBase@@UEAAJPEAW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804EE170
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6c87fc9395108b8b961fed0ed24add88___ @ 0x1804E44D0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_6c87fc9395108b8b961fed0ed24add88.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::get_ExecutionState(
        WindowWrapperBase *this,
        enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState *a2)
{
  __int64 v3; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v5; // ecx
  int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+8h]
  enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v3 = *((_QWORD *)this + 33);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 208LL))(v3);
    *(_DWORD *)v12 = 0;
    *(_QWORD *)v9 = (char *)this - 16;
    *(_QWORD *)&v9[2] = &v12;
    CurrentThreadId = GetCurrentThreadId();
    v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6c87fc9395108b8b961fed0ed24add88___(
           v5,
           CurrentThreadId,
           v9);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x50A,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v6,
        v9[0]);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x50E,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v7);
  }
  return result;
}

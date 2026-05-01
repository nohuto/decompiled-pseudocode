/*
 * XREFs of ?EnsurePositionOffset@WindowWrapperBase@@UEAAJXZ @ 0x1804E9870
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_b2fbff76c4d1ba4527abf8e3eed14512___ @ 0x1804E4A4C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_b2fbff76c4d1ba4527abf8e3eed14512.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::EnsurePositionOffset(WindowWrapperBase *this)
{
  __int64 v2; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WindowWrapperBase *v10; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp+10h]

  v2 = *((_QWORD *)this + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    v10 = this;
    CurrentThreadId = GetCurrentThreadId();
    v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_b2fbff76c4d1ba4527abf8e3eed14512___(
           v4,
           CurrentThreadId,
           &v10);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x149,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v5,
        v8);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x14D,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v6);
  }
  return result;
}

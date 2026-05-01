/*
 * XREFs of ?SetIsDismissed@WindowWrapper@@UEAAJE@Z @ 0x1802D8D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e8838413ede5bd20b829d342239a0037___ @ 0x1804DC728 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_e8838413ede5bd20b829d342239a0037.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapper::SetIsDismissed(WindowWrapper *this, char a2)
{
  __int64 v4; // rcx
  const char *v5; // r9
  DWORD CurrentThreadId; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v12; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+18h]

  v4 = *((_QWORD *)this - 39);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 200LL))(v4);
    if ( a2 != *((_BYTE *)this + 40) )
    {
      *((_BYTE *)this + 40) = a2;
      if ( *((_QWORD *)this - 38) )
      {
        if ( a2 )
        {
          v12 = (char *)this - 600;
          CurrentThreadId = GetCurrentThreadId();
          v8 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e8838413ede5bd20b829d342239a0037___(
                 v7,
                 CurrentThreadId,
                 &v12);
          if ( v8 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x4B,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
              (const char *)(unsigned int)v8,
              v10);
        }
      }
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x50,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
                           v5);
  }
  return result;
}

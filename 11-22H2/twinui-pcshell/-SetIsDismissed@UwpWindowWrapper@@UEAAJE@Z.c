/*
 * XREFs of ?SetIsDismissed@UwpWindowWrapper@@UEAAJE@Z @ 0x180058FB0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_72d77370fba09f560742b90c3fd0c03a___ @ 0x180059064 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_72d77370fba09f560742b90c3fd0c03a.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapper::SetIsDismissed(UwpWindowWrapper *this, char a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v10; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+18h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this - 41) + 208LL))(*((_QWORD *)this - 41), &SRWLock);
  if ( a2 != *((_BYTE *)this + 32) )
  {
    *((_BYTE *)this + 32) = a2;
    if ( *((_QWORD *)this - 40) )
    {
      if ( a2 )
      {
        v10 = (char *)this - 616;
        CurrentThreadId = GetCurrentThreadId();
        v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_72d77370fba09f560742b90c3fd0c03a___(
               v5,
               CurrentThreadId,
               &v10);
        if ( v6 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x50,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
            (const char *)(unsigned int)v6,
            v8);
      }
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}

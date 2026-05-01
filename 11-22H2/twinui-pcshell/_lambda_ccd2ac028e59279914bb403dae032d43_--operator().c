/*
 * XREFs of _lambda_ccd2ac028e59279914bb403dae032d43_::operator() @ 0x18006EC18
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ccd2ac028e59279914bb403dae032d43___::Run @ 0x18006EBF0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_ccd2ac028e59279914bb403dae032d43___--.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_ccd2ac028e59279914bb403dae032d43_::operator()(unsigned int **a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+30h] [rbp+8h]

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2);
    (*(void (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)*a1 + 184LL))(*a1, *a1[1]);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2C9,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v3);
  }
  return result;
}

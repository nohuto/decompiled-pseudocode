/*
 * XREFs of _lambda_da0bbed8df2cd0292d94ece74f15b3aa_::operator() @ 0x1804E858C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_da0bbed8df2cd0292d94ece74f15b3aa___::Run @ 0x1804EC020 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_da0bbed8df2cd0292d94ece74f15b3aa___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_da0bbed8df2cd0292d94ece74f15b3aa_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  __int64 v4; // rcx
  int v5; // eax
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+30h] [rbp+8h]

  ***(_DWORD ***)a1 = 0;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 112LL))(v4, **(_QWORD **)a1);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x411,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v5,
          v7);
    }
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x414,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return result;
}

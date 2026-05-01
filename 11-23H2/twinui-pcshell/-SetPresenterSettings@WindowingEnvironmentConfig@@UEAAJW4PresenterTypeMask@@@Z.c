/*
 * XREFs of ?SetPresenterSettings@WindowingEnvironmentConfig@@UEAAJW4PresenterTypeMask@@@Z @ 0x18018BAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_224f9cb247002186ab59ad0be817f863___ @ 0x18018BB5C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_224f9cb247002186ab59ad0be817f863.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  if ( !*(_QWORD *)(a1 + 32) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x6D,
      (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)0x8000FFFFLL,
      v7[0]);
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 48) + 48LL))(*(_QWORD *)(a1 + 48), &SRWLock);
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
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}

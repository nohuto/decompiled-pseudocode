/*
 * XREFs of ExpWnfDeleteScopeById @ 0x1407CCB2C
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140681B80 (MiDereferenceSessionFinal.c)
 *     ExWnfExitProcess @ 0x1407CC898 (ExWnfExitProcess.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExpWnfFindScopeInstance @ 0x1407149D8 (ExpWnfFindScopeInstance.c)
 *     ExpWnfFreeScopeInstance @ 0x1407CCC34 (ExpWnfFreeScopeInstance.c)
 */

int __fastcall ExpWnfDeleteScopeById(__int64 a1, const void *a2, unsigned int a3)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r14
  unsigned __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  _QWORD *ScopeInstance; // rax
  void *v13; // rdi
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = CurrentServerSiloGlobals[114];
  if ( v7 )
  {
    v8 = v7 + 24 * v6;
    v9 = (unsigned __int64 *)(v7 + 8 * (3 * v6 + 4));
    v10 = KeAbPreAcquire((__int64)v9, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (__int64)v9);
    if ( v11 )
      *(_BYTE *)(v11 + 18) = 1;
    ScopeInstance = ExpWnfFindScopeInstance((_QWORD **)(v8 + 40), a2, a3);
    v13 = ScopeInstance;
    if ( ScopeInstance )
    {
      v14 = ScopeInstance + 4;
      v15 = ScopeInstance[4];
      v16 = (_QWORD *)ScopeInstance[5];
      if ( *(_QWORD **)(v15 + 8) != v14 || (_QWORD *)*v16 != v14 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      *v14 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    LODWORD(CurrentServerSiloGlobals) = KeAbPostRelease((ULONG_PTR)v9);
    if ( v13 )
      LODWORD(CurrentServerSiloGlobals) = ExpWnfFreeScopeInstance(v13);
  }
  return (int)CurrentServerSiloGlobals;
}

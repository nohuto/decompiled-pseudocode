/*
 * XREFs of sub_1406AE49C @ 0x1406AE49C
 * Callers:
 *     sub_1406AE11C @ 0x1406AE11C (sub_1406AE11C.c)
 *     sub_1407DFE00 @ 0x1407DFE00 (sub_1407DFE00.c)
 *     sub_1409876B8 @ 0x1409876B8 (sub_1409876B8.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PsSetCurrentThreadPrefetching @ 0x1407DF730 (PsSetCurrentThreadPrefetching.c)
 */

char __fastcall sub_1406AE49C(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax
  int v5; // eax

  if ( *(_QWORD *)(a1 + 128) )
    sub_1402AFC00(a1);
  if ( *(_QWORD *)(a1 + 136) )
    sub_1402AFC00((ULONG_PTR)&qword_140C54300);
  if ( *(_QWORD *)a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C54650, 0LL);
    v3 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v4 = *(_QWORD **)(a1 + 8), *v4 != a1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C54650, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C54650);
    sub_1402AFC00((ULONG_PTR)&qword_140C54650);
    KeLeaveCriticalRegion();
  }
  v5 = *(_DWORD *)(a1 + 68);
  if ( (v5 & 1) != 0 )
  {
    sub_1402AD030(&stru_140C54640);
    *(_DWORD *)(a1 + 68) &= ~1u;
    v5 = *(_DWORD *)(a1 + 68);
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    PsSetCurrentThreadPrefetching((v5 & 2) != 0);
    v5 = *(_DWORD *)(a1 + 68);
  }
  if ( (v5 & 8) != 0 )
    LOBYTE(v5) = sub_1402F9540((__int64)KeGetCurrentThread());
  return v5;
}

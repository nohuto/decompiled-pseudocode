/*
 * XREFs of sub_1405E364C @ 0x1405E364C
 * Callers:
 *     sub_14074C1F8 @ 0x14074C1F8 (sub_14074C1F8.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402D2BD8 @ 0x1402D2BD8 (sub_1402D2BD8.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1402D3100 (ExWaitForRundownProtectionReleaseCacheAware.c)
 */

__int64 __fastcall sub_1405E364C(__int64 a1, __int64 a2)
{
  char v4; // bp
  char v5; // r14
  KIRQL v6; // al
  __int64 v7; // rsi
  int v8; // eax
  KIRQL v9; // al

  v4 = 0;
  v5 = 0;
  v6 = KeAcquireQueuedSpinLock(9uLL);
  v7 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v7 + 4) & 1) != 0 )
  {
    ++*(_DWORD *)(v7 + 28);
    v4 = 1;
  }
  KeReleaseQueuedSpinLock(9uLL, v6);
  if ( v4 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(a2 + 232));
    v8 = *(_DWORD *)(a2 + 112);
    if ( (v8 & 2) == 0 )
    {
      v5 = 1;
      *(_DWORD *)(a2 + 112) = v8 | 2;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a2 + 232));
    if ( v5 )
      ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 224));
    ExAcquireFastMutex((PFAST_MUTEX)(a2 + 232));
    v9 = KeAcquireQueuedSpinLock(9uLL);
    --*(_DWORD *)(v7 + 28);
    KeReleaseQueuedSpinLock(9uLL, v9);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 192) + 16LL) + 48LL) &= ~2u;
    if ( !sub_1402D2BD8((PFSRTL_ADVANCED_FCB_HEADER)a2, 1, 0) )
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a2 + 232));
  }
  return 3221225490LL;
}

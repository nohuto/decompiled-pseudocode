/*
 * XREFs of RawVerifyVolume @ 0x1405A6C5C
 * Callers:
 *     RawFileSystemControl @ 0x140791FA8 (RawFileSystemControl.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     KeAcquireQueuedSpinLock @ 0x1402A0760 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 *     RawInitiateDeleteVolume @ 0x140321E48 (RawInitiateDeleteVolume.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1403221B0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 */

__int64 __fastcall RawVerifyVolume(__int64 a1, __int64 a2)
{
  char v4; // si
  char v5; // bp
  KIRQL v6; // al
  __int64 v7; // rcx
  _DWORD *v8; // rbx
  int v9; // eax
  KIRQL v10; // al

  v4 = 0;
  v5 = 0;
  v6 = KeAcquireQueuedSpinLock(9uLL);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = (_DWORD *)(v7 + 28);
  if ( (*(_BYTE *)(v7 + 4) & 1) != 0 )
  {
    ++*v8;
    v4 = 1;
  }
  KeReleaseQueuedSpinLock(9uLL, v6);
  if ( v4 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(a2 + 232));
    v9 = *(_DWORD *)(a2 + 112);
    if ( (v9 & 2) == 0 )
    {
      v5 = 1;
      *(_DWORD *)(a2 + 112) = v9 | 2;
    }
    ExReleaseFastMutex((PFAST_MUTEX)(a2 + 232));
    if ( v5 )
      ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 224));
    ExAcquireFastMutex((PFAST_MUTEX)(a2 + 232));
    v10 = KeAcquireQueuedSpinLock(9uLL);
    --*v8;
    KeReleaseQueuedSpinLock(9uLL, v10);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 192) + 16LL) + 48LL) &= ~2u;
    if ( !RawInitiateDeleteVolume((PFSRTL_ADVANCED_FCB_HEADER)a2, 1, 0) )
      ExReleaseFastMutex((PFAST_MUTEX)(a2 + 232));
  }
  return 3221225490LL;
}

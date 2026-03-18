/*
 * XREFs of CcAcquireBcbLockAndVacbLock @ 0x140247840
 * Callers:
 *     CcExtendVacbArray @ 0x140247300 (CcExtendVacbArray.c)
 *     CcUnmapVacbArray @ 0x1402853B0 (CcUnmapVacbArray.c)
 *     CcDereferenceFileOffset @ 0x14053B060 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x14053B22C (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x14053B55C (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall CcAcquireBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  if ( a1 )
    ExAcquireFastMutex(a2 + 5);
  return ExAcquirePushLockExclusiveEx((ULONG_PTR)&a2[1].OldIrql, 0LL);
}

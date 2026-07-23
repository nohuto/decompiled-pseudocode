/*
 * XREFs of CcAcquireBcbLockAndVacbLock @ 0x1402A1300
 * Callers:
 *     CcUnmapVacbArray @ 0x14029F050 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x1402F2CD4 (CcExtendVacbArray.c)
 *     CcDereferenceFileOffset @ 0x140538434 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x140538600 (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x140538930 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CcAcquireBcbLockAndVacbLock(int a1, __int64 a2)
{
  if ( a1 )
    ExAcquireFastMutex((PFAST_MUTEX)(a2 + 288));
  ExAcquirePushLockExclusiveEx(a2 + 104, 0LL);
}

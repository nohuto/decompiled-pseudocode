/*
 * XREFs of CcAcquireBcbLockAndVacbLock @ 0x1402A1070
 * Callers:
 *     CcUnmapVacbArray @ 0x14029EDC0 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x1402F2A44 (CcExtendVacbArray.c)
 *     CcDereferenceFileOffset @ 0x140537EE4 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1405380B0 (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x1405383E0 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CcAcquireBcbLockAndVacbLock(int a1, __int64 a2)
{
  if ( a1 )
    ExAcquireFastMutex((PFAST_MUTEX)(a2 + 288));
  ExAcquirePushLockExclusiveEx(a2 + 104, 0LL);
}

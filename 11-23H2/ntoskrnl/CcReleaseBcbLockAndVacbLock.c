/*
 * XREFs of CcReleaseBcbLockAndVacbLock @ 0x1402A12C0
 * Callers:
 *     CcUnmapVacbArray @ 0x14029F050 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x14029F3A0 (CcGetVacbMiss.c)
 *     CcExtendVacbArray @ 0x1402F2CD4 (CcExtendVacbArray.c)
 *     CcDereferenceFileOffset @ 0x140538434 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x140538600 (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x140538930 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 */

void __fastcall CcReleaseBcbLockAndVacbLock(int a1, __int64 a2)
{
  ExReleasePushLockEx((__int64 *)(a2 + 104), 0LL);
  if ( a1 )
    ExReleaseFastMutex((PFAST_MUTEX)(a2 + 288));
}

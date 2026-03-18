/*
 * XREFs of CcReleaseBcbLockAndVacbLock @ 0x1402A1030
 * Callers:
 *     CcUnmapVacbArray @ 0x14029EDC0 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x14029F110 (CcGetVacbMiss.c)
 *     CcExtendVacbArray @ 0x1402F2A44 (CcExtendVacbArray.c)
 *     CcDereferenceFileOffset @ 0x140537EE4 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1405380B0 (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x1405383E0 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 */

void __fastcall CcReleaseBcbLockAndVacbLock(int a1, __int64 a2)
{
  ExReleasePushLockEx((__int64 *)(a2 + 104), 0LL);
  if ( a1 )
    ExReleaseFastMutex((PFAST_MUTEX)(a2 + 288));
}

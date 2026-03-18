/*
 * XREFs of ViUnlockContextPointer @ 0x140AC419C
 * Callers:
 *     VfInsertContext @ 0x1405CE440 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1405CE5D0 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ViUnlockContextPointer(volatile signed __int64 *a1)
{
  return _InterlockedExchangeAdd64(a1, 1uLL);
}

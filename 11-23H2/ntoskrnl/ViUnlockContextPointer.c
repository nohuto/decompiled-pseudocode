/*
 * XREFs of ViUnlockContextPointer @ 0x140AC418C
 * Callers:
 *     VfInsertContext @ 0x1405CE9B0 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1405CEB40 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ViUnlockContextPointer(volatile signed __int64 *a1)
{
  return _InterlockedExchangeAdd64(a1, 1uLL);
}

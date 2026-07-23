/*
 * XREFs of sub_140A83764 @ 0x140A83764
 * Callers:
 *     VfInsertContext @ 0x1405FE110 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1405FE2E0 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_140A83764(volatile signed __int64 *a1)
{
  return _InterlockedExchangeAdd64(a1, 1uLL);
}

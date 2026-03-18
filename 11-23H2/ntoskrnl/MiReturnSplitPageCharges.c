/*
 * XREFs of MiReturnSplitPageCharges @ 0x14037644C
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x14081C7A4 (MiInitializeDynamicBitmap.c)
 *     MiDeleteSparseRange @ 0x140A4311C (MiDeleteSparseRange.c)
 * Callees:
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiReturnSystemCharges @ 0x1403409F8 (MiReturnSystemCharges.c)
 */

unsigned __int64 __fastcall MiReturnSplitPageCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  MiReturnCommit(a1, a2);
  return MiReturnSystemCharges(a1, a2, a3);
}

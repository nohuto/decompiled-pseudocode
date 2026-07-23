/*
 * XREFs of MiReturnSplitPageCharges @ 0x1403765EC
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x14081CA74 (MiInitializeDynamicBitmap.c)
 *     MiDeleteSparseRange @ 0x140A433CC (MiDeleteSparseRange.c)
 * Callees:
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiReturnSystemCharges @ 0x140340C88 (MiReturnSystemCharges.c)
 */

unsigned __int64 __fastcall MiReturnSplitPageCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  MiReturnCommit(a1, a2);
  return MiReturnSystemCharges(a1, a2, a3);
}

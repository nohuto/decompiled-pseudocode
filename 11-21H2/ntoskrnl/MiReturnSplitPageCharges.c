/*
 * XREFs of MiReturnSplitPageCharges @ 0x1403C2A18
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x14082B1B4 (MiInitializeDynamicBitmap.c)
 *     MiDeleteSparseRange @ 0x14097E850 (MiDeleteSparseRange.c)
 * Callees:
 *     MiReturnSystemCharges @ 0x140229640 (MiReturnSystemCharges.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 */

unsigned __int64 __fastcall MiReturnSplitPageCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  MiReturnCommit(a1, a2);
  return MiReturnSystemCharges(a1, a2, a3);
}

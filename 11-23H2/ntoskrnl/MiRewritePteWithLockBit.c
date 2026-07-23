/*
 * XREFs of MiRewritePteWithLockBit @ 0x140376630
 * Callers:
 *     MiRevertValidPte @ 0x140278D10 (MiRevertValidPte.c)
 *     MiMakePteClean @ 0x140285B00 (MiMakePteClean.c)
 *     MiProtectAweRegion @ 0x14064B8F4 (MiProtectAweRegion.c)
 *     MiWriteAweClusterPte @ 0x14064CA58 (MiWriteAweClusterPte.c)
 *     MiDeleteLargeUserPde @ 0x1406508B4 (MiDeleteLargeUserPde.c)
 *     MiScrubLargeMappedPage @ 0x14065E98C (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x14081CD80 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402E5DC0 (MiUnlockNestedPageTableWritePte.c)
 */

__int64 __fastcall MiRewritePteWithLockBit(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  MiLockPageTableInternal(a1, (unsigned __int64)a2, 0, a4);
  return MiUnlockNestedPageTableWritePte(a1, a2, a3, 0);
}

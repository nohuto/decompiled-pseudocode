/*
 * XREFs of MiRewritePteWithLockBit @ 0x140376490
 * Callers:
 *     MiRevertValidPte @ 0x140278A80 (MiRevertValidPte.c)
 *     MiMakePteClean @ 0x140285870 (MiMakePteClean.c)
 *     MiProtectAweRegion @ 0x14064B3A4 (MiProtectAweRegion.c)
 *     MiWriteAweClusterPte @ 0x14064C508 (MiWriteAweClusterPte.c)
 *     MiDeleteLargeUserPde @ 0x140650364 (MiDeleteLargeUserPde.c)
 *     MiScrubLargeMappedPage @ 0x14065E43C (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x14081CAB0 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x140237700 (MiLockPageTableInternal.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402E5B30 (MiUnlockNestedPageTableWritePte.c)
 */

__int64 __fastcall MiRewritePteWithLockBit(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  MiLockPageTableInternal(a1, (unsigned __int64)a2, 0, a4);
  return MiUnlockNestedPageTableWritePte(a1, a2, a3, 0);
}

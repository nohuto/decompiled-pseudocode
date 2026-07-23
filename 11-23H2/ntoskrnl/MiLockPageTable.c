/*
 * XREFs of MiLockPageTable @ 0x140376690
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x14081CA74 (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x14081CD80 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiLockPageTable(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  return MiLockPageTableInternal(a1, a2, 0, a4);
}

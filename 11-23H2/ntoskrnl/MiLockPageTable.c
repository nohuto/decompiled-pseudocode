/*
 * XREFs of MiLockPageTable @ 0x1403764F0
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x14081C7A4 (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x14081CAB0 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x140237700 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiLockPageTable(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  return MiLockPageTableInternal(a1, a2, 0, a4);
}

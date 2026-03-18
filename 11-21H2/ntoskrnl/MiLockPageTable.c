/*
 * XREFs of MiLockPageTable @ 0x1403C2CB8
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x14082B1B4 (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x14082B4E0 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiLockPageTable(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  return MiLockPageTableInternal(a1, a2, 0LL, a4);
}

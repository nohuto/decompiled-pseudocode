/*
 * XREFs of MiUnlockPageTable @ 0x1403764D8
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x14081C7A4 (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x14081CAB0 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1403195C0 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiUnlockPageTable(__int64 a1, unsigned __int64 a2)
{
  MiUnlockPageTableInternal(a1, a2);
}

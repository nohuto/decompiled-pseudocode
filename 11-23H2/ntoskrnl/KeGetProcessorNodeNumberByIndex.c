/*
 * XREFs of KeGetProcessorNodeNumberByIndex @ 0x14030AFBC
 * Callers:
 *     PspRecheckThreadOptionalXStateFeatures @ 0x14073F758 (PspRecheckThreadOptionalXStateFeatures.c)
 *     PspAllocateThread @ 0x1407409D0 (PspAllocateThread.c)
 *     KeUserModeCallback @ 0x14076E880 (KeUserModeCallback.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1409AE908 (PspEnableProcessOptionalXStateFeatures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNodeNumberByIndex(int a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[a1] + 192) + 138LL);
}

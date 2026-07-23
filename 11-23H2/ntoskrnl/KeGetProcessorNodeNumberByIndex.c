/*
 * XREFs of KeGetProcessorNodeNumberByIndex @ 0x14030B24C
 * Callers:
 *     PspRecheckThreadOptionalXStateFeatures @ 0x14073F948 (PspRecheckThreadOptionalXStateFeatures.c)
 *     PspAllocateThread @ 0x140740BC0 (PspAllocateThread.c)
 *     KeUserModeCallback @ 0x14076EA70 (KeUserModeCallback.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1409AEB08 (PspEnableProcessOptionalXStateFeatures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNodeNumberByIndex(int a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[a1] + 192) + 138LL);
}

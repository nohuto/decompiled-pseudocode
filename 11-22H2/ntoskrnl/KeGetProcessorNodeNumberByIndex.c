/*
 * XREFs of KeGetProcessorNodeNumberByIndex @ 0x14030AE8C
 * Callers:
 *     PspRecheckThreadOptionalXStateFeatures @ 0x14073FC68 (PspRecheckThreadOptionalXStateFeatures.c)
 *     PspAllocateThread @ 0x140740EE0 (PspAllocateThread.c)
 *     KeUserModeCallback @ 0x14076ED90 (KeUserModeCallback.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1409AE9B8 (PspEnableProcessOptionalXStateFeatures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNodeNumberByIndex(int a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[a1] + 192) + 138LL);
}

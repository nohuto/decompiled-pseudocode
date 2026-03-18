/*
 * XREFs of MmGetMaximumUserAddress @ 0x14041A0E0
 * Callers:
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MmGetMaximumUserAddress()
{
  return KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[5];
}

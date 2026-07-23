/*
 * XREFs of VfMajorInit @ 0x140AD2FD4
 * Callers:
 *     ViIovPluginUnload @ 0x1405D2450 (ViIovPluginUnload.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void *VfMajorInit()
{
  return memset(&ViMajorVerifierRoutines, 0, 0xB40uLL);
}

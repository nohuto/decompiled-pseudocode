/*
 * XREFs of VfMajorInit @ 0x140AD2FE4
 * Callers:
 *     ViIovPluginUnload @ 0x1405D1EE0 (ViIovPluginUnload.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 */

void *VfMajorInit()
{
  return memset(&ViMajorVerifierRoutines, 0, 0xB40uLL);
}

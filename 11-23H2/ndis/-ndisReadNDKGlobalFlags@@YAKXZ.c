/*
 * XREFs of ?ndisReadNDKGlobalFlags@@YAKXZ @ 0x1C0138558
 * Callers:
 *     NdisReadConfiguration @ 0x1C001D370 (NdisReadConfiguration.c)
 * Callees:
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x1C009E000 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 */

__int64 ndisReadNDKGlobalFlags(void)
{
  return mem::ReadNoFence<unsigned long,void>(&dword_1C00F7590);
}

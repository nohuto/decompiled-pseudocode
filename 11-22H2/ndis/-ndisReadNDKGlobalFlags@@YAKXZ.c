/*
 * XREFs of ?ndisReadNDKGlobalFlags@@YAKXZ @ 0x1C0138578
 * Callers:
 *     NdisReadConfiguration @ 0x1C001D1E0 (NdisReadConfiguration.c)
 * Callees:
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x1C009DFE0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 */

__int64 ndisReadNDKGlobalFlags(void)
{
  return mem::ReadNoFence<unsigned long,void>(&dword_1C00F7590);
}

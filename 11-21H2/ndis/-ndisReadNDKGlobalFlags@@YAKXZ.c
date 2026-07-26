/*
 * XREFs of ?ndisReadNDKGlobalFlags@@YAKXZ @ 0x1C012C860
 * Callers:
 *     NdisReadConfiguration @ 0x1C001B4B0 (NdisReadConfiguration.c)
 * Callees:
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x1C0097FB8 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 */

__int64 ndisReadNDKGlobalFlags(void)
{
  return mem::ReadNoFence<unsigned long,void>(&dword_1C00EE540);
}

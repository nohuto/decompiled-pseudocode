/*
 * XREFs of ?ndisNDKGlobalDisabled@@YAEXZ @ 0x1C0138190
 * Callers:
 *     NdisReadConfiguration @ 0x1C001D1E0 (NdisReadConfiguration.c)
 * Callees:
 *     ??$ReadNoFence@EX@mem@@YAEPEDE@Z @ 0x1C009DFD4 (--$ReadNoFence@EX@mem@@YAEPEDE@Z.c)
 */

char ndisNDKGlobalDisabled(void)
{
  return mem::ReadNoFence<unsigned char,void>((__int64)&unk_1C00F7594);
}

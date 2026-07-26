/*
 * XREFs of ?ndisNDKGlobalDisabled@@YAEXZ @ 0x1C012C43C
 * Callers:
 *     NdisReadConfiguration @ 0x1C001B4B0 (NdisReadConfiguration.c)
 * Callees:
 *     ??$ReadNoFence@EX@mem@@YAEPEDE@Z @ 0x1C0097FAC (--$ReadNoFence@EX@mem@@YAEPEDE@Z.c)
 */

char ndisNDKGlobalDisabled(void)
{
  return mem::ReadNoFence<unsigned char,void>((__int64)&unk_1C00EE544);
}

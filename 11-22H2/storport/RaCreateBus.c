/*
 * XREFs of RaCreateBus @ 0x1C00A826C
 * Callers:
 *     RaidCreateAdapter @ 0x1C003A96C (RaidCreateAdapter.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

void *__fastcall RaCreateBus(_BYTE *a1)
{
  *a1 = 0;
  return memset_0(a1 + 8, 0, 0x40uLL);
}

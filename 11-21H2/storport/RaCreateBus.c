/*
 * XREFs of RaCreateBus @ 0x1C008DB9C
 * Callers:
 *     RaidCreateAdapter @ 0x1C0039384 (RaidCreateAdapter.c)
 * Callees:
 *     memset @ 0x1C0024340 (memset.c)
 */

void *__fastcall RaCreateBus(_BYTE *a1)
{
  *a1 = 0;
  return memset(a1 + 8, 0, 0x40uLL);
}

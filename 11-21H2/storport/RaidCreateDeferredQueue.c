/*
 * XREFs of RaidCreateDeferredQueue @ 0x1C003D018
 * Callers:
 *     RaidCreateAdapter @ 0x1C0039384 (RaidCreateAdapter.c)
 * Callees:
 *     memset @ 0x1C0024340 (memset.c)
 */

void __fastcall RaidCreateDeferredQueue(union _SLIST_HEADER *a1)
{
  memset(a1, 0, 0x80uLL);
  InitializeSListHead(a1 + 5);
  InitializeSListHead(a1 + 6);
}

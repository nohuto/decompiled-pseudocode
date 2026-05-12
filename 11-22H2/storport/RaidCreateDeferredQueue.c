/*
 * XREFs of RaidCreateDeferredQueue @ 0x1C003F1D0
 * Callers:
 *     RaidCreateAdapter @ 0x1C003A96C (RaidCreateAdapter.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

void __fastcall RaidCreateDeferredQueue(union _SLIST_HEADER *a1)
{
  memset_0(a1, 0, 0x80uLL);
  InitializeSListHead(a1 + 5);
  InitializeSListHead(a1 + 6);
}

/*
 * XREFs of sub_1403877FC @ 0x1403877FC
 * Callers:
 *     sub_14028D58C @ 0x14028D58C (sub_14028D58C.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 */

PSLIST_ENTRY __fastcall sub_1403877FC(_SLIST_ENTRY *a1, int a2)
{
  void *v3; // rcx

  v3 = &unk_140CE22C0;
  if ( !a2 )
    v3 = &unk_140CE2240;
  return sub_140203D88((__int64)v3, a1, (__int64)&unk_140CE2240);
}

/*
 * XREFs of sub_1C003F7A0 @ 0x1C003F7A0
 * Callers:
 *     sub_1C003AF2C @ 0x1C003AF2C (sub_1C003AF2C.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

void __fastcall sub_1C003F7A0(union _SLIST_HEADER *a1)
{
  memset_0(a1, 0, 0x80uLL);
  InitializeSListHead(a1 + 5);
  InitializeSListHead(a1 + 6);
}

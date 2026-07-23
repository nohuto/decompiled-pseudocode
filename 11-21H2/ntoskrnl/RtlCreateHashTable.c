/*
 * XREFs of RtlCreateHashTable @ 0x14021FAF0
 * Callers:
 *     sub_140695078 @ 0x140695078 (sub_140695078.c)
 *     sub_1406962A4 @ 0x1406962A4 (sub_1406962A4.c)
 *     sub_140848B8C @ 0x140848B8C (sub_140848B8C.c)
 * Callees:
 *     sub_14021FB10 @ 0x14021FB10 (sub_14021FB10.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return sub_14021FB10(HashTable, 128LL, Shift, Flags);
}

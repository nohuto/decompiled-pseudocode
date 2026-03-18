/*
 * XREFs of RtlEndWeakEnumerationHashTable @ 0x1403D7BA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndEnumerationHashTable @ 0x14036FCE0 (RtlEndEnumerationHashTable.c)
 */

void __stdcall RtlEndWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  RtlEndEnumerationHashTable(HashTable, Enumerator);
}

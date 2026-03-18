/*
 * XREFs of RtlInitWeakEnumerationHashTable @ 0x1403D7B80
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitEnumerationHashTable @ 0x14036FD30 (RtlInitEnumerationHashTable.c)
 */

BOOLEAN __stdcall RtlInitWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  return RtlInitEnumerationHashTable(HashTable, Enumerator);
}

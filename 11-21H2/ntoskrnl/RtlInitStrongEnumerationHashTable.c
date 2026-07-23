/*
 * XREFs of RtlInitStrongEnumerationHashTable @ 0x1403A09C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140206BC4 @ 0x140206BC4 (sub_140206BC4.c)
 */

BOOLEAN __cdecl RtlInitStrongEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  struct _LIST_ENTRY *v3; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  sub_140206BC4(HashTable, (__int64)&v5, 0);
  Enumerator->HashEntry.Linkage.Blink = 0LL;
  Enumerator->HashEntry.Signature = 0LL;
  *(_QWORD *)&Enumerator->BucketIndex = 0LL;
  v3 = (struct _LIST_ENTRY *)v5;
  Enumerator->ChainHead = (PLIST_ENTRY)v5;
  Enumerator->HashEntry.Linkage.Flink = v3;
  return 1;
}

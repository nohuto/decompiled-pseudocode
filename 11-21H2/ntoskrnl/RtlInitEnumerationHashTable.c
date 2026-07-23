/*
 * XREFs of RtlInitEnumerationHashTable @ 0x140206B50
 * Callers:
 *     sub_140206780 @ 0x140206780 (sub_140206780.c)
 *     RtlInitWeakEnumerationHashTable @ 0x14045F140 (RtlInitWeakEnumerationHashTable.c)
 *     sub_1409CEBD4 @ 0x1409CEBD4 (sub_1409CEBD4.c)
 *     sub_1409CF8D8 @ 0x1409CF8D8 (sub_1409CF8D8.c)
 * Callees:
 *     sub_140206BC4 @ 0x140206BC4 (sub_140206BC4.c)
 */

BOOLEAN __stdcall RtlInitEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  struct _LIST_ENTRY *v4; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  v7 = 0LL;
  sub_140206BC4(HashTable, &v7);
  v4 = (struct _LIST_ENTRY *)v7;
  ++HashTable->NumEnumerators;
  if ( v4->Flink == v4 )
    ++HashTable->NonEmptyBuckets;
  Flink = v4->Flink;
  if ( v4->Flink->Blink != v4 )
    __fastfail(3u);
  Enumerator->HashEntry.Linkage.Blink = v4;
  Enumerator->HashEntry.Linkage.Flink = Flink;
  Flink->Blink = &Enumerator->HashEntry.Linkage;
  v4->Flink = &Enumerator->HashEntry.Linkage;
  Enumerator->BucketIndex = 0;
  Enumerator->HashEntry.Signature = 0LL;
  Enumerator->ChainHead = v4;
  return 1;
}

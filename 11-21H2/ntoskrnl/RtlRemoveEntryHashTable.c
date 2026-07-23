/*
 * XREFs of RtlRemoveEntryHashTable @ 0x1402069A0
 * Callers:
 *     sub_140206780 @ 0x140206780 (sub_140206780.c)
 *     sub_140696EC8 @ 0x140696EC8 (sub_140696EC8.c)
 *     sub_1406AB17C @ 0x1406AB17C (sub_1406AB17C.c)
 *     sub_1409CE7E8 @ 0x1409CE7E8 (sub_1409CE7E8.c)
 *     sub_1409CED4C @ 0x1409CED4C (sub_1409CED4C.c)
 *     sub_1409CF8D8 @ 0x1409CF8D8 (sub_1409CF8D8.c)
 * Callees:
 *     sub_140206BC4 @ 0x140206BC4 (sub_140206BC4.c)
 */

BOOLEAN __stdcall RtlRemoveEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  struct _LIST_ENTRY *Flink; // r9
  struct _LIST_ENTRY *Blink; // rax

  --HashTable->NumEntries;
  Flink = Entry->Linkage.Flink;
  Blink = Entry->Linkage.Blink;
  if ( Entry->Linkage.Flink == Blink )
  {
    --HashTable->NonEmptyBuckets;
    Blink = Entry->Linkage.Blink;
    Flink = Entry->Linkage.Flink;
  }
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Flink->Blink != Entry || (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Blink->Flink != Entry )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  if ( Context && !Context->ChainHead )
    sub_140206BC4(HashTable, Context);
  return 1;
}

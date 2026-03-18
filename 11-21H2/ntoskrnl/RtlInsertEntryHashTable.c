/*
 * XREFs of RtlInsertEntryHashTable @ 0x140205950
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x140672348 (SepAddLuidToIndexEntry.c)
 *     SepGetCachedHandlesEntry @ 0x140696468 (SepGetCachedHandlesEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140696750 (SepGetLowBoxNumberEntry.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1409CED4C (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x1409CF26C (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlpPopulateContext @ 0x140206BC4 (RtlpPopulateContext.c)
 */

BOOLEAN __stdcall RtlInsertEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
        ULONG_PTR Signature,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  PRTL_DYNAMIC_HASH_TABLE_CONTEXT v4; // rsi
  unsigned int v7; // ecx
  unsigned int v8; // edx
  _QWORD *Directory; // r9
  __int128 v10; // rax
  _QWORD *i; // r9
  struct _LIST_ENTRY *PrevLinkage; // rax
  struct _LIST_ENTRY *Flink; // rcx
  ULONG_PTR v15; // rcx
  unsigned int v16; // ecx
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR v18; // [rsp+30h] [rbp-18h]

  Entry->Signature = Signature;
  ++HashTable->NumEntries;
  v18 = 0LL;
  v4 = Context;
  v17 = 0LL;
  if ( Context )
  {
    *(_QWORD *)&v10 = Context->ChainHead;
    if ( !Context->ChainHead )
    {
      RtlpPopulateContext(HashTable, Context);
      *(_QWORD *)&v10 = v4->ChainHead;
    }
  }
  else
  {
    v7 = (69069 * ((unsigned int)Signature >> HashTable->Shift) + 1) & 0xFFFF0000 | ((1103515245
                                                                                    * ((unsigned int)Signature >> HashTable->Shift)
                                                                                    + 12345) >> 16);
    v8 = v7 & HashTable->DivisorMask;
    if ( v8 < HashTable->Pivot )
      v8 = v7 & ((2 * HashTable->DivisorMask) | 1);
    Directory = HashTable->Directory;
    if ( HashTable->TableSize > 0x80 )
    {
      _BitScanReverse(&v16, v8 + 128);
      v8 = (v8 + 128) ^ (1 << v16);
      Directory = (_QWORD *)Directory[v16 - 7];
    }
    *(_QWORD *)&v10 = &Directory[2 * v8];
    *((_QWORD *)&v10 + 1) = v10;
    for ( i = *(_QWORD **)v10; i != (_QWORD *)v10; i = (_QWORD *)*i )
    {
      v15 = i[2];
      if ( v15 && v15 >= Signature )
        break;
      *((_QWORD *)&v10 + 1) = i;
    }
    v17 = v10;
    v4 = (PRTL_DYNAMIC_HASH_TABLE_CONTEXT)&v17;
    v18 = Signature;
  }
  if ( *(_QWORD *)v10 == (_QWORD)v10 )
    ++HashTable->NonEmptyBuckets;
  PrevLinkage = v4->PrevLinkage;
  Flink = PrevLinkage->Flink;
  if ( PrevLinkage->Flink->Blink != PrevLinkage )
    __fastfail(3u);
  Entry->Linkage.Blink = PrevLinkage;
  Entry->Linkage.Flink = Flink;
  Flink->Blink = &Entry->Linkage;
  PrevLinkage->Flink = &Entry->Linkage;
  return 1;
}

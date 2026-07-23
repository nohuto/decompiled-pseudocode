/*
 * XREFs of RtlStronglyEnumerateEntryHashTable @ 0x18008AF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlStronglyEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  unsigned int BucketIndex; // r8d
  unsigned int i; // r10d
  _QWORD *Directory; // r11
  unsigned int v7; // ecx
  unsigned int v8; // edx
  _LIST_ENTRY *ChainHead; // rcx
  _LIST_ENTRY *Flink; // rdx
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v11; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax

  BucketIndex = Enumerator->BucketIndex;
  if ( BucketIndex >= HashTable->TableSize )
    return 0LL;
  for ( i = BucketIndex + 128; ; ++i )
  {
    if ( BucketIndex == Enumerator->BucketIndex )
    {
      Flink = Enumerator->HashEntry.Linkage.Flink;
      ChainHead = Enumerator->ChainHead;
    }
    else
    {
      Directory = HashTable->Directory;
      if ( HashTable->TableSize <= 0x80 )
      {
        v8 = BucketIndex;
      }
      else
      {
        _BitScanReverse(&v7, i);
        v8 = i ^ (1 << v7);
        Directory = (_QWORD *)Directory[v7 - 7];
      }
      ChainHead = (_LIST_ENTRY *)&Directory[2 * v8];
      Flink = ChainHead;
    }
    v11 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)Flink->Flink;
    if ( v11 != (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ChainHead )
      break;
LABEL_8:
    if ( ++BucketIndex >= HashTable->TableSize )
      return 0LL;
  }
  while ( !v11->Signature )
  {
    v11 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)v11->Linkage.Flink;
    if ( v11 == (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ChainHead )
      goto LABEL_8;
  }
  Enumerator->BucketIndex = BucketIndex;
  result = v11;
  Enumerator->ChainHead = ChainHead;
  Enumerator->HashEntry.Linkage.Flink = &v11->Linkage;
  return result;
}

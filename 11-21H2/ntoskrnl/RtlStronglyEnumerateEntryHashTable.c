/*
 * XREFs of RtlStronglyEnumerateEntryHashTable @ 0x14039E030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlStronglyEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  ULONG BucketIndex; // ebx
  ULONG TableSize; // r11d
  ULONG v6; // r8d
  unsigned int i; // r10d
  _QWORD *Directory; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // r9d
  _LIST_ENTRY *ChainHead; // rax
  struct _LIST_ENTRY *Flink; // rdx
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v13; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax

  BucketIndex = Enumerator->BucketIndex;
  TableSize = HashTable->TableSize;
  v6 = BucketIndex;
  if ( BucketIndex >= TableSize )
    return 0LL;
  for ( i = BucketIndex + 128; ; ++i )
  {
    if ( v6 == BucketIndex )
    {
      Flink = Enumerator->HashEntry.Linkage.Flink;
      ChainHead = Enumerator->ChainHead;
    }
    else
    {
      Directory = HashTable->Directory;
      if ( TableSize <= 0x80 )
      {
        v10 = v6;
      }
      else
      {
        _BitScanReverse(&v9, i);
        v10 = i ^ (1 << v9);
        Directory = (_QWORD *)Directory[v9 - 7];
      }
      ChainHead = (_LIST_ENTRY *)&Directory[2 * v10];
      Flink = ChainHead;
    }
    v13 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)Flink->Flink;
    if ( v13 != (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ChainHead )
      break;
LABEL_8:
    if ( ++v6 >= TableSize )
      return 0LL;
  }
  while ( !v13->Signature )
  {
    v13 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)v13->Linkage.Flink;
    if ( v13 == (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ChainHead )
      goto LABEL_8;
  }
  Enumerator->ChainHead = ChainHead;
  result = v13;
  Enumerator->BucketIndex = v6;
  Enumerator->HashEntry.Linkage.Flink = &v13->Linkage;
  return result;
}

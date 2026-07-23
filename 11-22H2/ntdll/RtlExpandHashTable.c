/*
 * XREFs of RtlExpandHashTable @ 0x1800892B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlpGetChainHead @ 0x18006D3C4 (RtlpGetChainHead.c)
 *     RtlpAllocateSecondLevelDir @ 0x180076854 (RtlpAllocateSecondLevelDir.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

BOOLEAN __cdecl RtlExpandHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  unsigned int TableSize; // edx
  unsigned int v3; // ecx
  unsigned int v4; // esi
  __int64 v5; // rbp
  char v6; // cl
  void **v7; // rdi
  unsigned int Pivot; // edx
  _QWORD *ChainHead; // rax
  _QWORD *v10; // r10
  __int64 v11; // r9
  _QWORD *v12; // rdx
  unsigned int *p_DivisorMask; // r9
  _QWORD *v14; // r8
  _QWORD *v15; // r11
  int v16; // eax
  __int64 v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  unsigned int v20; // edx
  void *Directory; // r14
  _QWORD *Heap; // rax
  _QWORD *v24; // rdi
  PVOID SecondLevelDir; // rax
  char v26; // [rsp+40h] [rbp+8h]

  TableSize = HashTable->TableSize;
  if ( TableSize == 8388480 || HashTable->NumEnumerators )
    return 0;
  _BitScanReverse(&v3, TableSize + 128);
  v4 = (TableSize + 128) ^ (1 << v3);
  v5 = v3 - 7;
  v6 = v3 - 7;
  v26 = v6;
  if ( TableSize == 128 )
  {
    Directory = HashTable->Directory;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x80uLL);
    v24 = Heap;
    if ( !Heap )
      return 0;
    memset_thunk_772440563353939046(Heap + 1, 0, 0x78uLL);
    v6 = v26;
    *v24 = Directory;
    HashTable->Directory = v24;
  }
  v7 = (void **)HashTable->Directory;
  if ( !v7[v5] )
  {
    SecondLevelDir = RtlpAllocateSecondLevelDir(v6);
    if ( SecondLevelDir )
    {
      v7[v5] = SecondLevelDir;
      goto LABEL_5;
    }
    if ( HashTable->TableSize == 128 )
    {
      HashTable->Directory = *v7;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    }
    return 0;
  }
LABEL_5:
  Pivot = HashTable->Pivot;
  ++HashTable->TableSize;
  ChainHead = (_QWORD *)RtlpGetChainHead((__int64)HashTable, Pivot);
  ++HashTable->Pivot;
  v10 = ChainHead;
  v12 = (_QWORD *)(v11 + 16LL * v4);
  p_DivisorMask = &HashTable->DivisorMask;
  v12[1] = v12;
  *v12 = v12;
  v14 = (_QWORD *)*ChainHead;
  if ( (_QWORD *)*ChainHead != ChainHead )
  {
    v15 = ChainHead;
    do
    {
      v16 = *((_DWORD *)v14 + 4) >> HashTable->Shift;
      if ( (((2 * *p_DivisorMask) | 1) & ((69069 * v16 + 1) & 0xFFFF0000 | ((unsigned int)(1103515245 * v16 + 12345) >> 16))) == HashTable->TableSize - 1 )
      {
        v17 = *v14;
        if ( *(_QWORD **)(*v14 + 8LL) != v14
          || (v18 = (_QWORD *)v14[1], (_QWORD *)*v18 != v14)
          || (*v18 = v17, *(_QWORD *)(v17 + 8) = v18, v19 = (_QWORD *)v12[1], (_QWORD *)*v19 != v12) )
        {
          __fastfail(3u);
        }
        *v14 = v12;
        v14[1] = v19;
        *v19 = v14;
        v12[1] = v14;
      }
      else
      {
        v15 = v14;
      }
      v14 = (_QWORD *)*v15;
    }
    while ( (_QWORD *)*v15 != v10 );
    if ( (_QWORD *)*v12 != v12 )
      ++HashTable->NonEmptyBuckets;
    if ( (_QWORD *)*v10 == v10 )
      --HashTable->NonEmptyBuckets;
  }
  v20 = *p_DivisorMask;
  if ( HashTable->Pivot == *p_DivisorMask + 1 )
  {
    HashTable->Pivot = 0;
    *p_DivisorMask = (2 * v20) | 1;
  }
  return 1;
}

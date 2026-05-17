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

char __fastcall RtlExpandHashTable(__int64 a1)
{
  int v1; // edx
  unsigned int v3; // ecx
  unsigned int v4; // esi
  __int64 v5; // rbp
  char v6; // cl
  _QWORD *v7; // rdi
  unsigned int v8; // edx
  _QWORD *ChainHead; // rax
  _QWORD *v10; // r10
  __int64 v11; // r9
  _QWORD *v12; // rdx
  int *v13; // r9
  _QWORD *v14; // r8
  _QWORD *v15; // r11
  int v16; // eax
  __int64 v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  int v20; // edx
  __int64 v22; // r14
  __int64 Heap; // rax
  _QWORD *v24; // rdi
  __int64 SecondLevelDir; // rax
  char v26; // [rsp+40h] [rbp+8h]

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 8388480 || *(_DWORD *)(a1 + 28) )
    return 0;
  _BitScanReverse(&v3, v1 + 128);
  v4 = (v1 + 128) ^ (1 << v3);
  v5 = v3 - 7;
  v6 = v3 - 7;
  v26 = v6;
  if ( v1 == 128 )
  {
    v22 = *(_QWORD *)(a1 + 32);
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 128LL);
    v24 = (_QWORD *)Heap;
    if ( !Heap )
      return 0;
    memset_thunk_772440563353939046((void *)(Heap + 8), 0, 0x78uLL);
    v6 = v26;
    *v24 = v22;
    *(_QWORD *)(a1 + 32) = v24;
  }
  v7 = *(_QWORD **)(a1 + 32);
  if ( !v7[v5] )
  {
    SecondLevelDir = RtlpAllocateSecondLevelDir(v6);
    if ( SecondLevelDir )
    {
      v7[v5] = SecondLevelDir;
      goto LABEL_5;
    }
    if ( *(_DWORD *)(a1 + 8) == 128 )
    {
      *(_QWORD *)(a1 + 32) = *v7;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v7);
    }
    return 0;
  }
LABEL_5:
  v8 = *(_DWORD *)(a1 + 12);
  ++*(_DWORD *)(a1 + 8);
  ChainHead = (_QWORD *)RtlpGetChainHead(a1, v8);
  ++*(_DWORD *)(a1 + 12);
  v10 = ChainHead;
  v12 = (_QWORD *)(v11 + 16LL * v4);
  v13 = (int *)(a1 + 16);
  v12[1] = v12;
  *v12 = v12;
  v14 = (_QWORD *)*ChainHead;
  if ( (_QWORD *)*ChainHead != ChainHead )
  {
    v15 = ChainHead;
    do
    {
      v16 = *((_DWORD *)v14 + 4) >> *(_DWORD *)(a1 + 4);
      if ( (((2 * *v13) | 1) & ((69069 * v16 + 1) & 0xFFFF0000 | ((unsigned int)(1103515245 * v16 + 12345) >> 16))) == *(_DWORD *)(a1 + 8) - 1 )
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
      ++*(_DWORD *)(a1 + 24);
    if ( (_QWORD *)*v10 == v10 )
      --*(_DWORD *)(a1 + 24);
  }
  v20 = *v13;
  if ( *(_DWORD *)(a1 + 12) == *v13 + 1 )
  {
    *(_DWORD *)(a1 + 12) = 0;
    *v13 = (2 * v20) | 1;
  }
  return 1;
}

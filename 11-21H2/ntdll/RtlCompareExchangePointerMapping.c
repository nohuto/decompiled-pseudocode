/*
 * XREFs of RtlCompareExchangePointerMapping @ 0x180100FE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x18001AD20 (RtlRbInsertNodeEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlCompareExchangePointerMapping(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 Heap; // rdi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  bool v13; // r8
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rax

  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpPtrTreeLock, v9, v10, v11);
  v12 = RtlpPtrTree;
  if ( (qword_180177EC0 & 1) != 0 )
  {
    if ( !RtlpPtrTree )
    {
      v13 = 0;
      goto LABEL_8;
    }
    v12 = (unsigned __int64)&RtlpPtrTree ^ RtlpPtrTree;
  }
  v13 = 0;
  if ( v12 )
  {
    while ( 1 )
    {
      if ( a1 - *(_QWORD *)(v12 + 24) >= 0 )
      {
        if ( a1 - *(_QWORD *)(v12 + 24) <= 0 )
        {
          v17 = *(_QWORD *)(v12 + 32);
          if ( !a3 || v17 == *a3 )
            *(_QWORD *)(v12 + 32) = a2;
          v15 = 0x40000000;
LABEL_24:
          if ( a4 )
            *a4 = v17;
          goto LABEL_26;
        }
        v16 = *(_QWORD *)(v12 + 8);
        if ( !v16 || (v14 = v12 ^ v16) == 0 )
        {
          v13 = 1;
          break;
        }
      }
      else
      {
        if ( !*(_QWORD *)v12 )
          break;
        v14 = v12 ^ *(_QWORD *)v12;
        if ( !v14 )
          break;
      }
      v12 = v14;
    }
  }
LABEL_8:
  if ( Heap )
  {
    *(_QWORD *)(Heap + 24) = a1;
    *(_QWORD *)(Heap + 32) = a2;
    RtlRbInsertNodeEx((unsigned __int64 *)&RtlpPtrTree, v12, v13, Heap);
    if ( a3 )
      v17 = *a3;
    else
      v17 = 0LL;
    Heap = 0LL;
    v15 = 0;
    goto LABEL_24;
  }
  v15 = -1073741670;
LABEL_26:
  RtlReleaseSRWLockExclusive(&RtlpPtrTreeLock);
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v15;
}

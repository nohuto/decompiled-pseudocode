/*
 * XREFs of RtlCompareExchangePointerMapping @ 0x1801020D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x180039210 (RtlRbInsertNodeEx.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlCompareExchangePointerMapping(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 Heap; // rdi
  __int64 v9; // rdx
  bool v10; // r8
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rax

  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
  RtlAcquireSRWLockExclusive(&RtlpPtrTreeLock);
  v9 = RtlpPtrTree;
  if ( (qword_180184888 & 1) != 0 )
  {
    if ( !RtlpPtrTree )
    {
      v10 = 0;
      goto LABEL_8;
    }
    v9 = (unsigned __int64)&RtlpPtrTree ^ RtlpPtrTree;
  }
  v10 = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      if ( a1 - *(_QWORD *)(v9 + 24) >= 0 )
      {
        if ( a1 - *(_QWORD *)(v9 + 24) <= 0 )
        {
          v14 = *(_QWORD *)(v9 + 32);
          if ( !a3 || v14 == *a3 )
            *(_QWORD *)(v9 + 32) = a2;
          v12 = 0x40000000;
LABEL_24:
          if ( a4 )
            *a4 = v14;
          goto LABEL_26;
        }
        v13 = *(_QWORD *)(v9 + 8);
        if ( !v13 || (v11 = v9 ^ v13) == 0 )
        {
          v10 = 1;
          break;
        }
      }
      else
      {
        if ( !*(_QWORD *)v9 )
          break;
        v11 = v9 ^ *(_QWORD *)v9;
        if ( !v11 )
          break;
      }
      v9 = v11;
    }
  }
LABEL_8:
  if ( Heap )
  {
    *(_QWORD *)(Heap + 24) = a1;
    *(_QWORD *)(Heap + 32) = a2;
    RtlRbInsertNodeEx((unsigned __int64 *)&RtlpPtrTree, v9, v10, Heap);
    if ( a3 )
      v14 = *a3;
    else
      v14 = 0LL;
    Heap = 0LL;
    v12 = 0;
    goto LABEL_24;
  }
  v12 = -1073741670;
LABEL_26:
  RtlReleaseSRWLockExclusive(&RtlpPtrTreeLock);
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v12;
}

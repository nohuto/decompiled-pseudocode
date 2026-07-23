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

__int64 __fastcall RtlCompareExchangePointerMapping(
        _RTL_BALANCED_NODE *a1,
        _RTL_BALANCED_NODE *a2,
        _RTL_BALANCED_NODE **a3,
        _RTL_BALANCED_NODE **a4)
{
  _RTL_BALANCED_NODE *Heap; // rdi
  unsigned __int64 Root; // rdx
  BOOLEAN v10; // r8
  _RTL_BALANCED_NODE *v11; // rax
  unsigned int v12; // ebx
  unsigned __int64 v13; // rax
  _RTL_BALANCED_NODE *v14; // rax

  Heap = (_RTL_BALANCED_NODE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
  RtlAcquireSRWLockExclusive(&RtlpPtrTreeLock);
  Root = (unsigned __int64)RtlpPtrTree.Root;
  if ( (*(_BYTE *)&RtlpPtrTree.0 & 1) != 0 )
  {
    if ( !RtlpPtrTree.Root )
    {
      v10 = 0;
      goto LABEL_8;
    }
    Root = (unsigned __int64)&RtlpPtrTree ^ (unsigned __int64)RtlpPtrTree.Root;
  }
  v10 = 0;
  if ( Root )
  {
    while ( 1 )
    {
      if ( (__int64)a1 - *(_QWORD *)(Root + 24) >= 0 )
      {
        if ( (__int64)a1 - *(_QWORD *)(Root + 24) <= 0 )
        {
          v14 = *(_RTL_BALANCED_NODE **)(Root + 32);
          if ( !a3 || v14 == *a3 )
            *(_QWORD *)(Root + 32) = a2;
          v12 = 0x40000000;
LABEL_24:
          if ( a4 )
            *a4 = v14;
          goto LABEL_26;
        }
        v13 = *(_QWORD *)(Root + 8);
        if ( !v13 || (v11 = (_RTL_BALANCED_NODE *)(Root ^ v13)) == 0LL )
        {
          v10 = 1;
          break;
        }
      }
      else
      {
        if ( !*(_QWORD *)Root )
          break;
        v11 = (_RTL_BALANCED_NODE *)(Root ^ *(_QWORD *)Root);
        if ( !v11 )
          break;
      }
      Root = (unsigned __int64)v11;
    }
  }
LABEL_8:
  if ( Heap )
  {
    Heap[1].Children[0] = a1;
    Heap[1].Children[1] = a2;
    RtlRbInsertNodeEx(&RtlpPtrTree, (PRTL_BALANCED_NODE)Root, v10, Heap);
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
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v12;
}

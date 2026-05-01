/*
 * XREFs of ?HampReAllocateHeapZero@@YAJPEAPEAX_K@Z @ 0x18004C304
 * Callers:
 *     ?HampProcessSnapshotEnsureAdditionalCapacity@@YAJPEAU_HAM_PROCESS_SNAPSHOT@@K@Z @ 0x18004C264 (-HampProcessSnapshotEnsureAdditionalCapacity@@YAJPEAU_HAM_PROCESS_SNAPSHOT@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampReAllocateHeapZero(void **a1, SIZE_T a2)
{
  void *v2; // rsi
  unsigned int v4; // ebx
  PVOID ProcessHeap; // rcx
  PVOID v6; // rax
  PVOID Heap; // rax

  v2 = *a1;
  v4 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( v2 )
  {
    Heap = RtlReAllocateHeap(ProcessHeap, 8u, v2, a2);
    *a1 = Heap;
    if ( !Heap )
    {
      *a1 = v2;
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    v6 = RtlAllocateHeap(ProcessHeap, 8u, a2);
    *a1 = v6;
    return v6 == 0LL ? 0xC0000017 : 0;
  }
  return v4;
}

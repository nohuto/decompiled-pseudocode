/*
 * XREFs of RtlMultipleAllocateHeap @ 0x1800FED30
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 */

ULONG __cdecl RtlMultipleAllocateHeap(PVOID HeapHandle, ULONG Flags, SIZE_T Size, ULONG Count, PVOID *Array)
{
  ULONG v5; // ebx
  PVOID Heap; // rax

  v5 = 0;
  if ( !Count )
    return Count;
  while ( 1 )
  {
    Heap = RtlAllocateHeap(HeapHandle, Flags, Size);
    *Array = Heap;
    if ( !Heap )
      break;
    ++v5;
    ++Array;
    if ( v5 >= Count )
      return Count;
  }
  return v5;
}

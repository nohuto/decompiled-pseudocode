/*
 * XREFs of RtlStartRXact @ 0x180080D30
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlStartRXact(__int64 a1)
{
  _DWORD *Heap; // rax

  if ( *(_QWORD *)(a1 + 24) )
    return 3221225756LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x4000uLL);
  if ( !Heap )
    return 3221225495LL;
  *Heap = 0;
  Heap[1] = 0x4000;
  Heap[2] = 16;
  *(_QWORD *)(a1 + 24) = Heap;
  return 0LL;
}

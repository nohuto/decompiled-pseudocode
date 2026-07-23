/*
 * XREFs of LdrpInitializePatchData @ 0x180087598
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 */

__int64 LdrpInitializePatchData()
{
  _QWORD *Heap; // rax

  Heap = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 1572864) | 8, 0x18uLL);
  if ( !Heap )
    return 3221225495LL;
  *(_DWORD *)Heap = 1;
  Heap[1] = LdrLoadDll;
  Heap[2] = LdrGetProcedureAddress;
  NtCurrentPeb()->PatchLoaderData = Heap;
  return 0LL;
}

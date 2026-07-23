/*
 * XREFs of LdrpInitializePatchData @ 0x1800834B4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
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

/*
 * XREFs of HampConnectionObjectCreate @ 0x180001C08
 * Callers:
 *     HamCreateActivityForProcess @ 0x180001B20 (HamCreateActivityForProcess.c)
 *     HamCreateExtendedExecution @ 0x18001CAE0 (HamCreateExtendedExecution.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampConnectionObjectCreate(__int64 a1, __int64 a2, _QWORD *a3)
{
  _OWORD *Heap; // rax
  unsigned int v7; // r9d

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  v7 = 0;
  if ( Heap )
  {
    *Heap = 0LL;
    Heap[1] = 0LL;
    Heap[2] = 0LL;
    *((_QWORD *)Heap + 5) = a2 + 16;
    *((_QWORD *)Heap + 6) = -1LL;
    *((_QWORD *)Heap + 7) = a1;
    *a3 = Heap;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}

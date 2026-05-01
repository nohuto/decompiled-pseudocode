/*
 * XREFs of sub_1800026E8 @ 0x1800026E8
 * Callers:
 *     HamCreateActivityForProcess @ 0x180002590 (HamCreateActivityForProcess.c)
 *     HamAssociateActivityContext @ 0x180014660 (HamAssociateActivityContext.c)
 *     HamCreateExtendedExecution @ 0x18001D4B0 (HamCreateExtendedExecution.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800026E8(__int64 a1, __int64 a2, _QWORD *a3)
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
    *((_QWORD *)Heap + 5) = a2 + 24;
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

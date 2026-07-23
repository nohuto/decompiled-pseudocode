/*
 * XREFs of LdrpAddNodeServiceTag @ 0x18007AC00
 * Callers:
 *     LdrpPrepareModuleForExecution @ 0x18002DAD8 (LdrpPrepareModuleForExecution.c)
 *     LdrpAddNodeServiceTag @ 0x18007AC00 (LdrpAddNodeServiceTag.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     LdrpAddNodeServiceTag @ 0x18007AC00 (LdrpAddNodeServiceTag.c)
 */

void __fastcall LdrpAddNodeServiceTag(__int64 a1, int a2)
{
  __int64 *i; // rax
  _DWORD *Heap; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx

  if ( *(_DWORD *)(a1 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)a1 - 56LL) & 0x20) == 0 )
  {
    for ( i = *(__int64 **)(a1 + 16); i; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 2) == a2 )
        return;
    }
    Heap = RtlAllocateHeap(LdrpHeap, 0, 0x10uLL);
    if ( Heap )
    {
      Heap[2] = a2;
      *(_QWORD *)Heap = *(_QWORD *)(a1 + 16);
      v6 = *(_QWORD **)(a1 + 40);
      *(_QWORD *)(a1 + 16) = Heap;
      if ( v6 )
      {
        v7 = v6;
        do
        {
          v7 = (_QWORD *)*v7;
          LdrpAddNodeServiceTag(v7[1]);
        }
        while ( v7 != v6 );
      }
    }
  }
}

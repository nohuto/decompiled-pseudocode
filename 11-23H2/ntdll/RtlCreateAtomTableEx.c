/*
 * XREFs of RtlCreateAtomTableEx @ 0x1800032A0
 * Callers:
 *     RtlCreateAtomTable @ 0x180003290 (RtlCreateAtomTable.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateAtomTableEx(unsigned int a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v5; // ebp
  _DWORD *Heap; // rax
  _DWORD *v7; // rdi

  v3 = 0;
  if ( *a3 )
    return v3;
  v5 = 37;
  if ( a1 > 1 )
    v5 = a1;
  if ( is_mul_ok(0x18uLL, (unsigned int)(v5 - 1))
    && 24 * (unsigned __int64)(unsigned int)(v5 - 1) + 80 >= 24 * (unsigned __int64)(unsigned int)(v5 - 1) )
  {
    Heap = RtlAllocateHeap(
             NtCurrentPeb()->ProcessHeap,
             (0x18 * (unsigned __int128)(unsigned int)(v5 - 1)) >> 64,
             24LL * (unsigned int)(v5 - 1) + 80);
    v7 = Heap;
    if ( Heap )
    {
      memset_thunk_772440563353939046(Heap, 0, 24LL * (unsigned int)(v5 - 1) + 80);
      v7[16] = v5;
      *((_OWORD *)v7 + 1) = 0LL;
      *((_OWORD *)v7 + 2) = 0LL;
      *((_OWORD *)v7 + 3) = 0LL;
      v7[4] = 0x3FFF;
      v7[5] = 16;
      v7[6] = 1;
      *((_QWORD *)v7 + 1) = 0LL;
      *v7 = 1836020801;
      v7[1] = 1;
      *a3 = v7;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
    return v3;
  }
  return 3221225621LL;
}

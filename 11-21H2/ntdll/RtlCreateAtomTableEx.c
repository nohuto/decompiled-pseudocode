/*
 * XREFs of RtlCreateAtomTableEx @ 0x180062170
 * Callers:
 *     RtlCreateAtomTable @ 0x180062160 (RtlCreateAtomTable.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall RtlCreateAtomTableEx(unsigned int a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  int v5; // ebp
  _DWORD *Heap; // rax
  _DWORD *v7; // rbx

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
      memset(Heap, 0, 24LL * (unsigned int)(v5 - 1) + 80);
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

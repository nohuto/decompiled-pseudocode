/*
 * XREFs of ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAKPEAU1@@Z @ 0x180074958
 * Callers:
 *     RtlpFlsAlloc @ 0x180074830 (RtlpFlsAlloc.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 */

__int64 __fastcall RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotAllocate(unsigned int **a1)
{
  int v2; // edi
  unsigned int *v3; // r8
  unsigned int v4; // ebx
  unsigned int i; // edx
  unsigned int v6; // ebx
  _OWORD *Heap; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rdx

  v2 = 4;
  while ( 1 )
  {
    v3 = *a1;
    v4 = 1 << v2;
    if ( !*a1 )
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 24 * v4 + 8);
      v3 = (unsigned int *)Heap;
      if ( !Heap )
        return (unsigned int)-1;
      *Heap = 0LL;
      Heap[1] = 0LL;
      if ( v4 )
      {
        v9 = (_QWORD *)Heap + 3;
        v10 = v4;
        do
        {
          *(v9 - 2) = 0LL;
          *(v9 - 1) = 0LL;
          *v9 = 0LL;
          v9 += 3;
          --v10;
        }
        while ( v10 );
      }
      *a1 = (unsigned int *)Heap;
    }
    if ( *v3 < v4 )
      break;
    ++v2;
    ++a1;
    if ( (unsigned int)(v2 - 4) >= 8 )
      return (unsigned int)-1;
  }
  for ( i = *v3; *(_QWORD *)&v3[6 * i + 4]; i = (v4 - 1) & (i + 1) )
    ;
  v6 = i | v4;
  ++*v3;
  return v6;
}

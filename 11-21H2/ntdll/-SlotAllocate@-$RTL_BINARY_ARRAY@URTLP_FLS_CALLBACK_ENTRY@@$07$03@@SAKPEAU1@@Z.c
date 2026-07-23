/*
 * XREFs of ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAKPEAU1@@Z @ 0x18007B588
 * Callers:
 *     RtlpFlsAlloc @ 0x18007B460 (RtlpFlsAlloc.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 */

__int64 __fastcall RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotAllocate(_DWORD **a1)
{
  int v2; // ebx
  _DWORD *v3; // r8
  int v4; // r9d
  unsigned int i; // edx
  unsigned int v6; // edx
  unsigned int v8; // esi
  _OWORD *Heap; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx

  v2 = 4;
  while ( 1 )
  {
    v3 = *a1;
    if ( !*a1 )
    {
      v8 = 1 << v2;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)((24 << v2) + 8));
      v3 = Heap;
      if ( Heap )
      {
        *Heap = 0LL;
        Heap[1] = 0LL;
        if ( v8 )
        {
          v10 = (_QWORD *)Heap + 3;
          v11 = v8;
          do
          {
            *(v10 - 2) = 0LL;
            *(v10 - 1) = 0LL;
            *v10 = 0LL;
            v10 += 3;
            --v11;
          }
          while ( v11 );
        }
        *a1 = v3;
      }
      if ( !v3 )
        return (unsigned int)-1;
    }
    v4 = 1 << v2;
    if ( *v3 < (unsigned int)(1 << v2) )
      break;
    ++v2;
    ++a1;
    if ( (unsigned int)(v2 - 4) >= 8 )
      return (unsigned int)-1;
  }
  for ( i = *v3; *(_QWORD *)&v3[6 * i + 4]; i = (v4 - 1) & (i + 1) )
    ;
  v6 = v4 | i;
  ++*v3;
  return v6;
}

/*
 * XREFs of ?PiiFilterExecute_Ge@@YAJPEAG_K1PEBG@Z @ 0x180284D78
 * Callers:
 *     PiiFilterExecute @ 0x1807384B4 (PiiFilterExecute.c)
 * Callees:
 *     ?PiiFilterEmbeddedPathsExecute_Ge@@YAJPEAG_K1PEBG@Z @ 0x180284950 (-PiiFilterEmbeddedPathsExecute_Ge@@YAJPEAG_K1PEBG@Z.c)
 *     AslFree @ 0x180738B18 (AslFree.c)
 *     AslPathClean @ 0x180738B7C (AslPathClean.c)
 */

__int64 __fastcall PiiFilterExecute_Ge(unsigned __int16 *a1, __int64 a2, unsigned __int64 *a3, unsigned __int16 *a4)
{
  unsigned __int16 *Heap; // rax
  const unsigned __int16 *v8; // rsi
  int v9; // ebx
  __int64 v10; // rdx
  unsigned __int16 v11; // cx
  int v12; // edx

  Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
  v8 = Heap;
  if ( !Heap )
  {
    v9 = -1073741801;
LABEL_14:
    *a1 = 0;
    return (unsigned int)v9;
  }
  v9 = AslPathClean(a4, Heap);
  if ( v9 >= 0 )
  {
    v9 = PiiFilterEmbeddedPathsExecute_Ge(a1, v10, a3, v8);
    if ( v9 >= 0 )
    {
      if ( ((unsigned __int16)(*a1 - 97) <= 0x19u || (unsigned __int16)(*a1 - 65) <= 0x19u) && a1[1] == 58 )
      {
        v11 = a1[2];
        v12 = 0;
        while ( v11 )
        {
          a1[v12++] = v11;
          v11 = a1[v12 + 2];
        }
        a1[v12] = 0;
      }
      v9 = 0;
    }
  }
  AslFree(NtCurrentPeb()->ProcessHeap, v8);
  if ( v9 )
    goto LABEL_14;
  return (unsigned int)v9;
}

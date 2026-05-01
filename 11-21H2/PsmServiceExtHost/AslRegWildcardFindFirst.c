/*
 * XREFs of AslRegWildcardFindFirst @ 0x1800A554C
 * Callers:
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x18009B05C (SdbpCheckMatchingWildcardRegistryEntry.c)
 * Callees:
 *     AslStringDuplicate @ 0x18009E710 (AslStringDuplicate.c)
 *     AslRegWildcardFindClose @ 0x1800A548C (AslRegWildcardFindClose.c)
 *     AslRegWildcardFindNext @ 0x1800A5624 (AslRegWildcardFindNext.c)
 *     AslpParsePattern @ 0x1800A573C (AslpParsePattern.c)
 */

__int64 __fastcall AslRegWildcardFindFirst(__int64 a1, PVOID **a2, __int64 a3)
{
  PVOID *Heap; // rax
  PVOID *v7; // rbx
  int Next; // edi

  *a2 = 0LL;
  Heap = (PVOID *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
  v7 = Heap;
  if ( !Heap )
    return 3221225495LL;
  Heap[2] = 0LL;
  Heap[3] = 0LL;
  Heap[1] = Heap;
  *Heap = Heap;
  Next = AslStringDuplicate(Heap + 3, a3);
  if ( Next < 0
    || (Next = AslpParsePattern(v7[3], v7), Next < 0)
    || (v7[2] = *v7, Next = AslRegWildcardFindNext(a1, v7), Next < 0) )
  {
    AslRegWildcardFindClose(v7);
  }
  else
  {
    *a2 = v7;
  }
  return (unsigned int)Next;
}

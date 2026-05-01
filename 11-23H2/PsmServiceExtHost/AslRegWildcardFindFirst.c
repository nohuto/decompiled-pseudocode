/*
 * XREFs of AslRegWildcardFindFirst @ 0x18009EF24
 * Callers:
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x180095DBC (SdbpCheckMatchingWildcardRegistryEntry.c)
 * Callees:
 *     AslStringDuplicate @ 0x180098DC8 (AslStringDuplicate.c)
 *     AslRegWildcardFindClose @ 0x18009EE64 (AslRegWildcardFindClose.c)
 *     AslRegWildcardFindNext @ 0x18009EFFC (AslRegWildcardFindNext.c)
 *     AslpParsePattern @ 0x18009F118 (AslpParsePattern.c)
 */

__int64 __fastcall AslRegWildcardFindFirst(__int64 a1, PVOID **a2, unsigned __int16 *a3)
{
  unsigned __int16 **Heap; // rax
  PVOID *v7; // rbx
  int Next; // edi

  *a2 = 0LL;
  Heap = (unsigned __int16 **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
  v7 = (PVOID *)Heap;
  if ( !Heap )
    return 3221225495LL;
  Heap[2] = 0LL;
  Heap[3] = 0LL;
  Heap[1] = (unsigned __int16 *)Heap;
  *Heap = (unsigned __int16 *)Heap;
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

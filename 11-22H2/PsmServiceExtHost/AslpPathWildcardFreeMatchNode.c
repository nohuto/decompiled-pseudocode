/*
 * XREFs of AslpPathWildcardFreeMatchNode @ 0x18009F85C
 * Callers:
 *     AslPathWildcardFindFirst @ 0x18009DFEC (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x18009E5BC (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x18009F534 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x18009F75C (AslpPathWildcardFreeFindContext.c)
 * Callees:
 *     <none>
 */

char __fastcall AslpPathWildcardFreeMatchNode(_QWORD *a1)
{
  void *v2; // rcx
  char result; // al
  void *v4; // r8

  if ( a1 )
  {
    v2 = (void *)a1[3];
    if ( v2 )
    {
      result = ZwClose(v2);
      a1[3] = 0LL;
    }
    v4 = (void *)a1[1];
    if ( v4 )
    {
      result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
      a1[1] = 0LL;
    }
    a1[2] = 0LL;
  }
  return result;
}

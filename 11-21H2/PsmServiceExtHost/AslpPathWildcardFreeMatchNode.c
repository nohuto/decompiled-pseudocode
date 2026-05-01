/*
 * XREFs of AslpPathWildcardFreeMatchNode @ 0x1800A5B10
 * Callers:
 *     AslPathWildcardFindFirst @ 0x1800A42F4 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1800A48BC (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1800A57E8 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x1800A5A10 (AslpPathWildcardFreeFindContext.c)
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

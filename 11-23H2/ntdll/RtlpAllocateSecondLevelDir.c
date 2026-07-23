/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x180076EC4
 * Callers:
 *     RtlpCreateHashTable @ 0x180076D48 (RtlpCreateHashTable.c)
 *     RtlExpandHashTable @ 0x180089AB0 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(16 << (a1 + 7)));
}

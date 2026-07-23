/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x180076854
 * Callers:
 *     RtlpCreateHashTable @ 0x1800766D8 (RtlpCreateHashTable.c)
 *     RtlExpandHashTable @ 0x1800892B0 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(16 << (a1 + 7)));
}

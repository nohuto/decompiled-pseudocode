/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x18007ECC4
 * Callers:
 *     RtlpCreateHashTable @ 0x18007EB28 (RtlpCreateHashTable.c)
 *     RtlExpandHashTable @ 0x180090200 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(16 << (a1 + 7)));
}

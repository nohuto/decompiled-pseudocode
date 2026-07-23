/*
 * XREFs of RtlpAllocateEnvironmentHashTable @ 0x18000DADC
 * Callers:
 *     RtlpSetupEnvironmentHashTable @ 0x18000DA78 (RtlpSetupEnvironmentHashTable.c)
 *     RtlQueryEnvironmentVariable @ 0x180036CE0 (RtlQueryEnvironmentVariable.c)
 *     RtlpCreateAndInsertEnvironmentHashTableEntry @ 0x1800D92C8 (RtlpCreateAndInsertEnvironmentHashTableEntry.c)
 *     RtlpInsertEnvironmentHashTableEntry @ 0x1800D93B0 (RtlpInsertEnvironmentHashTableEntry.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateEnvironmentHashTable(SIZE_T a1)
{
  if ( NtCurrentPeb()->ProcessHeap )
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, a1);
  else
    return 0LL;
}

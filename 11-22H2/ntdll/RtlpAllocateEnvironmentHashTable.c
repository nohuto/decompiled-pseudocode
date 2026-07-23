/*
 * XREFs of RtlpAllocateEnvironmentHashTable @ 0x180058BC0
 * Callers:
 *     RtlpSetupEnvironmentHashTable @ 0x18005886C (RtlpSetupEnvironmentHashTable.c)
 *     RtlpCreateAndInsertEnvironmentHashTableEntry @ 0x180058AF0 (RtlpCreateAndInsertEnvironmentHashTableEntry.c)
 *     RtlpInsertEnvironmentHashTableEntry @ 0x180058BF4 (RtlpInsertEnvironmentHashTableEntry.c)
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

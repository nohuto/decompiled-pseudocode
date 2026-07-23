/*
 * XREFs of RtlpFreeEnvironmentHashTable @ 0x1800896A4
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x180036CE0 (RtlQueryEnvironmentVariable.c)
 *     RtlpInsertEnvironmentHashTableEntry @ 0x1800D93B0 (RtlpInsertEnvironmentHashTableEntry.c)
 * Callees:
 *     <none>
 */

LOGICAL __fastcall RtlpFreeEnvironmentHashTable(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}

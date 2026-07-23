/*
 * XREFs of RtlpFreeEnvironmentHashTable @ 0x18008C1DC
 * Callers:
 *     RtlpInsertEnvironmentHashTableEntry @ 0x180058A94 (RtlpInsertEnvironmentHashTableEntry.c)
 * Callees:
 *     <none>
 */

LOGICAL __fastcall RtlpFreeEnvironmentHashTable(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}

/*
 * XREFs of RtlpFreeEnvironmentHashTable @ 0x18008B9DC
 * Callers:
 *     RtlpInsertEnvironmentHashTableEntry @ 0x180058BF4 (RtlpInsertEnvironmentHashTableEntry.c)
 * Callees:
 *     <none>
 */

LOGICAL __fastcall RtlpFreeEnvironmentHashTable(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}

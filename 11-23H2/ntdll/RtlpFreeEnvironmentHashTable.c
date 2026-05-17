/*
 * XREFs of RtlpFreeEnvironmentHashTable @ 0x18008C1DC
 * Callers:
 *     RtlpInsertEnvironmentHashTableEntry @ 0x180058A94 (RtlpInsertEnvironmentHashTableEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFreeEnvironmentHashTable(__int64 a1)
{
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}

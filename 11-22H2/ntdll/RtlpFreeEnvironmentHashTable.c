/*
 * XREFs of RtlpFreeEnvironmentHashTable @ 0x18008B9DC
 * Callers:
 *     RtlpInsertEnvironmentHashTableEntry @ 0x180058BF4 (RtlpInsertEnvironmentHashTableEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFreeEnvironmentHashTable(__int64 a1)
{
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}

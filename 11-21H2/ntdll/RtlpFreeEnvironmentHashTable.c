/*
 * XREFs of RtlpFreeEnvironmentHashTable @ 0x1800896A4
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x180036CE0 (RtlQueryEnvironmentVariable.c)
 *     RtlpInsertEnvironmentHashTableEntry @ 0x1800D93B0 (RtlpInsertEnvironmentHashTableEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFreeEnvironmentHashTable(__int64 a1)
{
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}

/*
 * XREFs of RtlTraceDatabaseUnlock @ 0x1405B1590
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseReleaseLock @ 0x1405B18B8 (RtlpTraceDatabaseReleaseLock.c)
 */

__int64 __fastcall RtlTraceDatabaseUnlock(__int64 a1)
{
  return RtlpTraceDatabaseReleaseLock(a1);
}

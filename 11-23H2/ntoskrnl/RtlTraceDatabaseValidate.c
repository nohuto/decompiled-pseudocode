/*
 * XREFs of RtlTraceDatabaseValidate @ 0x1405B15B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x1405B15D8 (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x1405B18B8 (RtlpTraceDatabaseReleaseLock.c)
 */

char __fastcall RtlTraceDatabaseValidate(__int64 a1)
{
  RtlpTraceDatabaseAcquireLock();
  RtlpTraceDatabaseReleaseLock(a1);
  return 1;
}

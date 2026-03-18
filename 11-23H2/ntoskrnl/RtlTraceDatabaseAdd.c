/*
 * XREFs of RtlTraceDatabaseAdd @ 0x1405B1220
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x1405B15D8 (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1405B1640 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x1405B18B8 (RtlpTraceDatabaseReleaseLock.c)
 */

char __fastcall RtlTraceDatabaseAdd(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  RtlpTraceDatabaseAcquireLock();
  LOBYTE(a4) = RtlpTraceDatabaseInternalAdd(a1, a2, a3, a4);
  RtlpTraceDatabaseReleaseLock(a1);
  return a4;
}

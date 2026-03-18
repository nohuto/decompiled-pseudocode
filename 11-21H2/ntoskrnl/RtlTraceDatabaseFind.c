/*
 * XREFs of RtlTraceDatabaseFind @ 0x1405EE110
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x1405EE200 (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseInternalFind @ 0x1405EE42C (RtlpTraceDatabaseInternalFind.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x1405EE4E0 (RtlpTraceDatabaseReleaseLock.c)
 */

char __fastcall RtlTraceDatabaseFind(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v8; // bl

  RtlpTraceDatabaseAcquireLock();
  v8 = RtlpTraceDatabaseInternalFind(a1, a2, a3, a4);
  if ( v8 )
    ++*(_QWORD *)(a1 + 144);
  RtlpTraceDatabaseReleaseLock(a1);
  return v8;
}

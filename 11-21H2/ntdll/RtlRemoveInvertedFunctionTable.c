/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x18007A558
 * Callers:
 *     LdrpUnmapModule @ 0x18007A514 (LdrpUnmapModule.c)
 *     LdrpInitializeExceptionTable @ 0x1800DD1F0 (LdrpInitializeExceptionTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x18007A58C (RtlxRemoveInvertedFunctionTable.c)
 */

void __fastcall RtlRemoveInvertedFunctionTable(__int64 a1)
{
  __int64 v2; // rcx

  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
  RtlxRemoveInvertedFunctionTable(v2, a1);
  RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}

/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x18007A558
 * Callers:
 *     LdrpUnmapModule @ 0x18007A514 (LdrpUnmapModule.c)
 *     LdrpInitializeExceptionTable @ 0x1800DD1F0 (LdrpInitializeExceptionTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x18007A58C (RtlxRemoveInvertedFunctionTable.c)
 */

signed __int64 __fastcall RtlRemoveInvertedFunctionTable(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v5; // rcx

  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpInvertedFunctionTableSRWLock, a2, a3, a4);
  RtlxRemoveInvertedFunctionTable(v5, a1);
  return RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}

/*
 * XREFs of RtlQueryProtectedPolicy @ 0x180084650
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x18006DBC0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpAddVectoredHandler @ 0x180084410 (RtlpAddVectoredHandler.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     bsearch @ 0x180091730 (bsearch.c)
 */

__int64 __fastcall RtlQueryProtectedPolicy(void *Key, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v6; // ebx
  _QWORD *v8; // rax

  v6 = -1073741275;
  if ( RtlpProtectedPolicies )
  {
    RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock, (unsigned __int64)a2, a3, a4);
    v8 = bsearch(
           Key,
           RtlpProtectedPolicies,
           (unsigned int)RtlpProtectedPoliciesActiveCount,
           0x18uLL,
           (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareActivationContextGuidSectionEntryByGuid);
    if ( v8 )
    {
      v6 = 0;
      *a2 = v8[2];
    }
    RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
  }
  return v6;
}

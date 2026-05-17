/*
 * XREFs of RtlQueryProtectedPolicy @ 0x180087FB0
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x180034D40 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpAddVectoredHandler @ 0x180087D70 (RtlpAddVectoredHandler.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     bsearch @ 0x180096740 (bsearch.c)
 */

__int64 __fastcall RtlQueryProtectedPolicy(void *Key, _QWORD *a2)
{
  unsigned int v4; // ebx
  _QWORD *v6; // rax

  v4 = -1073741275;
  if ( RtlpProtectedPolicies )
  {
    RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock);
    v6 = bsearch(
           Key,
           RtlpProtectedPolicies,
           (unsigned int)RtlpProtectedPoliciesActiveCount,
           0x18uLL,
           (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    if ( v6 )
    {
      v4 = 0;
      *a2 = v6[2];
    }
    RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
  }
  return v4;
}

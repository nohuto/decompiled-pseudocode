/*
 * XREFs of RtlQueryPropertyStore @ 0x180101100
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     bsearch @ 0x180091730 (bsearch.c)
 */

__int64 __fastcall RtlQueryPropertyStore(void *Key, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v6; // ebx
  _QWORD *v7; // rax

  RtlAcquireSRWLockShared(&RtlpPropStoreLock, (unsigned __int64)a2, a3, a4);
  v6 = 0;
  if ( RtlpPropStoreEntries
    && (v7 = bsearch(
               Key,
               RtlpPropStoreEntries,
               (unsigned int)RtlpPropStoreEntriesActiveCount,
               0x18uLL,
               RtlpCompareProtectedPolicyEntry)) != 0LL )
  {
    *a2 = v7[2];
  }
  else
  {
    v6 = -1073741275;
  }
  RtlReleaseSRWLockShared(&RtlpPropStoreLock);
  return v6;
}

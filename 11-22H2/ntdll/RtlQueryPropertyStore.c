/*
 * XREFs of RtlQueryPropertyStore @ 0x180101100
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     bsearch @ 0x180091730 (bsearch.c)
 */

NTSTATUS __cdecl RtlQueryPropertyStore(ULONG_PTR Key, PULONG_PTR Context)
{
  NTSTATUS v4; // ebx
  _QWORD *v5; // rax

  RtlAcquireSRWLockShared(&RtlpPropStoreLock);
  v4 = 0;
  if ( RtlpPropStoreEntries
    && (v5 = bsearch(
               (const void *)Key,
               RtlpPropStoreEntries,
               (unsigned int)RtlpPropStoreEntriesActiveCount,
               0x18uLL,
               RtlpCompareProtectedPolicyEntry)) != 0LL )
  {
    *Context = v5[2];
  }
  else
  {
    v4 = -1073741275;
  }
  RtlReleaseSRWLockShared(&RtlpPropStoreLock);
  return v4;
}

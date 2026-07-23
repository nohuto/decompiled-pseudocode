/*
 * XREFs of RtlRemovePropertyStore @ 0x180102680
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     bsearch @ 0x180091F30 (bsearch.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

NTSTATUS __cdecl RtlRemovePropertyStore(ULONG_PTR Key, PULONG_PTR Context)
{
  NTSTATUS v4; // edi
  unsigned __int64 *v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rcx

  RtlAcquireSRWLockExclusive(&RtlpPropStoreLock);
  v4 = 0;
  if ( RtlpPropStoreEntries
    && (v5 = (unsigned __int64 *)bsearch(
                                   (const void *)Key,
                                   RtlpPropStoreEntries,
                                   (unsigned int)RtlpPropStoreEntriesActiveCount,
                                   0x18uLL,
                                   RtlpCompareProtectedPolicyEntry)) != 0LL )
  {
    v6 = RtlpPropStoreEntriesActiveCount;
    v7 = (char *)v5 - (_BYTE *)RtlpPropStoreEntries;
    *Context = v5[2];
    memmove(v5, v5 + 3, 24 * (v6 - 0xAAAAAAAAAAAAAAABuLL * (v7 >> 3)) - 24);
    LODWORD(RtlpPropStoreEntriesActiveCount) = v6 - 1;
  }
  else
  {
    v4 = -1073741275;
  }
  RtlReleaseSRWLockExclusive(&RtlpPropStoreLock);
  return v4;
}

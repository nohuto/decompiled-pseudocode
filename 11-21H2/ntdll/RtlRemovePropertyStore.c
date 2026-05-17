/*
 * XREFs of RtlRemovePropertyStore @ 0x180101590
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     bsearch @ 0x180096740 (bsearch.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlRemovePropertyStore(void *Key, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v6; // edi
  char *v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rcx

  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpPropStoreLock, (unsigned __int64)a2, a3, a4);
  v6 = 0;
  if ( RtlpPropStoreEntries
    && (v7 = (char *)bsearch(
                       Key,
                       RtlpPropStoreEntries,
                       (unsigned int)RtlpPropStoreEntriesActiveCount,
                       0x18uLL,
                       (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry)) != 0LL )
  {
    v8 = RtlpPropStoreEntriesActiveCount;
    v9 = v7 - (_BYTE *)RtlpPropStoreEntries;
    *a2 = *((_QWORD *)v7 + 2);
    memmove(v7, v7 + 24, 24 * (v8 - 0xAAAAAAAAAAAAAAABuLL * (v9 >> 3)) - 24);
    LODWORD(RtlpPropStoreEntriesActiveCount) = v8 - 1;
  }
  else
  {
    v6 = -1073741275;
  }
  RtlReleaseSRWLockExclusive(&RtlpPropStoreLock);
  return v6;
}

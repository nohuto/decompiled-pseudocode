/*
 * XREFs of RtlCompareExchangePropertyStore @ 0x180101130
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     bsearch @ 0x180096740 (bsearch.c)
 *     qsort @ 0x180097BF0 (qsort.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlCompareExchangePropertyStore(_OWORD *Key, unsigned __int64 a2, __int64 *a3, _QWORD *a4)
{
  int v4; // r12d
  __int64 v6; // r15
  _OWORD *i; // rbp
  char *Heap; // rbx
  char *v10; // rax
  int v11; // esi
  unsigned int v12; // edi
  unsigned int v13; // ebp
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned int v17; // edi
  void *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // ebx

  v4 = 0;
  v6 = 0LL;
  for ( i = Key; ; i = Key )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpPropStoreLock, a2, (unsigned __int64)a3, (unsigned __int64)a4);
    Heap = (char *)RtlpPropStoreEntries;
    if ( RtlpPropStoreEntries )
    {
      v10 = (char *)bsearch(
                      i,
                      RtlpPropStoreEntries,
                      (unsigned int)RtlpPropStoreEntriesActiveCount,
                      0x18uLL,
                      (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
      Heap = (char *)RtlpPropStoreEntries;
      if ( v10 )
      {
        v17 = RtlpPropStoreEntriesActiveCount;
        goto LABEL_20;
      }
    }
    v11 = RtlpPropStoreEntriesTotalCount;
    if ( Heap )
    {
      v12 = RtlpPropStoreEntriesActiveCount;
      if ( (_DWORD)RtlpPropStoreEntriesActiveCount + 1 != RtlpPropStoreEntriesTotalCount )
        break;
    }
    if ( RtlpPropStoreEntriesTotalCount )
    {
      v13 = 2 * RtlpPropStoreEntriesTotalCount;
      if ( 2 * RtlpPropStoreEntriesTotalCount < (unsigned int)RtlpPropStoreEntriesTotalCount )
        goto LABEL_28;
    }
    else
    {
      v13 = 16;
    }
    RtlReleaseSRWLockExclusive(&RtlpPropStoreLock);
    Heap = (char *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 24LL * v13);
    if ( !Heap )
    {
LABEL_28:
      v22 = -1073741801;
      goto LABEL_29;
    }
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpPropStoreLock, v14, v15, v16);
    if ( v11 == RtlpPropStoreEntriesTotalCount )
    {
      v18 = RtlpPropStoreEntries;
      v12 = RtlpPropStoreEntriesActiveCount;
      if ( RtlpPropStoreEntries )
      {
        memmove(Heap, RtlpPropStoreEntries, 24LL * (unsigned int)RtlpPropStoreEntriesActiveCount);
        v6 = (__int64)v18;
      }
      RtlpPropStoreEntriesTotalCount = v13;
      i = Key;
      RtlpPropStoreEntries = Heap;
      break;
    }
    RtlReleaseSRWLockExclusive(&RtlpPropStoreLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
  }
  v19 = v12;
  v4 = 1;
  v17 = v12 + 1;
  LODWORD(RtlpPropStoreEntriesActiveCount) = v17;
  v10 = &Heap[24 * v19];
  if ( a3 )
    v20 = *a3;
  else
    v20 = 0LL;
  *((_QWORD *)v10 + 2) = v20;
  *(_OWORD *)v10 = *i;
LABEL_20:
  v21 = *((_QWORD *)v10 + 2);
  if ( !a3 || v21 == *a3 )
    *((_QWORD *)v10 + 2) = a2;
  if ( a4 )
    *a4 = v21;
  if ( v4 )
  {
    qsort(Heap, v17, 0x18uLL, (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    v22 = 0;
  }
  else
  {
    v22 = 0x40000000;
  }
LABEL_29:
  RtlReleaseSRWLockExclusive(&RtlpPropStoreLock);
  if ( v6 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
  return v22;
}

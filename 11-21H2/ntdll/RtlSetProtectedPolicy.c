/*
 * XREFs of RtlSetProtectedPolicy @ 0x180087700
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18001C904 (LdrProtectMrdata.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x180030B10 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800342E0 (LdrControlFlowGuardEnforced.c)
 *     LdrEnsureMrdataHeapExists @ 0x180087234 (LdrEnsureMrdataHeapExists.c)
 *     bsearch @ 0x180096740 (bsearch.c)
 *     qsort @ 0x180097BF0 (qsort.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlSetProtectedPolicy(_OWORD *Key, __int64 a2, _QWORD *a3)
{
  char v6; // di
  unsigned __int64 v7; // rdx
  int v8; // ebx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  int v14; // ebx
  void *v15; // rax
  unsigned int v16; // edi
  void *ProcessHeap; // rcx
  unsigned __int64 v18; // rdx
  char *Heap; // rbx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r9
  void *v24; // rsi
  unsigned __int64 v25; // rdx
  char *v26; // rbx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r9
  int v31; // edx
  void *v33; // rcx

  v6 = 0;
  v8 = LdrEnsureMrdataHeapExists();
  if ( v8 >= 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpProtectedPoliciesSRWLock, v7, v9, v10);
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v11, v12, v13);
      v14 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        if ( v14 == -1 )
          goto LABEL_42;
      }
      else
      {
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v14 + 1;
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    v15 = RtlpProtectedPolicies;
    if ( RtlpProtectedPolicies )
    {
      v26 = (char *)bsearch(
                      Key,
                      RtlpProtectedPolicies,
                      (unsigned int)RtlpProtectedPoliciesActiveCount,
                      0x18uLL,
                      (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
      if ( v26 )
        goto LABEL_18;
      v15 = RtlpProtectedPolicies;
    }
    if ( v15 && (_DWORD)RtlpProtectedPoliciesActiveCount + 1 != RtlpProtectedPoliciesTotalCount )
    {
      LdrProtectMrdata(0, v11, v12, v13);
      Heap = (char *)RtlpProtectedPolicies;
LABEL_17:
      v26 = &Heap[24 * (unsigned int)RtlpProtectedPoliciesActiveCount];
      LODWORD(RtlpProtectedPoliciesActiveCount) = RtlpProtectedPoliciesActiveCount + 1;
      v25 = (unsigned int)RtlpProtectedPoliciesActiveCount;
      *(_OWORD *)v26 = 0LL;
      *((_QWORD *)v26 + 2) = 0LL;
      *(_OWORD *)v26 = *Key;
      LdrProtectMrdata(1, v25, v22, v23);
      v6 = 1;
LABEL_18:
      v27 = *((_QWORD *)v26 + 2);
      *((_QWORD *)v26 + 2) = a2;
      if ( a3 )
        *a3 = v27;
      if ( v6 )
        qsort(
          RtlpProtectedPolicies,
          (unsigned int)RtlpProtectedPoliciesActiveCount,
          0x18uLL,
          (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
      v8 = 0;
      goto LABEL_23;
    }
    if ( RtlpProtectedPoliciesTotalCount )
    {
      v16 = 2 * RtlpProtectedPoliciesTotalCount;
      if ( 2 * RtlpProtectedPoliciesTotalCount < (unsigned int)RtlpProtectedPoliciesTotalCount || v16 >= 0xAAAAAAA )
        goto LABEL_35;
    }
    else
    {
      v16 = 16;
    }
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      if ( 24 * (unsigned __int64)v16 >= 0xFF000 )
        goto LABEL_35;
      ProcessHeap = (void *)LdrpMrdataHeap;
    }
    else
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    Heap = (char *)RtlAllocateHeap((__int64)ProcessHeap, 0, 24LL * v16);
    if ( Heap )
    {
      LdrProtectMrdata(0, v18, v20, v21);
      v24 = RtlpProtectedPolicies;
      if ( RtlpProtectedPolicies )
      {
        memmove(Heap, RtlpProtectedPolicies, 24LL * (unsigned int)RtlpProtectedPoliciesActiveCount);
        if ( (unsigned int)LdrControlFlowGuardEnforced() )
          v33 = (void *)LdrpMrdataHeap;
        else
          v33 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap((__int64)v33, 0, (__int64)v24);
      }
      RtlpProtectedPolicies = Heap;
      RtlpProtectedPoliciesTotalCount = v16;
      goto LABEL_17;
    }
LABEL_35:
    v8 = -1073741801;
LABEL_23:
    if ( !(unsigned int)LdrControlFlowGuardEnforced() )
    {
LABEL_28:
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      return (unsigned int)v8;
    }
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v28, v29, v30);
    v31 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v31 - 1;
      if ( v31 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      goto LABEL_28;
    }
LABEL_42:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return (unsigned int)v8;
}

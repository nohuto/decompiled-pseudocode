/*
 * XREFs of RtlSetProtectedPolicy @ 0x180082860
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002C570 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180032FA0 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x180049280 (RtlProtectHeap.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081A04 (LdrEnsureMrdataHeapExists.c)
 *     bsearch @ 0x180091730 (bsearch.c)
 *     qsort @ 0x180092BF0 (qsort.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall RtlSetProtectedPolicy(_OWORD *Key, __int64 a2, _QWORD *a3)
{
  char v6; // di
  int v7; // ebx
  int v8; // ebx
  void *v9; // rax
  unsigned int v10; // edi
  void *ProcessHeap; // rcx
  char *Heap; // rbx
  void *v13; // rsi
  char *v14; // rbx
  __int64 v15; // rax
  int v16; // edx
  void *v18; // rcx

  v6 = 0;
  v7 = LdrEnsureMrdataHeapExists();
  if ( v7 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    if ( LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v8 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        if ( v8 == -1 )
          goto LABEL_42;
      }
      else
      {
        RtlProtectHeap((__m128i *)LdrpMrdataHeap, 0);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v8 + 1;
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    v9 = RtlpProtectedPolicies;
    if ( RtlpProtectedPolicies )
    {
      v14 = (char *)bsearch(
                      Key,
                      RtlpProtectedPolicies,
                      (unsigned int)RtlpProtectedPoliciesActiveCount,
                      0x18uLL,
                      (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareActivationContextGuidSectionEntryByGuid);
      if ( v14 )
        goto LABEL_18;
      v9 = RtlpProtectedPolicies;
    }
    if ( v9 && (_DWORD)RtlpProtectedPoliciesActiveCount + 1 != RtlpProtectedPoliciesTotalCount )
    {
      LdrProtectMrdata(0);
      Heap = (char *)RtlpProtectedPolicies;
LABEL_17:
      v14 = &Heap[24 * (unsigned int)RtlpProtectedPoliciesActiveCount];
      LODWORD(RtlpProtectedPoliciesActiveCount) = RtlpProtectedPoliciesActiveCount + 1;
      *(_OWORD *)v14 = 0LL;
      *((_QWORD *)v14 + 2) = 0LL;
      *(_OWORD *)v14 = *Key;
      LdrProtectMrdata(1);
      v6 = 1;
LABEL_18:
      v15 = *((_QWORD *)v14 + 2);
      *((_QWORD *)v14 + 2) = a2;
      if ( a3 )
        *a3 = v15;
      if ( v6 )
        qsort(
          RtlpProtectedPolicies,
          (unsigned int)RtlpProtectedPoliciesActiveCount,
          0x18uLL,
          RtlpCompareProtectedPolicyEntry);
      v7 = 0;
      goto LABEL_23;
    }
    if ( RtlpProtectedPoliciesTotalCount )
    {
      v10 = 2 * RtlpProtectedPoliciesTotalCount;
      if ( 2 * RtlpProtectedPoliciesTotalCount < (unsigned int)RtlpProtectedPoliciesTotalCount || v10 >= 0xAAAAAAA )
        goto LABEL_35;
    }
    else
    {
      v10 = 16;
    }
    if ( LdrControlFlowGuardEnforced() )
    {
      if ( 24 * (unsigned __int64)v10 >= 0xFF000 )
        goto LABEL_35;
      ProcessHeap = (void *)LdrpMrdataHeap;
    }
    else
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    Heap = (char *)RtlAllocateHeap((__int64)ProcessHeap, 0, 24LL * v10);
    if ( Heap )
    {
      LdrProtectMrdata(0);
      v13 = RtlpProtectedPolicies;
      if ( RtlpProtectedPolicies )
      {
        memmove(Heap, RtlpProtectedPolicies, 24LL * (unsigned int)RtlpProtectedPoliciesActiveCount);
        if ( LdrControlFlowGuardEnforced() )
          v18 = (void *)LdrpMrdataHeap;
        else
          v18 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap((__int64)v18, 0, (__int64)v13);
      }
      RtlpProtectedPolicies = Heap;
      RtlpProtectedPoliciesTotalCount = v10;
      goto LABEL_17;
    }
LABEL_35:
    v7 = -1073741801;
LABEL_23:
    if ( !LdrControlFlowGuardEnforced() )
    {
LABEL_28:
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      return (unsigned int)v7;
    }
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v16 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v16 - 1;
      if ( v16 == 1 )
        RtlProtectHeap((__m128i *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      goto LABEL_28;
    }
LABEL_42:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return (unsigned int)v7;
}

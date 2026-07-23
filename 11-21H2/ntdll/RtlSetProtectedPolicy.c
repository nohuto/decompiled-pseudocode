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

NTSTATUS __cdecl RtlSetProtectedPolicy(PGUID PolicyGuid, ULONG_PTR PolicyValue, PULONG_PTR OldPolicyValue)
{
  char v6; // di
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  PVOID v10; // rax
  unsigned int v11; // edi
  int v12; // eax
  PVOID ProcessHeap; // rcx
  char *Heap; // rbx
  PVOID v15; // rsi
  char *v16; // rbx
  unsigned __int64 v17; // rax
  int v18; // eax
  int v19; // edx
  int v21; // eax
  PVOID v22; // rcx

  v6 = 0;
  v7 = LdrEnsureMrdataHeapExists();
  if ( v7 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LOBYTE(v8) = LdrControlFlowGuardEnforced();
    if ( v8 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v9 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        if ( v9 == -1 )
          goto LABEL_42;
      }
      else
      {
        RtlProtectHeap(LdrpMrdataHeap, 0);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v9 + 1;
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    v10 = RtlpProtectedPolicies;
    if ( RtlpProtectedPolicies )
    {
      v16 = (char *)bsearch(
                      PolicyGuid,
                      RtlpProtectedPolicies,
                      (unsigned int)RtlpProtectedPoliciesActiveCount,
                      0x18uLL,
                      (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
      if ( v16 )
        goto LABEL_18;
      v10 = RtlpProtectedPolicies;
    }
    if ( v10 && (_DWORD)RtlpProtectedPoliciesActiveCount + 1 != RtlpProtectedPoliciesTotalCount )
    {
      LdrProtectMrdata(0);
      Heap = (char *)RtlpProtectedPolicies;
LABEL_17:
      v16 = &Heap[24 * (unsigned int)RtlpProtectedPoliciesActiveCount];
      LODWORD(RtlpProtectedPoliciesActiveCount) = RtlpProtectedPoliciesActiveCount + 1;
      *(_OWORD *)v16 = 0LL;
      *((_QWORD *)v16 + 2) = 0LL;
      *(GUID *)v16 = *PolicyGuid;
      LdrProtectMrdata(1);
      v6 = 1;
LABEL_18:
      v17 = *((_QWORD *)v16 + 2);
      *((_QWORD *)v16 + 2) = PolicyValue;
      if ( OldPolicyValue )
        *OldPolicyValue = v17;
      if ( v6 )
        qsort(
          RtlpProtectedPolicies,
          (unsigned int)RtlpProtectedPoliciesActiveCount,
          0x18uLL,
          (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
      v7 = 0;
      goto LABEL_23;
    }
    if ( RtlpProtectedPoliciesTotalCount )
    {
      v11 = 2 * RtlpProtectedPoliciesTotalCount;
      if ( 2 * RtlpProtectedPoliciesTotalCount < (unsigned int)RtlpProtectedPoliciesTotalCount || v11 >= 0xAAAAAAA )
        goto LABEL_35;
    }
    else
    {
      v11 = 16;
    }
    LOBYTE(v12) = LdrControlFlowGuardEnforced();
    if ( v12 )
    {
      if ( 24 * (unsigned __int64)v11 >= 0xFF000 )
        goto LABEL_35;
      ProcessHeap = LdrpMrdataHeap;
    }
    else
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    Heap = (char *)RtlAllocateHeap(ProcessHeap, 0, 24LL * v11);
    if ( Heap )
    {
      LdrProtectMrdata(0);
      v15 = RtlpProtectedPolicies;
      if ( RtlpProtectedPolicies )
      {
        memmove(Heap, RtlpProtectedPolicies, 24LL * (unsigned int)RtlpProtectedPoliciesActiveCount);
        LOBYTE(v21) = LdrControlFlowGuardEnforced();
        if ( v21 )
          v22 = LdrpMrdataHeap;
        else
          v22 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap(v22, 0, v15);
      }
      RtlpProtectedPolicies = Heap;
      RtlpProtectedPoliciesTotalCount = v11;
      goto LABEL_17;
    }
LABEL_35:
    v7 = -1073741801;
LABEL_23:
    LOBYTE(v18) = LdrControlFlowGuardEnforced();
    if ( !v18 )
    {
LABEL_28:
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      return v7;
    }
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v19 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v19 - 1;
      if ( v19 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      goto LABEL_28;
    }
LABEL_42:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return v7;
}

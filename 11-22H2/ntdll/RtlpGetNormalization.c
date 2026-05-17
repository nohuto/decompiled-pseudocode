/*
 * XREFs of RtlpGetNormalization @ 0x180089598
 * Callers:
 *     RtlNormalizeString @ 0x180089490 (RtlNormalizeString.c)
 *     RtlIsNormalizedString @ 0x18010D5B0 (RtlIsNormalizedString.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     NormalizationList__Lookup @ 0x1800896B8 (NormalizationList__Lookup.c)
 *     Normalization__LoadTables @ 0x18008D4AC (Normalization__LoadTables.c)
 *     ZwGetNlsSectionPtr @ 0x1800A0DE0 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpGetNormalization(unsigned int a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  int NlsSectionPtr; // ebx
  __int64 Heap; // rax
  __int64 v11; // rbx
  int Tables; // ebp
  __int64 *v13; // rax
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  if ( !a2 )
    return 3221225712LL;
  RtlAcquireSRWLockExclusive(&NormalizationListLock);
  v5 = NormalizationList__Lookup(a1);
  if ( v5 )
  {
LABEL_3:
    RtlReleaseSRWLockExclusive(&NormalizationListLock);
    result = 0LL;
    *a2 = v5;
    return result;
  }
  LODWORD(v4) = v4 ^ 0x100;
  v7 = NormalizationList__Lookup(v4);
  if ( v7 )
  {
    v15 = *(_QWORD *)(v7 + 8);
    v14 = *(_QWORD *)(v7 + 16);
LABEL_6:
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 144LL);
    v11 = Heap;
    if ( Heap )
    {
      v5 = Heap + 24;
      Tables = Normalization__LoadTables(a1, v15, v14, Heap + 24);
      if ( Tables >= 0 )
      {
        *(_DWORD *)(v11 + 16) = a1;
        v13 = (__int64 *)off_18017E498;
        if ( *(_UNKNOWN ***)off_18017E498 != &NormalizationListHead )
          __fastfail(3u);
        *(_QWORD *)v11 = &NormalizationListHead;
        *(_QWORD *)(v11 + 8) = v13;
        *v13 = v11;
        off_18017E498 = (_UNKNOWN *)v11;
        goto LABEL_3;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
      NlsSectionPtr = Tables;
    }
    else
    {
      NlsSectionPtr = -1073741801;
    }
    goto LABEL_14;
  }
  v8 = a1;
  LODWORD(v8) = a1 & 0xFFFFFEFF;
  NlsSectionPtr = ZwGetNlsSectionPtr(12LL, v8, 0LL, &v15, &v14);
  if ( NlsSectionPtr >= 0 )
    goto LABEL_6;
LABEL_14:
  RtlReleaseSRWLockExclusive(&NormalizationListLock);
  return (unsigned int)NlsSectionPtr;
}

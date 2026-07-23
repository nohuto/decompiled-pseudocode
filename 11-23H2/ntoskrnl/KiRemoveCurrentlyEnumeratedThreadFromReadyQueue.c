/*
 * XREFs of KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x140243690
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242670 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiExecuteAllDpcs @ 0x140244590 (KiExecuteAllDpcs.c)
 * Callees:
 *     KiRemoveThreadFromScbQueue @ 0x1402067BC (KiRemoveThreadFromScbQueue.c)
 *     KiAdvanceReadyQueueEnumeratorToNextList @ 0x140206900 (KiAdvanceReadyQueueEnumeratorToNextList.c)
 *     KiRemoveThreadFromReadyQueue @ 0x140206BE0 (KiRemoveThreadFromReadyQueue.c)
 *     KiUpdateSoftParkElectionStatisticsOnRemoval @ 0x140243CF0 (KiUpdateSoftParkElectionStatisticsOnRemoval.c)
 */

int __fastcall KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r10
  unsigned int v3; // esi
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp

  v2 = (_QWORD *)(a2 + 216);
  v3 = *(unsigned __int8 *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 48 * (*(unsigned __int8 *)(a1 + 10) + 1LL));
  if ( *(_BYTE *)(a1 + 13) == 2 )
  {
    v10 = *(_QWORD *)(a1 + 32);
    v11 = *(_QWORD *)(a1 + 16);
    if ( *v2 == v10 && *(_QWORD *)(a2 + 224) == v10 )
      KiAdvanceReadyQueueEnumeratorToNextList(a1);
    else
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
    LODWORD(v6) = KiRemoveThreadFromScbQueue(v5, v11, a2, v3);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(v6 + 8);
    if ( *(_BYTE *)(a1 + 12) )
    {
      if ( *(_BYTE *)(a1 + 12) == 1 )
      {
        if ( ((*(unsigned __int8 *)(a1 + 11) - 1) & *(unsigned __int8 *)(a1 + 11)) != 0 )
          _bittestandset((signed __int32 *)(v5 + 32476), v3);
        v7 = *(_QWORD *)(v5 + 34888);
        if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
          _InterlockedAnd(*(volatile signed __int32 **)(a2 + 968), 0xFFFBFFFF);
        v8 = (_QWORD *)*v2;
        v9 = (_QWORD *)v2[1];
        if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v9 != v2 )
          __fastfail(3u);
        *v9 = v8;
        v8[1] = v9;
        if ( v9 == v8 )
          *(_DWORD *)(v7 + 8) ^= 1 << v3;
        --*(_DWORD *)(v7 + 672);
        *(_QWORD *)(v7 + 680) -= *(unsigned int *)(a2 + 2288);
        LODWORD(v6) = KiUpdateSoftParkElectionStatisticsOnRemoval(v7, a2, 0LL);
      }
    }
    else
    {
      if ( ((*(unsigned __int8 *)(a1 + 11) - 1) & *(unsigned __int8 *)(a1 + 11)) != 0 )
        _bittestandreset((signed __int32 *)(v5 + 32476), v3);
      LODWORD(v6) = KiRemoveThreadFromReadyQueue(v5, (__int64)v2, v3);
    }
  }
  return v6;
}

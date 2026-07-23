/*
 * XREFs of KiUpdateSoftParkElectionStatisticsOnRemoval @ 0x140243CF0
 * Callers:
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x140243690 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x140243C70 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiUpdateLocalReadyQueueStatisticsOnRemoval @ 0x140411050 (KiUpdateLocalReadyQueueStatisticsOnRemoval.c)
 *     KiFlushReadyLists @ 0x14057E2A4 (KiFlushReadyLists.c)
 * Callees:
 *     KiAcquireSoftParkElectionLock @ 0x140410424 (KiAcquireSoftParkElectionLock.c)
 */

__int64 __fastcall KiUpdateSoftParkElectionStatisticsOnRemoval(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  char v4; // r9
  __int64 v7; // rcx

  result = *(_QWORD *)(a1 + 696);
  v4 = 0;
  if ( *(_QWORD *)(a2 + 2296) == result )
  {
    if ( !a3 )
    {
      KiAcquireSoftParkElectionLock(a1);
      result = *(_QWORD *)(a1 + 696);
      v4 = 1;
      if ( *(_QWORD *)(a2 + 2296) != result )
        goto LABEL_7;
    }
    --*(_DWORD *)(a1 + 704);
    *(_QWORD *)(a1 + 712) -= *(unsigned int *)(a2 + 2292);
    if ( !*(_DWORD *)(a1 + 704) )
      *(_QWORD *)(a1 + 1680) = 0LL;
    v7 = *(unsigned __int8 *)(a2 + 1649) + 8 * (*(unsigned __int8 *)(a2 + 1650) + 2LL * *(unsigned __int8 *)(a2 + 1648));
    result = *(unsigned int *)(a2 + 2292);
    *(_QWORD *)(a1 + 8 * v7 + 784) -= result;
    if ( v4 )
LABEL_7:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 688), 0LL);
  }
  return result;
}

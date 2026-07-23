/*
 * XREFs of MiSetNextStandbyPageSameNodeNoLockAsserts @ 0x1402DD410
 * Callers:
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MiEnqueuePageList @ 0x1402DACA0 (MiEnqueuePageList.c)
 *     MiSharedInsertPfnChainInList @ 0x1402DDE00 (MiSharedInsertPfnChainInList.c)
 *     MiUpdatePfnOnSlabStandbyList @ 0x1403318F8 (MiUpdatePfnOnSlabStandbyList.c)
 *     MiUnlinkNumaStandbyPage @ 0x14033193C (MiUnlinkNumaStandbyPage.c)
 *     MiExclusiveInsertPfnChainInList @ 0x14033C408 (MiExclusiveInsertPfnChainInList.c)
 *     MiReplaceNumaStandbyPage @ 0x1403C49B8 (MiReplaceNumaStandbyPage.c)
 *     MiInsertNumaStandbyPage @ 0x140650D00 (MiInsertNumaStandbyPage.c)
 *     MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x140656C58 (MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetNextStandbyPageSameNodeNoLockAsserts(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax
  signed __int64 v3; // r8
  __int64 v4; // r9
  signed __int64 result; // rax
  signed __int64 v6; // r8

  v2 = *(_DWORD *)(a1 + 36);
  *(_QWORD *)a1 = (a2 << 40) | *(_QWORD *)a1 & 0xFFFFFFFFFFLL;
  *(_DWORD *)(a1 + 36) = v2 & 0x1FFFFF | ((unsigned int)(a2 >> 24) << 21);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = (a2 & 0xF800000000LL) << 20;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v4 | v3 & 0xF07FFFFFFFFFFFFFuLL, v3);
  if ( v3 != result )
  {
    do
    {
      v6 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 40),
                 v4 | result & 0xF07FFFFFFFFFFFFFuLL,
                 result);
    }
    while ( v6 != result );
  }
  return result;
}

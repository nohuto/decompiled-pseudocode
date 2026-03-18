/*
 * XREFs of MiRelinkStandbyPage @ 0x1402323E8
 * Callers:
 *     MiUpdatePfnPriority @ 0x14027428C (MiUpdatePfnPriority.c)
 *     MiEmptyDecayClusterTimers @ 0x1403122F0 (MiEmptyDecayClusterTimers.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140316E90 (MiUpdatePfnForPrefetchByPte.c)
 *     MmSetPfnListInfo @ 0x1403C4E98 (MmSetPfnListInfo.c)
 * Callees:
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiRestoreTransitionPte @ 0x14033FAA4 (MiRestoreTransitionPte.c)
 */

__int64 __fastcall MiRelinkStandbyPage(ULONG_PTR BugCheckParameter2, int a2)
{
  if ( *(_WORD *)(BugCheckParameter2 + 32) )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(BugCheckParameter2 + 35) ^= (a2 ^ *(_BYTE *)(BugCheckParameter2 + 35)) & 7;
    return 1LL;
  }
  if ( (MiUnlinkPageFromListEx(BugCheckParameter2) & 3) == 0 )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(BugCheckParameter2 + 35) ^= (a2 ^ *(_BYTE *)(BugCheckParameter2 + 35)) & 7;
    MiInsertPageInList(BugCheckParameter2);
    return 1LL;
  }
  MiRestoreTransitionPte(BugCheckParameter2);
  *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(BugCheckParameter2 + 34) &= 0xC7u;
  *(_BYTE *)(BugCheckParameter2 + 35) &= ~0x20u;
  *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
  *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
  MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
  return 0LL;
}

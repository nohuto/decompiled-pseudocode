/*
 * XREFs of MiDiscardTransitionPteEx @ 0x140650624
 * Callers:
 *     MiHandleTransitionFault @ 0x140262E50 (MiHandleTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x140265320 (MmCheckCachedPageStates.c)
 *     MiReservePageFileSpaceForPage @ 0x140284E70 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x1402940D4 (MiActOnPte.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiResolveProtoCombine @ 0x1402E3AF8 (MiResolveProtoCombine.c)
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiUnlinkStandbyPfn @ 0x14033E81C (MiUnlinkStandbyPfn.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140348168 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiCombineWithStandbyExisting @ 0x14035A17C (MiCombineWithStandbyExisting.c)
 *     MiPurgeSlabEntries @ 0x14036B670 (MiPurgeSlabEntries.c)
 *     MiDemoteSlabEntry @ 0x1403CD3EC (MiDemoteSlabEntry.c)
 *     MiMakeOutswappedPageResident @ 0x14061856C (MiMakeOutswappedPageResident.c)
 *     MiWalkResetCommitPte @ 0x140619740 (MiWalkResetCommitPte.c)
 *     MiMirrorPerformBrownWrites @ 0x140627628 (MiMirrorPerformBrownWrites.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140651854 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiGetSlabStandbyPage @ 0x140656E5C (MiGetSlabStandbyPage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140660408 (MiHandleSpecialPurposeMemoryCachedFault.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSetPfnBlink @ 0x1402DF0B0 (MiSetPfnBlink.c)
 *     MiRestoreTransitionPte @ 0x1403351BC (MiRestoreTransitionPte.c)
 */

void __fastcall MiDiscardTransitionPteEx(ULONG_PTR a1, __int16 a2)
{
  MiRestoreTransitionPte(a1, 0);
  MiSetPfnBlink(a1, 0LL, 1);
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4), a2 | 2);
}

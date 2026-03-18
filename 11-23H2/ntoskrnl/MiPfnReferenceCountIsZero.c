/*
 * XREFs of MiPfnReferenceCountIsZero @ 0x1402D8FE0
 * Callers:
 *     MiUnlockImageSection @ 0x14025A460 (MiUnlockImageSection.c)
 *     MiResolveTransitionFault @ 0x1402624D0 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x140265320 (MmCheckCachedPageStates.c)
 *     MiResolveProtoPteFault @ 0x140267ED0 (MiResolveProtoPteFault.c)
 *     MiProbeUnlockPage @ 0x1402CB170 (MiProbeUnlockPage.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiFinishHardFault @ 0x1402D9300 (MiFinishHardFault.c)
 *     MiAddPageToInsertList @ 0x1402D99D0 (MiAddPageToInsertList.c)
 *     MiUnlockMdlWritePages @ 0x1402D9B30 (MiUnlockMdlWritePages.c)
 *     MmUnmapViewInSystemCache @ 0x1402D9FB0 (MmUnmapViewInSystemCache.c)
 *     MiUnlockProtoPoolPage @ 0x1402DAEF0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402DAF84 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiWriteCompletePfn @ 0x1402F4750 (MiWriteCompletePfn.c)
 *     MiHardFaultPageRelease @ 0x140334DA8 (MiHardFaultPageRelease.c)
 *     MiInsertProtectedStandbyPage @ 0x140335030 (MiInsertProtectedStandbyPage.c)
 *     MiCombineWithStandbyExisting @ 0x14035A17C (MiCombineWithStandbyExisting.c)
 *     MiMirrorPerformBrownWrites @ 0x140627628 (MiMirrorPerformBrownWrites.c)
 *     MiMarkFileOnlyPfnGood @ 0x14063E334 (MiMarkFileOnlyPfnGood.c)
 *     MiPurgeBadFileOnlyPages @ 0x14063EA70 (MiPurgeBadFileOnlyPages.c)
 *     MiNoPagesLastChance @ 0x140650EF4 (MiNoPagesLastChance.c)
 *     MiSwapHardFaultPage @ 0x14066C978 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiReleasePageFileSpace @ 0x14021941C (MiReleasePageFileSpace.c)
 *     MiInsertPageInList @ 0x14026EC00 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSetNonResidentPteHeat @ 0x1402D90B0 (MiSetNonResidentPteHeat.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

void __fastcall MiPfnReferenceCountIsZero(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v4; // r9
  ULONG_PTR v5; // r10
  char v6; // cl

  v4 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v4 )
    KeBugCheckEx(0x4Eu, 7uLL, a2, v4, 0LL);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    v6 = *(_BYTE *)(a1 + 35);
    if ( (v6 & 0x10) != 0 && !_bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
      *(_BYTE *)(a1 + 35) = v6 & 0xEF;
    MiReleasePageFileSpace(
      *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)),
      *(_QWORD *)(a1 + 16),
      1);
    MiInsertPageInFreeOrZeroedList(a2, 2);
  }
  else
  {
    MiSetNonResidentPteHeat(a1 + 16, 0LL);
    if ( (*(_BYTE *)(v5 + 34) & 0x10) != 0 )
      MiInsertPageInList(v5, 8u);
    else
      MiInsertPageInList(v5, 4u);
  }
}

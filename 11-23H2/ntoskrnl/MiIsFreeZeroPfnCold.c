/*
 * XREFs of MiIsFreeZeroPfnCold @ 0x1402E8860
 * Callers:
 *     MiGetPerfectColorHeadPage @ 0x14026DEA0 (MiGetPerfectColorHeadPage.c)
 *     MiConvertEntireLargePageToSmall @ 0x1402D2D60 (MiConvertEntireLargePageToSmall.c)
 *     MiInsertLargePageChain @ 0x1402D6B70 (MiInsertLargePageChain.c)
 *     MiAllocateLargeZeroPages @ 0x1402E7A70 (MiAllocateLargeZeroPages.c)
 *     MiReplenishPageSlist @ 0x1402E7D60 (MiReplenishPageSlist.c)
 *     MiReturnFreeZeroPage @ 0x1402E8204 (MiReturnFreeZeroPage.c)
 *     MiBeginPageAccessor @ 0x1402E82C4 (MiBeginPageAccessor.c)
 *     MiDemoteLocalLargePage @ 0x1402E8440 (MiDemoteLocalLargePage.c)
 *     MiGetLargePageChain @ 0x1402EBCD0 (MiGetLargePageChain.c)
 *     MiConvertContiguousPages @ 0x1403BDCB0 (MiConvertContiguousPages.c)
 *     MiLargeFreePageToMdl @ 0x1403D7924 (MiLargeFreePageToMdl.c)
 *     MiPruneStandbyPages @ 0x14046D3B0 (MiPruneStandbyPages.c)
 *     MiPurgePartitionStandby @ 0x140651A90 (MiPurgePartitionStandby.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsFreeZeroPfnCold(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( qword_140C65B40 && (v1 & 0x10) == 0 )
    v1 &= ~qword_140C65B40;
  return HIDWORD(v1) == 4294967293;
}

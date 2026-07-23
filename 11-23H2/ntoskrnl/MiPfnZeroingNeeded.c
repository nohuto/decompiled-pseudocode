/*
 * XREFs of MiPfnZeroingNeeded @ 0x14021AEF4
 * Callers:
 *     MiChangePageAttributeContiguous @ 0x14021A6A0 (MiChangePageAttributeContiguous.c)
 *     MiGetSlabPage @ 0x14023BE40 (MiGetSlabPage.c)
 *     MmCheckCachedPageStates @ 0x1402655B0 (MmCheckCachedPageStates.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MiMakePageAvoidRead @ 0x1402CE290 (MiMakePageAvoidRead.c)
 *     MiCoalesceFreePages @ 0x1402D4C00 (MiCoalesceFreePages.c)
 *     MiPfPutPagesInTransition @ 0x1402DE2D0 (MiPfPutPagesInTransition.c)
 *     MiConvertContiguousPages @ 0x1403BDCB0 (MiConvertContiguousPages.c)
 *     MiFindLargePageMemory @ 0x140A49A18 (MiFindLargePageMemory.c)
 * Callees:
 *     MiPageContentsRetainedAcrossAttributeChange @ 0x14021AF2C (MiPageContentsRetainedAcrossAttributeChange.c)
 */

_BOOL8 __fastcall MiPfnZeroingNeeded(__int64 a1)
{
  return (*(_DWORD *)(a1 + 16) & 0x3E0LL) != 0
      || (unsigned int)MiPageContentsRetainedAcrossAttributeChange(*(unsigned __int8 *)(a1 + 34) >> 6) == 0;
}

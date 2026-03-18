/*
 * XREFs of MiPfnZeroingNeeded @ 0x14021AEF4
 * Callers:
 *     MiChangePageAttributeContiguous @ 0x14021A6A0 (MiChangePageAttributeContiguous.c)
 *     MiGetSlabPage @ 0x14023BD70 (MiGetSlabPage.c)
 *     MmCheckCachedPageStates @ 0x140265320 (MmCheckCachedPageStates.c)
 *     MiGetPage @ 0x14026D360 (MiGetPage.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiCoalesceFreePages @ 0x1402D4970 (MiCoalesceFreePages.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     MiConvertContiguousPages @ 0x1403BDAD0 (MiConvertContiguousPages.c)
 *     MiFindLargePageMemory @ 0x140A49768 (MiFindLargePageMemory.c)
 * Callees:
 *     MiPageContentsRetainedAcrossAttributeChange @ 0x14021AF2C (MiPageContentsRetainedAcrossAttributeChange.c)
 */

_BOOL8 __fastcall MiPfnZeroingNeeded(__int64 a1)
{
  return (*(_DWORD *)(a1 + 16) & 0x3E0LL) != 0
      || (unsigned int)MiPageContentsRetainedAcrossAttributeChange(*(unsigned __int8 *)(a1 + 34) >> 6) == 0;
}

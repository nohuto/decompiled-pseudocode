/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x1402E39BC
 * Callers:
 *     MiCombineWithExisting @ 0x1402179B4 (MiCombineWithExisting.c)
 *     MmProtectPool @ 0x140296FC0 (MmProtectPool.c)
 *     MmUnmapViewInSystemCache @ 0x1402D9FB0 (MmUnmapViewInSystemCache.c)
 *     MiTrimPteWorker @ 0x1402E38D8 (MiTrimPteWorker.c)
 *     MiRemoveMappedPtes @ 0x1402E65E0 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiEmptyWorkingSetHelper @ 0x1403491EC (MiEmptyWorkingSetHelper.c)
 *     MiStealPage @ 0x1403BC3DC (MiStealPage.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062D6CC (MiDeprioritizeVirtualAddresses.c)
 * Callees:
 *     MiLogPageAccess @ 0x14027CBB0 (MiLogPageAccess.c)
 *     MiGetVaAge @ 0x1402E3A30 (MiGetVaAge.c)
 */

void __fastcall MI_WSLE_LOG_ACCESS(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdx

  v4 = (__int64)(a2 << 25) >> 16;
  if ( (v4 >= 0xFFFFF68000000000uLL && v4 <= 0xFFFFF6FFFFFFFFFFuLL
     || (unsigned __int8)MiGetVaAge(0xFFFFF68000000000uLL, v4) != 7)
    && (*(_BYTE *)a2 & 0x20) != 0 )
  {
    MiLogPageAccess(a1, a2);
  }
}

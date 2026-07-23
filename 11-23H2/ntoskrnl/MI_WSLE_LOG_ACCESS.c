/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x1402E3C4C
 * Callers:
 *     MiCombineWithExisting @ 0x1402179B4 (MiCombineWithExisting.c)
 *     MmProtectPool @ 0x140297250 (MmProtectPool.c)
 *     MmUnmapViewInSystemCache @ 0x1402DA240 (MmUnmapViewInSystemCache.c)
 *     MiTrimPteWorker @ 0x1402E3B68 (MiTrimPteWorker.c)
 *     MiRemoveMappedPtes @ 0x1402E6870 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPagableVm @ 0x1402E96D0 (MiDeleteSystemPagableVm.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFEEC (MiTrimSharedPageFromViews.c)
 *     MiEmptyWorkingSetHelper @ 0x14034947C (MiEmptyWorkingSetHelper.c)
 *     MiStealPage @ 0x1403BC5BC (MiStealPage.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062DC1C (MiDeprioritizeVirtualAddresses.c)
 * Callees:
 *     MiLogPageAccess @ 0x14027CE40 (MiLogPageAccess.c)
 *     MiGetVaAge @ 0x1402E3CC0 (MiGetVaAge.c)
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

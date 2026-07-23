/*
 * XREFs of MiZeroPhysicalPage @ 0x14033948C
 * Callers:
 *     MiGetSlabPage @ 0x14023BE40 (MiGetSlabPage.c)
 *     MmCheckCachedPageStates @ 0x1402655B0 (MmCheckCachedPageStates.c)
 *     MiGetPageChain @ 0x14026C990 (MiGetPageChain.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MiIssueHardFault @ 0x1402A1340 (MiIssueHardFault.c)
 *     MiWaitForInPageComplete @ 0x1402A1A30 (MiWaitForInPageComplete.c)
 *     MiMakePageAvoidRead @ 0x1402CE290 (MiMakePageAvoidRead.c)
 *     MiZeroInParallelWorker @ 0x1402D1590 (MiZeroInParallelWorker.c)
 *     MiZeroAndReleasePages @ 0x1402D32C0 (MiZeroAndReleasePages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetLargePage @ 0x1402D7D10 (MiGetLargePage.c)
 *     MiPfPutPagesInTransition @ 0x1402DE2D0 (MiPfPutPagesInTransition.c)
 *     MiZeroLargePage @ 0x1402EC31C (MiZeroLargePage.c)
 *     MiFreePageToSlabAllocator @ 0x1403391E0 (MiFreePageToSlabAllocator.c)
 *     MiPerformFinalZeroing @ 0x14064E1BC (MiPerformFinalZeroing.c)
 *     MiZeroAndConvertPage @ 0x140650584 (MiZeroAndConvertPage.c)
 *     MiInitializeCacheFlushing @ 0x140B6A51C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiFillPhysicalPages @ 0x140339520 (MiFillPhysicalPages.c)
 *     MiPfnBestZeroAttribute @ 0x1403397FC (MiPfnBestZeroAttribute.c)
 *     MiChangePageAttribute @ 0x14036F55C (MiChangePageAttribute.c)
 */

__int64 __fastcall MiZeroPhysicalPage(__int64 a1, ULONG_PTR a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rdi
  unsigned int v7; // esi
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 result; // rax

  v6 = 48 * a2 - 0x220000000000LL;
  v7 = *(unsigned __int8 *)(v6 + 34) >> 6;
  v8 = v7;
  if ( (a3 & 1) == 0 )
  {
    v9 = MiPfnBestZeroAttribute(v6, a4, a3);
    v8 = v9;
    if ( v9 != v7 )
      MiChangePageAttribute(v6, v9, 0LL);
  }
  result = MiFillPhysicalPages(a2);
  if ( v8 != v7 && v8 != a4 )
    return MiChangePageAttribute(v6, v7, 0LL);
  return result;
}

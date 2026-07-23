/*
 * XREFs of MiGetUltraPage @ 0x1402EC800
 * Callers:
 *     MiCreateUltraThreadContextHelper @ 0x1402EC6FC (MiCreateUltraThreadContextHelper.c)
 *     MiReplenishUltraPageTables @ 0x1406620CC (MiReplenishUltraPageTables.c)
 * Callees:
 *     MiGetSlabPage @ 0x14023BE40 (MiGetSlabPage.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140285C64 (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiGetUltraPage(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 SlabPage; // r8
  unsigned __int64 *v4; // rcx

  v2 = *(_DWORD *)(a1 + 12) | _InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) & *(_DWORD *)(a1 + 8);
  if ( a2 && (SlabPage = MiGetSlabPage((__int64)&MiSystemPartition, 6u, v2, 24LL, 0LL), SlabPage != -1)
    || (SlabPage = MiGetPage((__int64)&MiSystemPartition, v2, 0x30Au), SlabPage != -1) )
  {
    v4 = (unsigned __int64 *)(48 * SlabPage - 0x21FFFFFFFFF0LL);
    *v4 = ZeroPte;
    MiSetOriginalPtePfnFromFreeList(v4);
  }
  return SlabPage;
}

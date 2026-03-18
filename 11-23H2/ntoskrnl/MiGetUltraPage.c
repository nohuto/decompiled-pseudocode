/*
 * XREFs of MiGetUltraPage @ 0x1402EC570
 * Callers:
 *     MiCreateUltraThreadContextHelper @ 0x1402EC46C (MiCreateUltraThreadContextHelper.c)
 *     MiReplenishUltraPageTables @ 0x140661B7C (MiReplenishUltraPageTables.c)
 * Callees:
 *     MiGetSlabPage @ 0x14023BD70 (MiGetSlabPage.c)
 *     MiGetPage @ 0x14026D360 (MiGetPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402859D4 (MiSetOriginalPtePfnFromFreeList.c)
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

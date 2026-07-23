/*
 * XREFs of HvpFreeBin @ 0x1407E9C28
 * Callers:
 *     HvFreeHivePartial @ 0x1407073B8 (HvFreeHivePartial.c)
 *     HvHiveCleanup @ 0x1407098E0 (HvHiveCleanup.c)
 *     HvpAddBin @ 0x14074F364 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14074F984 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140827334 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x140A1DEE0 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x140A1DFA4 (HvpMapHiveImage.c)
 * Callees:
 *     CmpProtectPool @ 0x14036DFD4 (CmpProtectPool.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     MmFreeIndependentPages @ 0x14087FDF0 (MmFreeIndependentPages.c)
 */

__int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
    return MmFreeIndependentPages(a3, a2);
  CmpProtectPool(a3, a2, 4u);
  return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(a1 + 32))(a3, a2);
}

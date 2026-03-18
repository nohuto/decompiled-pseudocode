/*
 * XREFs of HvpFreeBin @ 0x1407E9958
 * Callers:
 *     HvFreeHivePartial @ 0x1407071A8 (HvFreeHivePartial.c)
 *     HvHiveCleanup @ 0x1407096D0 (HvHiveCleanup.c)
 *     HvpAddBin @ 0x14074F174 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14074F794 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140827034 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x140A1DC30 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x140A1DCF4 (HvpMapHiveImage.c)
 * Callees:
 *     CmpProtectPool @ 0x14036DE34 (CmpProtectPool.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     MmFreeIndependentPages @ 0x14087FBB0 (MmFreeIndependentPages.c)
 */

__int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
    return MmFreeIndependentPages(a3, a2);
  CmpProtectPool(a3, a2, 4u);
  return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(a1 + 32))(a3, a2);
}

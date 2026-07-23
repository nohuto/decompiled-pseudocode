/*
 * XREFs of MiGetWsleContents @ 0x140216FB0
 * Callers:
 *     MiCountSystemImageCommitment @ 0x14020ABB4 (MiCountSystemImageCommitment.c)
 *     MiConvertAndFlushWsleVas @ 0x14020B2DC (MiConvertAndFlushWsleVas.c)
 *     MiSetReadOnlyOnSectionView @ 0x1402152F8 (MiSetReadOnlyOnSectionView.c)
 *     MiOutSwapWorkingSetPte @ 0x140215660 (MiOutSwapWorkingSetPte.c)
 *     MiGetPfnProtection @ 0x1402160B4 (MiGetPfnProtection.c)
 *     MiSetWsleProtection @ 0x140216EC0 (MiSetWsleProtection.c)
 *     MiActivePageCombineCandidate @ 0x140216F14 (MiActivePageCombineCandidate.c)
 *     MiCombineWithExisting @ 0x1402179B4 (MiCombineWithExisting.c)
 *     MiTerminateWsle @ 0x140274AE0 (MiTerminateWsle.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiDeleteVa @ 0x14027A850 (MiDeleteVa.c)
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     MiMoveDirtyBitsToPfns @ 0x140285CA0 (MiMoveDirtyBitsToPfns.c)
 *     MiSetPagingOfDriver @ 0x140291014 (MiSetPagingOfDriver.c)
 *     MmProtectPool @ 0x140297250 (MmProtectPool.c)
 *     NtLockVirtualMemory @ 0x1402A33B0 (NtLockVirtualMemory.c)
 *     MmUnmapViewInSystemCache @ 0x1402DA240 (MmUnmapViewInSystemCache.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFEEC (MiTrimSharedPageFromViews.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1BE4 (MiGetWorkingSetInfoList.c)
 *     MiDemoteCombinedPte @ 0x1402F3A44 (MiDemoteCombinedPte.c)
 *     MiMakeVaRangeNoAccess @ 0x14035BDBC (MiMakeVaRangeNoAccess.c)
 *     MiStealPage @ 0x1403BC5BC (MiStealPage.c)
 *     MiProcessVmAccessedInfo @ 0x14046C3BE (MiProcessVmAccessedInfo.c)
 *     MiMakeDriverPageStayResident @ 0x14061A8D8 (MiMakeDriverPageStayResident.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062DC1C (MiDeprioritizeVirtualAddresses.c)
 *     MiUnmapRetpolineStubs @ 0x140641764 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x14064233C (MiClearDriverHotPatchPtes.c)
 *     MiBuildForkPte @ 0x140662750 (MiBuildForkPte.c)
 *     MmFreeLoaderBlock @ 0x140B5B894 (MmFreeLoaderBlock.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetWsleContents(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v6; // r8
  __int64 v7; // rax

  v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = *(_QWORD *)v2;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL
    && v2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v6 = v3 | 0x20;
      v7 = *((_QWORD *)&Flink->Flink + ((v2 >> 3) & 0x1FF));
      if ( (v7 & 0x20) == 0 )
        v6 = v3;
      v3 = v6;
      if ( (v7 & 0x42) != 0 )
        v3 = v6 | 0x42;
    }
  }
  result = v3 >> 60;
  LOBYTE(result) = HIBYTE(v3) & 0xF | (16 * ((v3 >> 60) & 7));
  return result;
}

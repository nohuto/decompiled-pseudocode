/*
 * XREFs of MiGetSessionVm @ 0x14027B520
 * Callers:
 *     MiDeleteSessionPdes @ 0x140226A00 (MiDeleteSessionPdes.c)
 *     MiLockStealSystemVm @ 0x140230F28 (MiLockStealSystemVm.c)
 *     MmCopyMemory @ 0x14026BBB0 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x14026C808 (MiTranslatePageForCopy.c)
 *     MiReturnSystemVa @ 0x14026DAB0 (MiReturnSystemVa.c)
 *     MiInitializeColorBase @ 0x14026E158 (MiInitializeColorBase.c)
 *     MiSystemFault @ 0x140279590 (MiSystemFault.c)
 *     MiTrimSharedPageFromViews @ 0x14027B820 (MiTrimSharedPageFromViews.c)
 *     MiSessionInsertImage @ 0x1402D9A54 (MiSessionInsertImage.c)
 *     MiCountSystemImageCommitment @ 0x1402DBA28 (MiCountSystemImageCommitment.c)
 *     MiSessionRemoveImage @ 0x1402DBD88 (MiSessionRemoveImage.c)
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MiProbeAndLockPrepare @ 0x140319F70 (MiProbeAndLockPrepare.c)
 *     MiSetSystemCodeProtection @ 0x14033EF50 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x14033F41C (MiMakeDriverPagesPrivate.c)
 *     MmProtectPool @ 0x140367190 (MmProtectPool.c)
 *     MiEmptyAccessLogs @ 0x140375ED0 (MiEmptyAccessLogs.c)
 *     MiReplaceImportEntry @ 0x1405905F0 (MiReplaceImportEntry.c)
 *     MiTrimAllSystemPagableMemory @ 0x1405970A0 (MiTrimAllSystemPagableMemory.c)
 *     MiLockPatchIatForDV @ 0x1405A1D20 (MiLockPatchIatForDV.c)
 *     MiMapRetpolineStubs @ 0x1405A1F60 (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x1405A2A48 (MiUnmapRetpolineStubs.c)
 *     MmPrefetchVirtualMemory @ 0x1406EC048 (MmPrefetchVirtualMemory.c)
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MiApplyRequiredSessionDriverHotPatches @ 0x140761E94 (MiApplyRequiredSessionDriverHotPatches.c)
 *     MiCompleteSecureDriverLoad @ 0x14080C354 (MiCompleteSecureDriverLoad.c)
 *     MiApplyDriverHotPatch @ 0x140971068 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x1409779A4 (MiUnapplyDriverHotPatch.c)
 *     MiUnmapPatchTable @ 0x140977DCC (MiUnmapPatchTable.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiGetSessionVm()
{
  unsigned __int64 result; // rax

  result = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
  if ( result )
    result += 192LL;
  return result;
}

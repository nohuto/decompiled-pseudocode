/*
 * XREFs of MiGetSessionVm @ 0x14020B11C
 * Callers:
 *     MiEmptyAccessLogs @ 0x1402005B0 (MiEmptyAccessLogs.c)
 *     MiSessionRemoveImage @ 0x1402009A8 (MiSessionRemoveImage.c)
 *     MiDeleteSessionPdes @ 0x140200FD8 (MiDeleteSessionPdes.c)
 *     MiCountSystemImageCommitment @ 0x14020ABB4 (MiCountSystemImageCommitment.c)
 *     MiSessionInsertImage @ 0x14020AE64 (MiSessionInsertImage.c)
 *     MiInitializeColorBase @ 0x140211F94 (MiInitializeColorBase.c)
 *     MiProbeAndLockPrepare @ 0x140234DB0 (MiProbeAndLockPrepare.c)
 *     MiSystemFault @ 0x1402611A0 (MiSystemFault.c)
 *     MiCopyOnWrite @ 0x14026FDA0 (MiCopyOnWrite.c)
 *     MiLockCode @ 0x140282330 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x140284310 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x140291A50 (MiMakeDriverPagesPrivate.c)
 *     MmCopyMemory @ 0x1402EDB50 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1402EDE44 (MiTranslatePageForCopy.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiLockStealSystemVm @ 0x140398A4C (MiLockStealSystemVm.c)
 *     MiReplaceImportEntry @ 0x14062C6B0 (MiReplaceImportEntry.c)
 *     MmAddRangeToCrashDump @ 0x140630140 (MmAddRangeToCrashDump.c)
 *     MiTrimAllSystemPagableMemory @ 0x140635290 (MiTrimAllSystemPagableMemory.c)
 *     MiLockPatchIatForDV @ 0x1406404A0 (MiLockPatchIatForDV.c)
 *     MiMapRetpolineStubs @ 0x1406406DC (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140641214 (MiUnmapRetpolineStubs.c)
 *     MmPrefetchVirtualMemory @ 0x140681A70 (MmPrefetchVirtualMemory.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiApplyRequiredSessionDriverHotPatches @ 0x140696FEC (MiApplyRequiredSessionDriverHotPatches.c)
 *     MiCompleteSecureDriverLoad @ 0x140885888 (MiCompleteSecureDriverLoad.c)
 *     MiApplyDriverHotPatch @ 0x140A34878 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140A3BD68 (MiUnapplyDriverHotPatch.c)
 *     MiUnmapPatchTable @ 0x140A3C1B0 (MiUnmapPatchTable.c)
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

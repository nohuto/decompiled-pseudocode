/*
 * XREFs of MiCaptureDirtyBitToPfn @ 0x140283100
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x140215660 (MiOutSwapWorkingSetPte.c)
 *     MiLockPageAndSetDirty @ 0x140217514 (MiLockPageAndSetDirty.c)
 *     MiResolveTransitionFault @ 0x1402624D0 (MiResolveTransitionFault.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F1D0 (MmSetAddressRangeModifiedEx.c)
 *     MiDeleteValidSystemPage @ 0x140280810 (MiDeleteValidSystemPage.c)
 *     MiWsleFree @ 0x1402813A0 (MiWsleFree.c)
 *     MiSetSystemCodeProtection @ 0x140284310 (MiSetSystemCodeProtection.c)
 *     MiMakePteClean @ 0x140285870 (MiMakePteClean.c)
 *     MiTrimSystemImagePages @ 0x1402910F4 (MiTrimSystemImagePages.c)
 *     MmProtectPool @ 0x140296FC0 (MmProtectPool.c)
 *     MiDeletePteList @ 0x1402D2450 (MiDeletePteList.c)
 *     MiDeleteBatch @ 0x1402D5F70 (MiDeleteBatch.c)
 *     MmUnmapViewInSystemCache @ 0x1402D9FB0 (MmUnmapViewInSystemCache.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiResolveProtoCombine @ 0x1402E3AF8 (MiResolveProtoCombine.c)
 *     MiLockPagedAddress @ 0x1402ED4F0 (MiLockPagedAddress.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140324E4C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiMakeFaultPfnActive @ 0x140334EE0 (MiMakeFaultPfnActive.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140348168 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403A9D34 (MmDbgMarkPfnModifiedWorker.c)
 *     MiStealPage @ 0x1403BC3DC (MiStealPage.c)
 *     MiMakeOutswappedPageResident @ 0x14061856C (MiMakeOutswappedPageResident.c)
 *     MiLockDriverPageRange @ 0x140619E30 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x14062C6B0 (MiReplaceImportEntry.c)
 *     MiCanBatchSystemCacheUnmapPages @ 0x14062EAF4 (MiCanBatchSystemCacheUnmapPages.c)
 *     MiCompleteSecureProcessFault @ 0x140645B98 (MiCompleteSecureProcessFault.c)
 *     MmUpdateUserShadowStackValue @ 0x140646780 (MmUpdateUserShadowStackValue.c)
 *     MiBuildForkPte @ 0x140662200 (MiBuildForkPte.c)
 *     MiScanPagefileSpace @ 0x140A32BE0 (MiScanPagefileSpace.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140348CB4 (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiCaptureDirtyBitToPfn(__int64 a1)
{
  unsigned __int8 v1; // dl
  __int64 result; // rax
  _QWORD *v4; // rcx

  v1 = *(_BYTE *)(a1 + 34);
  result = 0LL;
  if ( (v1 & 0x10) == 0 )
  {
    v4 = (_QWORD *)(a1 + 16);
    if ( (((*v4 & 0x400LL) == 0) & (unsigned __int8)~(v1 >> 3)) != 0 )
      result = MiCapturePageFileInfoInline(v4, 1LL, 0LL);
    *(_BYTE *)(a1 + 34) |= 0x10u;
  }
  return result;
}

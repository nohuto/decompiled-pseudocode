/*
 * XREFs of KeGenericCallDpc @ 0x140217420
 * Callers:
 *     KeSwapDirectoryTableBase @ 0x140216C28 (KeSwapDirectoryTableBase.c)
 *     MiSwapStackPage @ 0x140249930 (MiSwapStackPage.c)
 *     MiDbgCopyMemory @ 0x14028FA14 (MiDbgCopyMemory.c)
 *     KeSetSystemTime @ 0x1403B6B94 (KeSetSystemTime.c)
 *     MiFreeUnusedPfnPages @ 0x1403B7CB0 (MiFreeUnusedPfnPages.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403DADE0 (MiInitializeWorkingSetManagerParameters.c)
 *     KeAbCrossThreadDelete @ 0x1405757C0 (KeAbCrossThreadDelete.c)
 *     MiJumpStack @ 0x140590CD0 (MiJumpStack.c)
 *     MiStartDpcGang @ 0x1405C0634 (MiStartDpcGang.c)
 *     ExpTrackTableInsertLimit @ 0x14063BE80 (ExpTrackTableInsertLimit.c)
 *     EtwpFreeLoggerContext @ 0x1406D1830 (EtwpFreeLoggerContext.c)
 *     EtwpUpdateFilterData @ 0x14078F198 (EtwpUpdateFilterData.c)
 *     ExGetPoolTagInfo @ 0x1407F9820 (ExGetPoolTagInfo.c)
 *     KeConfigureHeteroProcessors @ 0x14095FD08 (KeConfigureHeteroProcessors.c)
 *     MmSetPermanentCacheAttribute @ 0x14096C8D0 (MmSetPermanentCacheAttribute.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x14096E960 (MiSpecialPurposeMemoryRemoved.c)
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x14096EAB0 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 *     MiApplyImageHotPatch @ 0x140971B68 (MiApplyImageHotPatch.c)
 *     KiInitializeDynamicProcessor @ 0x140A693D8 (KiInitializeDynamicProcessor.c)
 *     ExpAeThresholdInitialization @ 0x140B1A290 (ExpAeThresholdInitialization.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x14035BB4C (KeGenericProcessorCallback.c)
 */

__int64 __fastcall KeGenericCallDpc(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return ((__int64 (__fastcall *)(_QWORD, __int64 (__fastcall *)(), _QWORD *, __int64))KeGenericProcessorCallback)(
           0LL,
           KiGenericCallDpcWorker,
           v3,
           1LL);
}

/*
 * XREFs of DbgPrint @ 0x14032A6F0
 * Callers:
 *     SepCreateTokenEx @ 0x140229710 (SepCreateTokenEx.c)
 *     CcInitializeCacheMapInternal @ 0x14025E8D0 (CcInitializeCacheMapInternal.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x140346A5C (CcInsertIntoCleanSharedCacheMapList.c)
 *     HalpAcpiGetFacsMapping @ 0x140396838 (HalpAcpiGetFacsMapping.c)
 *     x86BiosExecuteInterruptShadowed @ 0x1403BE3E0 (x86BiosExecuteInterruptShadowed.c)
 *     HalReturnToFirmware @ 0x140506960 (HalReturnToFirmware.c)
 *     RtlpAllocateHeap @ 0x1405AB248 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405ABBD8 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405ABFC8 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x1405AC6FC (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405AC83C (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405AD04C (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x1405ADBAC (RtlpInsertFreeBlock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1405B1640 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpFindUCREntry @ 0x1405B544C (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1405B58B4 (RtlpPopulateListIndex.c)
 *     RtlpQueryRegistryValues @ 0x1406C59D0 (RtlpQueryRegistryValues.c)
 *     SepDuplicateToken @ 0x140729B80 (SepDuplicateToken.c)
 *     CmNotifyRunDown @ 0x14076E5E4 (CmNotifyRunDown.c)
 *     IopLoadDriver @ 0x1407945D8 (IopLoadDriver.c)
 *     CmpPostApc @ 0x1407D4AD0 (CmpPostApc.c)
 *     RtlCreateHeap @ 0x1407D9080 (RtlCreateHeap.c)
 *     IopQueryLegacyBusInformation @ 0x1407E2568 (IopQueryLegacyBusInformation.c)
 *     RtlDestroyHeap @ 0x1407E9230 (RtlDestroyHeap.c)
 *     SepFilterToken @ 0x1407F1C00 (SepFilterToken.c)
 *     ExpSetPendingUILanguage @ 0x1407FC2E8 (ExpSetPendingUILanguage.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x140845360 (RtlpMuiRegLoadRegistryInfo.c)
 *     IopUnloadDriver @ 0x140857938 (IopUnloadDriver.c)
 *     HalpTimerWatchdogLogReset @ 0x140865B48 (HalpTimerWatchdogLogReset.c)
 *     ObpShutdownCloseHandleProcedure @ 0x14097B240 (ObpShutdownCloseHandleProcedure.c)
 *     RtlLCIDToCultureName @ 0x1409BECF0 (RtlLCIDToCultureName.c)
 *     CmpPostApcRunDown @ 0x140A0F720 (CmpPostApcRunDown.c)
 *     HalpMapNvsArea @ 0x140A96F00 (HalpMapNvsArea.c)
 *     PopWriteHeaderPages @ 0x140AA55E8 (PopWriteHeaderPages.c)
 *     PopWriteImageHeader @ 0x140AA5C98 (PopWriteImageHeader.c)
 *     PoBroadcastSystemState @ 0x140AA6A68 (PoBroadcastSystemState.c)
 *     ViIsBTSSupported @ 0x140AD3B0C (ViIsBTSSupported.c)
 *     HalpAcpiTableCacheInit @ 0x140B48D28 (HalpAcpiTableCacheInit.c)
 *     HalpAcpiFindRsdp @ 0x140B6F7D0 (HalpAcpiFindRsdp.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14032A7B0 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)&Src, va, 1);
}

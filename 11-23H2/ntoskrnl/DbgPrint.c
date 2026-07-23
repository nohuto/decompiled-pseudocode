/*
 * XREFs of DbgPrint @ 0x14032A980
 * Callers:
 *     SepCreateTokenEx @ 0x140229820 (SepCreateTokenEx.c)
 *     CcInitializeCacheMapInternal @ 0x14025EB60 (CcInitializeCacheMapInternal.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x140346CEC (CcInsertIntoCleanSharedCacheMapList.c)
 *     HalpAcpiGetFacsMapping @ 0x140396A18 (HalpAcpiGetFacsMapping.c)
 *     x86BiosExecuteInterruptShadowed @ 0x1403BE5C0 (x86BiosExecuteInterruptShadowed.c)
 *     HalReturnToFirmware @ 0x140506EB0 (HalReturnToFirmware.c)
 *     RtlpAllocateHeap @ 0x1405AB7B8 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405AC148 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405AC538 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x1405ACC6C (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405ACDAC (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405AD5BC (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x1405AE11C (RtlpInsertFreeBlock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1405B1BB0 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpFindUCREntry @ 0x1405B59BC (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1405B5E24 (RtlpPopulateListIndex.c)
 *     RtlpQueryRegistryValues @ 0x1406C5A00 (RtlpQueryRegistryValues.c)
 *     SepDuplicateToken @ 0x140729D80 (SepDuplicateToken.c)
 *     CmNotifyRunDown @ 0x14076E7D4 (CmNotifyRunDown.c)
 *     IopLoadDriver @ 0x1407947C8 (IopLoadDriver.c)
 *     CmpPostApc @ 0x1407D4DA0 (CmpPostApc.c)
 *     RtlCreateHeap @ 0x1407D9350 (RtlCreateHeap.c)
 *     IopQueryLegacyBusInformation @ 0x1407E2838 (IopQueryLegacyBusInformation.c)
 *     RtlDestroyHeap @ 0x1407E9500 (RtlDestroyHeap.c)
 *     SepFilterToken @ 0x1407F1ED0 (SepFilterToken.c)
 *     ExpSetPendingUILanguage @ 0x1407FC5B8 (ExpSetPendingUILanguage.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x140845660 (RtlpMuiRegLoadRegistryInfo.c)
 *     IopUnloadDriver @ 0x140857B78 (IopUnloadDriver.c)
 *     HalpTimerWatchdogLogReset @ 0x140865D88 (HalpTimerWatchdogLogReset.c)
 *     ObpShutdownCloseHandleProcedure @ 0x14097B440 (ObpShutdownCloseHandleProcedure.c)
 *     RtlLCIDToCultureName @ 0x1409BEEF0 (RtlLCIDToCultureName.c)
 *     CmpPostApcRunDown @ 0x140A0F9D0 (CmpPostApcRunDown.c)
 *     HalpMapNvsArea @ 0x140A96D70 (HalpMapNvsArea.c)
 *     PopWriteHeaderPages @ 0x140AA5458 (PopWriteHeaderPages.c)
 *     PopWriteImageHeader @ 0x140AA5B08 (PopWriteImageHeader.c)
 *     PoBroadcastSystemState @ 0x140AA68D8 (PoBroadcastSystemState.c)
 *     ViIsBTSSupported @ 0x140AD3AFC (ViIsBTSSupported.c)
 *     HalpAcpiTableCacheInit @ 0x140B48D28 (HalpAcpiTableCacheInit.c)
 *     HalpAcpiFindRsdp @ 0x140B6F7D0 (HalpAcpiFindRsdp.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14032AA40 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)&Src, 0x65u, 3u, va, 1);
}

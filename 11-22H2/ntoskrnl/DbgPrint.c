/*
 * XREFs of DbgPrint @ 0x14032A510
 * Callers:
 *     SepCreateTokenEx @ 0x140229730 (SepCreateTokenEx.c)
 *     CcInitializeCacheMapInternal @ 0x14025E7B0 (CcInitializeCacheMapInternal.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14034656C (CcInsertIntoCleanSharedCacheMapList.c)
 *     HalpAcpiGetFacsMapping @ 0x140394CB8 (HalpAcpiGetFacsMapping.c)
 *     x86BiosExecuteInterruptShadowed @ 0x1403BDD80 (x86BiosExecuteInterruptShadowed.c)
 *     HalReturnToFirmware @ 0x140506A70 (HalReturnToFirmware.c)
 *     RtlpAllocateHeap @ 0x1405AB2D8 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405ABC68 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405AC058 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x1405AC78C (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405AC8CC (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405AD0DC (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x1405ADC3C (RtlpInsertFreeBlock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1405B16D0 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpFindUCREntry @ 0x1405B54DC (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1405B5944 (RtlpPopulateListIndex.c)
 *     RtlpQueryRegistryValues @ 0x1406C5A80 (RtlpQueryRegistryValues.c)
 *     SepDuplicateToken @ 0x140729BF0 (SepDuplicateToken.c)
 *     CmNotifyRunDown @ 0x14076EAF4 (CmNotifyRunDown.c)
 *     IopLoadDriver @ 0x140794AE8 (IopLoadDriver.c)
 *     CmpPostApc @ 0x1407D5050 (CmpPostApc.c)
 *     RtlCreateHeap @ 0x1407D9600 (RtlCreateHeap.c)
 *     IopQueryLegacyBusInformation @ 0x1407E2AE8 (IopQueryLegacyBusInformation.c)
 *     RtlDestroyHeap @ 0x1407E97B0 (RtlDestroyHeap.c)
 *     SepFilterToken @ 0x1407F2180 (SepFilterToken.c)
 *     ExpSetPendingUILanguage @ 0x1407FC998 (ExpSetPendingUILanguage.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1408470F0 (RtlpMuiRegLoadRegistryInfo.c)
 *     IopUnloadDriver @ 0x1408585F4 (IopUnloadDriver.c)
 *     HalpTimerWatchdogLogReset @ 0x140866018 (HalpTimerWatchdogLogReset.c)
 *     ObpShutdownCloseHandleProcedure @ 0x14097B2F0 (ObpShutdownCloseHandleProcedure.c)
 *     RtlLCIDToCultureName @ 0x1409BEDA0 (RtlLCIDToCultureName.c)
 *     CmpPostApcRunDown @ 0x140A0F7D0 (CmpPostApcRunDown.c)
 *     HalpMapNvsArea @ 0x140A96FC0 (HalpMapNvsArea.c)
 *     PopWriteHeaderPages @ 0x140AA56A8 (PopWriteHeaderPages.c)
 *     PopWriteImageHeader @ 0x140AA5D58 (PopWriteImageHeader.c)
 *     PoBroadcastSystemState @ 0x140AA6B28 (PoBroadcastSystemState.c)
 *     ViIsBTSSupported @ 0x140AD4ADC (ViIsBTSSupported.c)
 *     HalpAcpiTableCacheInit @ 0x140B4C428 (HalpAcpiTableCacheInit.c)
 *     HalpAcpiFindRsdp @ 0x140B707BC (HalpAcpiFindRsdp.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14032A5D0 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)&Src, 0x65u, 3u, va, 1);
}

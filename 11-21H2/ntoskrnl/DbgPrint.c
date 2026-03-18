/*
 * XREFs of DbgPrint @ 0x140369BD0
 * Callers:
 *     SepCreateTokenEx @ 0x1402022FC (SepCreateTokenEx.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1402368F4 (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     x86BiosExecuteInterruptShadowed @ 0x1403A2480 (x86BiosExecuteInterruptShadowed.c)
 *     HalpAcpiGetFacsMapping @ 0x1403B8198 (HalpAcpiGetFacsMapping.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     RtlpAllocateHeap @ 0x1405E80B0 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405E8A08 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405E8DF8 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x1405E952C (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405E966C (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405E9E8C (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x1405EA9DC (RtlpInsertFreeBlock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1405EE268 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpFindUCREntry @ 0x1405F2358 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1405F27C0 (RtlpPopulateListIndex.c)
 *     CmpPostApc @ 0x1406CEBA0 (CmpPostApc.c)
 *     IopQueryLegacyBusInformation @ 0x1406E636C (IopQueryLegacyBusInformation.c)
 *     RtlDestroyHeap @ 0x1406E9E30 (RtlDestroyHeap.c)
 *     IopLoadDriver @ 0x14074A178 (IopLoadDriver.c)
 *     RtlpQueryRegistryValues @ 0x140781F40 (RtlpQueryRegistryValues.c)
 *     SepFilterToken @ 0x14078E3F0 (SepFilterToken.c)
 *     CmNotifyRunDown @ 0x14079FD44 (CmNotifyRunDown.c)
 *     SepDuplicateToken @ 0x1407CDED0 (SepDuplicateToken.c)
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
 *     ExpSetPendingUILanguage @ 0x1407F44F0 (ExpSetPendingUILanguage.c)
 *     HalpTimerWatchdogLogReset @ 0x1408247DC (HalpTimerWatchdogLogReset.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x14082FBD4 (RtlpMuiRegLoadRegistryInfo.c)
 *     IopUnloadDriver @ 0x140856DC0 (IopUnloadDriver.c)
 *     CmpPostApcRunDown @ 0x140910210 (CmpPostApcRunDown.c)
 *     KeSetTracepoint @ 0x140962320 (KeSetTracepoint.c)
 *     ObpShutdownCloseHandleProcedure @ 0x140984330 (ObpShutdownCloseHandleProcedure.c)
 *     RtlLCIDToCultureName @ 0x1409BB670 (RtlLCIDToCultureName.c)
 *     PoBroadcastSystemState @ 0x140A4A768 (PoBroadcastSystemState.c)
 *     PopWriteHeaderPages @ 0x140A4DEAC (PopWriteHeaderPages.c)
 *     HalpMapNvsArea @ 0x140A52CF4 (HalpMapNvsArea.c)
 *     PopWriteImageHeader @ 0x140A6B59C (PopWriteImageHeader.c)
 *     ViIsBTSSupported @ 0x140A930EC (ViIsBTSSupported.c)
 *     HalpAcpiFindRsdp @ 0x140AF9858 (HalpAcpiFindRsdp.c)
 *     HalpAcpiTableCacheInit @ 0x140AF9A94 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140369C50 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)&Src, va, 1);
}

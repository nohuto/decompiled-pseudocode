/*
 * XREFs of IopLiveDumpIsTracingEnabled @ 0x140559D90
 * Callers:
 *     IopLiveDumpTrace @ 0x14055A08C (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure @ 0x14055A0D0 (IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x14055A158 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x14055A284 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x14055A410 (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 *     IopLiveDumpTraceCaptureMemoryPages @ 0x14055A55C (IopLiveDumpTraceCaptureMemoryPages.c)
 *     IopLiveDumpTraceCaptureProcessorContextDuration @ 0x14055A65C (IopLiveDumpTraceCaptureProcessorContextDuration.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x14055A7B8 (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x14055A99C (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x14055AADC (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure @ 0x14055AC2C (IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x14055ACB0 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14055AEB4 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x14055AF18 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x14055B074 (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x14055B1D0 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x14055B228 (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x14055B280 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x14055B2E0 (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpTraceOpenVMMemoryPartitionFailure @ 0x14055B398 (IopLiveDumpTraceOpenVMMemoryPartitionFailure.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x14055B41C (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 *     IopLiveDumpTraceQueryHvlDumpSizeFailure @ 0x14055B594 (IopLiveDumpTraceQueryHvlDumpSizeFailure.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x14055B618 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x14055B6AC (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x14055B704 (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x14055B75C (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     IopLiveDumpRegisterWnfNotificationCallback @ 0x1408614A4 (IopLiveDumpRegisterWnfNotificationCallback.c)
 *     IoCaptureLiveDump @ 0x14094B9E8 (IoCaptureLiveDump.c)
 *     IopLiveDumpPolicyChangeWnfCallback @ 0x14094EA80 (IopLiveDumpPolicyChangeWnfCallback.c)
 *     IopLiveDumpTraceDumpDisabledOnBoot @ 0x14094F074 (IopLiveDumpTraceDumpDisabledOnBoot.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140A9A514 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x140A9BA00 (IopLiveDumpMarkImportantDumpData.c)
 * Callees:
 *     <none>
 */

bool IopLiveDumpIsTracingEnabled()
{
  return IopLiveDumpEtwRegHandle && IopLiveDumpEtwEnabled != 0;
}

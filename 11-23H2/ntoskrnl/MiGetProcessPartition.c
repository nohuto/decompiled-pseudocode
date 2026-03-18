/*
 * XREFs of MiGetProcessPartition @ 0x140275694
 * Callers:
 *     MiInSwapStore @ 0x1406816C4 (MiInSwapStore.c)
 *     MiAllocateVirtualMemory @ 0x1406F7220 (MiAllocateVirtualMemory.c)
 *     MiChargeFullProcessCommitment @ 0x1406F7800 (MiChargeFullProcessCommitment.c)
 *     MmQueryVirtualMemory @ 0x1406F8350 (MmQueryVirtualMemory.c)
 *     MiInsertVadCharges @ 0x1406FA8B0 (MiInsertVadCharges.c)
 *     MiRemoveVadCharges @ 0x1406FB440 (MiRemoveVadCharges.c)
 *     MiReleaseVadEventBlocks @ 0x1406FB5DC (MiReleaseVadEventBlocks.c)
 *     MmDeleteProcessAddressSpace @ 0x1407059E8 (MmDeleteProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x1407060AC (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x140706194 (MiAllocateTopLevelPage.c)
 *     MiDeleteVadBitmap @ 0x140706BB4 (MiDeleteVadBitmap.c)
 *     MiReserveUserMemory @ 0x14071F3E0 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14071FA58 (MmCleanProcessAddressSpace.c)
 *     MiDecommitRegion @ 0x140744560 (MiDecommitRegion.c)
 *     MiReturnFullProcessCommitment @ 0x140764E54 (MiReturnFullProcessCommitment.c)
 *     MiInitializePartialVad @ 0x14076D6EC (MiInitializePartialVad.c)
 *     MiSessionCreate @ 0x1407A900C (MiSessionCreate.c)
 *     VmpPauseResumeNotify @ 0x1409DD314 (VmpPauseResumeNotify.c)
 *     MmRotatePhysicalView @ 0x140A31BD0 (MmRotatePhysicalView.c)
 *     MiReturnVadCharges @ 0x140A3C4A4 (MiReturnVadCharges.c)
 *     MiCreateVsmEnclave @ 0x140A3DAC0 (MiCreateVsmEnclave.c)
 *     MiAllocateUserPhysicalPages @ 0x140A40358 (MiAllocateUserPhysicalPages.c)
 *     MiDeleteAweInfoPages @ 0x140A41A90 (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x140A42320 (NtFreeUserPhysicalPages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x140A431D0 (MiInSwapSharedWorkingSetWorker.c)
 *     MmInSwapVirtualAddresses @ 0x140A43460 (MmInSwapVirtualAddresses.c)
 *     MiLogCommitRequestFailed @ 0x140A43954 (MiLogCommitRequestFailed.c)
 *     MiReferenceNonPagedMemoryProcessList @ 0x140A46110 (MiReferenceNonPagedMemoryProcessList.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A47CF8 (MiFinishPlaceholderVadReplacement.c)
 *     MmPerformMemoryListCommand @ 0x140A884BC (MmPerformMemoryListCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(a1 + 1838));
}

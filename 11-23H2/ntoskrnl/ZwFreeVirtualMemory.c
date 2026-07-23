/*
 * XREFs of ZwFreeVirtualMemory @ 0x14041B4B0
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14031CDB8 (SepRmDispatchDataToLsa.c)
 *     RtlpDeCommitFreeBlock @ 0x1405ACDAC (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x1405AD368 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x1405AD818 (RtlpFreeHeap.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1405ADD90 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     DifZwFreeVirtualMemoryWrapper @ 0x1405F0E80 (DifZwFreeVirtualMemoryWrapper.c)
 *     WbFreeMemoryBlock @ 0x1407646DC (WbFreeMemoryBlock.c)
 *     PspExitThread @ 0x14076DC1C (PspExitThread.c)
 *     PspSetupUserStack @ 0x140774134 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x14077426C (RtlCreateUserStack.c)
 *     RtlCreateHeap @ 0x1407D9350 (RtlCreateHeap.c)
 *     RtlpWow64CreateUserStack @ 0x1407DE750 (RtlpWow64CreateUserStack.c)
 *     PspDeleteUserStack @ 0x1407E83A4 (PspDeleteUserStack.c)
 *     RtlDestroyHeap @ 0x1407E9500 (RtlDestroyHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140939E40 (DbgkUserReportWorkRoutine.c)
 *     RtlpDestroyHeapSegment @ 0x1409BE560 (RtlpDestroyHeapSegment.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1409D1D74 (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x1409F00EC (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x140A00E10 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}

/*
 * XREFs of ZwFreeVirtualMemory @ 0x14041B120
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14031CB28 (SepRmDispatchDataToLsa.c)
 *     RtlpDeCommitFreeBlock @ 0x1405AC83C (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x1405ACDF8 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x1405AD2A8 (RtlpFreeHeap.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1405AD820 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     DifZwFreeVirtualMemoryWrapper @ 0x1405F0910 (DifZwFreeVirtualMemoryWrapper.c)
 *     WbFreeMemoryBlock @ 0x1407644EC (WbFreeMemoryBlock.c)
 *     PspExitThread @ 0x14076DA2C (PspExitThread.c)
 *     PspSetupUserStack @ 0x140773F44 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x14077407C (RtlCreateUserStack.c)
 *     RtlCreateHeap @ 0x1407D9080 (RtlCreateHeap.c)
 *     RtlpWow64CreateUserStack @ 0x1407DE480 (RtlpWow64CreateUserStack.c)
 *     PspDeleteUserStack @ 0x1407E80D4 (PspDeleteUserStack.c)
 *     RtlDestroyHeap @ 0x1407E9230 (RtlDestroyHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140939C40 (DbgkUserReportWorkRoutine.c)
 *     RtlpDestroyHeapSegment @ 0x1409BE360 (RtlpDestroyHeapSegment.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1409D1B74 (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x1409EFE5C (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x140A00B80 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress);
}

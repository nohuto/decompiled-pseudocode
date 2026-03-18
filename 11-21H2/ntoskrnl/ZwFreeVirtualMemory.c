/*
 * XREFs of ZwFreeVirtualMemory @ 0x14041BB20
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1402037E8 (SepRmDispatchDataToLsa.c)
 *     RtlpDeCommitFreeBlock @ 0x1405E966C (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x1405E9C3C (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x1405EA0E4 (RtlpFreeHeap.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1405EA650 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     DifZwFreeVirtualMemoryWrapper @ 0x140620A60 (DifZwFreeVirtualMemoryWrapper.c)
 *     RtlpWow64CreateUserStack @ 0x1406C9D2C (RtlpWow64CreateUserStack.c)
 *     PspDeleteUserStack @ 0x1406E616C (PspDeleteUserStack.c)
 *     RtlDestroyHeap @ 0x1406E9E30 (RtlDestroyHeap.c)
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 *     WbFreeMemoryBlock @ 0x1407E4374 (WbFreeMemoryBlock.c)
 *     PspSetupUserStack @ 0x1407E4964 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x1407E4A98 (RtlCreateUserStack.c)
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140929C60 (DbgkUserReportWorkRoutine.c)
 *     RtlpDestroyHeapSegment @ 0x1409BB454 (RtlpDestroyHeapSegment.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1409CF0D0 (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x1409EDDB0 (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x140A02230 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress);
}

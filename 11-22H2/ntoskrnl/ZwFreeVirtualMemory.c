/*
 * XREFs of ZwFreeVirtualMemory @ 0x14041AA60
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14031C948 (SepRmDispatchDataToLsa.c)
 *     RtlpDeCommitFreeBlock @ 0x1405AC8CC (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x1405ACE88 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x1405AD338 (RtlpFreeHeap.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1405AD8B0 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     DifZwFreeVirtualMemoryWrapper @ 0x1405F09A0 (DifZwFreeVirtualMemoryWrapper.c)
 *     WbFreeMemoryBlock @ 0x1407649FC (WbFreeMemoryBlock.c)
 *     PspExitThread @ 0x14076DF3C (PspExitThread.c)
 *     PspSetupUserStack @ 0x140774454 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x14077458C (RtlCreateUserStack.c)
 *     RtlCreateHeap @ 0x1407D9600 (RtlCreateHeap.c)
 *     RtlpWow64CreateUserStack @ 0x1407DEA00 (RtlpWow64CreateUserStack.c)
 *     PspDeleteUserStack @ 0x1407E8654 (PspDeleteUserStack.c)
 *     RtlDestroyHeap @ 0x1407E97B0 (RtlDestroyHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140939CF0 (DbgkUserReportWorkRoutine.c)
 *     RtlpDestroyHeapSegment @ 0x1409BE410 (RtlpDestroyHeapSegment.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1409D1C24 (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x1409EFF0C (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x140A00C30 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}

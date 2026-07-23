/*
 * XREFs of ZwAllocateVirtualMemory @ 0x14041B3F0
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x140329A7C (PspWow64ThunkProcessParameters.c)
 *     RtlpStdExtendLowerWatermark @ 0x1405A9C70 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1405A9DB0 (RtlpStdExtendUpperWatermark.c)
 *     RtlpExtendHeap @ 0x1405AD368 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1405AD5BC (RtlpFindAndCommitPages.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1405ADD90 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpInitializeHeapSegment @ 0x1405ADE6C (RtlpInitializeHeapSegment.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x1405B6E80 (RtlpHpFixedHeapCommitRoutine.c)
 *     DifZwAllocateVirtualMemoryWrapper @ 0x1405ED130 (DifZwAllocateVirtualMemoryWrapper.c)
 *     EtwpFindUserBufferSpace @ 0x1407092CC (EtwpFindUserBufferSpace.c)
 *     RtlCreateUserStack @ 0x14077426C (RtlCreateUserStack.c)
 *     PspSetupUserProcessAddressSpace @ 0x1407A144C (PspSetupUserProcessAddressSpace.c)
 *     MiCheckForUserStackOverflow @ 0x1407BDC68 (MiCheckForUserStackOverflow.c)
 *     RtlCreateHeap @ 0x1407D9350 (RtlCreateHeap.c)
 *     RtlpWow64CreateUserStack @ 0x1407DE750 (RtlpWow64CreateUserStack.c)
 *     PspSetupReservedUserMappings @ 0x1407DEE9C (PspSetupReservedUserMappings.c)
 *     DbgkUserReportWorkRoutine @ 0x140939E40 (DbgkUserReportWorkRoutine.c)
 *     PspReserveAndCommitUserShadowStack @ 0x1409B1950 (PspReserveAndCommitUserShadowStack.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1409D1D74 (SepAdtCopyToLsaSharedMemory.c)
 *     VmCreateMemoryProcess @ 0x1409DC540 (VmCreateMemoryProcess.c)
 *     ExRaiseHardError @ 0x140A00E10 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}

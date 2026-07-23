/*
 * XREFs of ZwAllocateVirtualMemory @ 0x14041A9A0
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x14032960C (PspWow64ThunkProcessParameters.c)
 *     RtlpStdExtendLowerWatermark @ 0x1405A9790 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1405A98D0 (RtlpStdExtendUpperWatermark.c)
 *     RtlpExtendHeap @ 0x1405ACE88 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1405AD0DC (RtlpFindAndCommitPages.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1405AD8B0 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpInitializeHeapSegment @ 0x1405AD98C (RtlpInitializeHeapSegment.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x1405B69A0 (RtlpHpFixedHeapCommitRoutine.c)
 *     DifZwAllocateVirtualMemoryWrapper @ 0x1405ECC50 (DifZwAllocateVirtualMemoryWrapper.c)
 *     EtwpFindUserBufferSpace @ 0x14070916C (EtwpFindUserBufferSpace.c)
 *     RtlCreateUserStack @ 0x14077458C (RtlCreateUserStack.c)
 *     PspSetupUserProcessAddressSpace @ 0x1407A176C (PspSetupUserProcessAddressSpace.c)
 *     MiCheckForUserStackOverflow @ 0x1407BDF28 (MiCheckForUserStackOverflow.c)
 *     RtlCreateHeap @ 0x1407D9600 (RtlCreateHeap.c)
 *     RtlpWow64CreateUserStack @ 0x1407DEA00 (RtlpWow64CreateUserStack.c)
 *     PspSetupReservedUserMappings @ 0x1407DF14C (PspSetupReservedUserMappings.c)
 *     DbgkUserReportWorkRoutine @ 0x140939CF0 (DbgkUserReportWorkRoutine.c)
 *     PspReserveAndCommitUserShadowStack @ 0x1409B1800 (PspReserveAndCommitUserShadowStack.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1409D1C24 (SepAdtCopyToLsaSharedMemory.c)
 *     VmCreateMemoryProcess @ 0x1409DC3F0 (VmCreateMemoryProcess.c)
 *     ExRaiseHardError @ 0x140A00C30 (ExRaiseHardError.c)
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

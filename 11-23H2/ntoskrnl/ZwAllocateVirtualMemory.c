/*
 * XREFs of ZwAllocateVirtualMemory @ 0x14041B060
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x1403297EC (PspWow64ThunkProcessParameters.c)
 *     RtlpStdExtendLowerWatermark @ 0x1405A9700 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1405A9840 (RtlpStdExtendUpperWatermark.c)
 *     RtlpExtendHeap @ 0x1405ACDF8 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1405AD04C (RtlpFindAndCommitPages.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1405AD820 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpInitializeHeapSegment @ 0x1405AD8FC (RtlpInitializeHeapSegment.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x1405B6910 (RtlpHpFixedHeapCommitRoutine.c)
 *     DifZwAllocateVirtualMemoryWrapper @ 0x1405ECBC0 (DifZwAllocateVirtualMemoryWrapper.c)
 *     EtwpFindUserBufferSpace @ 0x1407090BC (EtwpFindUserBufferSpace.c)
 *     RtlCreateUserStack @ 0x14077407C (RtlCreateUserStack.c)
 *     PspSetupUserProcessAddressSpace @ 0x1407A125C (PspSetupUserProcessAddressSpace.c)
 *     MiCheckForUserStackOverflow @ 0x1407BD998 (MiCheckForUserStackOverflow.c)
 *     RtlCreateHeap @ 0x1407D9080 (RtlCreateHeap.c)
 *     RtlpWow64CreateUserStack @ 0x1407DE480 (RtlpWow64CreateUserStack.c)
 *     PspSetupReservedUserMappings @ 0x1407DEBCC (PspSetupReservedUserMappings.c)
 *     DbgkUserReportWorkRoutine @ 0x140939C40 (DbgkUserReportWorkRoutine.c)
 *     PspReserveAndCommitUserShadowStack @ 0x1409B1750 (PspReserveAndCommitUserShadowStack.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1409D1B74 (SepAdtCopyToLsaSharedMemory.c)
 *     VmCreateMemoryProcess @ 0x1409DC340 (VmCreateMemoryProcess.c)
 *     ExRaiseHardError @ 0x140A00B80 (ExRaiseHardError.c)
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
  return KiServiceInternal(ProcessHandle, BaseAddress);
}

/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1800A11B0
 * Callers:
 *     RtlpCommitQueryDebugInfo @ 0x180001934 (RtlpCommitQueryDebugInfo.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800024B0 (RtlCreateQueryDebugBuffer.c)
 *     RtlAllocateHandle @ 0x180003E00 (RtlAllocateHandle.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x180009484 (RtlpAllocDeallocQueryBuffer.c)
 *     RtlpExtendHeap @ 0x180045D18 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180045FCC (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x1800467BC (RtlpCommitBlock.c)
 *     RtlpInitializeHeapSegment @ 0x180047D5C (RtlpInitializeHeapSegment.c)
 *     RtlCreateHeap @ 0x180047FD0 (RtlCreateHeap.c)
 *     RtlpCreateLowFragHeap @ 0x180049364 (RtlpCreateLowFragHeap.c)
 *     EtwpAllocateTraceBufferPool @ 0x18005C6AC (EtwpAllocateTraceBufferPool.c)
 *     RtlInitializeResource @ 0x18005C9D0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18005CB50 (RtlpAddDebugInfoToCriticalSection.c)
 *     EtwpAllocateFreeBuffers @ 0x18005CF3C (EtwpAllocateFreeBuffers.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18007386C (RtlpExtendLowFragHeapSegment.c)
 *     RtlCreateMemoryZone @ 0x180080A60 (RtlCreateMemoryZone.c)
 *     LdrEnsureMrdataHeapExists @ 0x180082074 (LdrEnsureMrdataHeapExists.c)
 *     RtlCreateUserStack @ 0x180082800 (RtlCreateUserStack.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x180082D7C (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlCreateProcessReflection @ 0x1800E2010 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800E25B0 (RtlpProcessReflectionStartup.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800E40C0 (RtlpCopyRemoteDebugInformation.c)
 *     WerpAllocateAndInitializeSid @ 0x1800E8EAC (WerpAllocateAndInitializeSid.c)
 *     GetShipAssertBuffer @ 0x1800E93A4 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800E97F8 (WerEscalationLazyInit.c)
 *     RtlResetStackOverflow @ 0x1800E9DC8 (RtlResetStackOverflow.c)
 *     RtlExtendMemoryZone @ 0x1800F6FE0 (RtlExtendMemoryZone.c)
 *     RtlpAllocateTags @ 0x1800FF9C8 (RtlpAllocateTags.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180100668 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpValidateHeap @ 0x180107E20 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180108404 (RtlpValidateHeapHeaders.c)
 *     RtlStdInitializeStackDatabase @ 0x18010F390 (RtlStdInitializeStackDatabase.c)
 *     RtlpStdExtendLowerWatermark @ 0x18010F838 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x18010F918 (RtlpStdExtendUpperWatermark.c)
 *     RtlpTraceDatabaseAllocate @ 0x180110B88 (RtlpTraceDatabaseAllocate.c)
 *     EtwpInitializeCompression @ 0x1801265D8 (EtwpInitializeCompression.c)
 *     PssNtCaptureSnapshot @ 0x1801287F0 (PssNtCaptureSnapshot.c)
 *     PsspCaptureAuxiliaryPages @ 0x180129B98 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x180129F40 (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureHandleInformation @ 0x18012A714 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18012B150 (PsspCaptureThreadInformation.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18012BECC (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18012C488 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  NTSTATUS result; // eax

  result = 24;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

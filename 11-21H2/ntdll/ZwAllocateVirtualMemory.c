/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1800A4370
 * Callers:
 *     RtlpCommitQueryDebugInfo @ 0x180001970 (RtlpCommitQueryDebugInfo.c)
 *     RtlCreateQueryDebugBuffer @ 0x180002080 (RtlCreateQueryDebugBuffer.c)
 *     RtlExtendMemoryZone @ 0x180002690 (RtlExtendMemoryZone.c)
 *     EtwpAllocateTraceBufferPool @ 0x180008294 (EtwpAllocateTraceBufferPool.c)
 *     EtwpAllocateFreeBuffers @ 0x1800083A0 (EtwpAllocateFreeBuffers.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x18000A55C (RtlpAllocDeallocQueryBuffer.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18001D180 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlInitializeResource @ 0x18001D900 (RtlInitializeResource.c)
 *     RtlpCommitBlock @ 0x180020728 (RtlpCommitBlock.c)
 *     RtlpExtendHeap @ 0x180020860 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180020B1C (RtlpFindAndCommitPages.c)
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1800304FC (RtlpInitializeHeapSegment.c)
 *     RtlpCreateLowFragHeap @ 0x18005347C (RtlpCreateLowFragHeap.c)
 *     PssNtCaptureSnapshot @ 0x180060B70 (PssNtCaptureSnapshot.c)
 *     PsspCaptureThreadInformation @ 0x18006117C (PsspCaptureThreadInformation.c)
 *     PsspCaptureHandleInformation @ 0x1800616F0 (PsspCaptureHandleInformation.c)
 *     PsspCaptureAuxiliaryPages @ 0x180061BDC (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x180061DC4 (PsspCaptureVaSpaceInformation.c)
 *     RtlAllocateHandle @ 0x180062CB0 (RtlAllocateHandle.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18007A2EC (RtlpExtendLowFragHeapSegment.c)
 *     RtlCreateMemoryZone @ 0x180080D80 (RtlCreateMemoryZone.c)
 *     RtlCreateUserStack @ 0x180085730 (RtlCreateUserStack.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1800866D8 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     LdrEnsureMrdataHeapExists @ 0x180087234 (LdrEnsureMrdataHeapExists.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18008BD0C (PsspDuplicateSnapshotLocalToRemote.c)
 *     RtlCreateProcessReflection @ 0x1800E2080 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800E2610 (RtlpProcessReflectionStartup.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800E40F8 (RtlpCopyRemoteDebugInformation.c)
 *     WerpAllocateAndInitializeSid @ 0x1800E8CEC (WerpAllocateAndInitializeSid.c)
 *     GetShipAssertBuffer @ 0x1800E91E4 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800E95C4 (WerEscalationLazyInit.c)
 *     RtlResetStackOverflow @ 0x1800E9C24 (RtlResetStackOverflow.c)
 *     RtlpAllocateTags @ 0x1800FE878 (RtlpAllocateTags.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800FF558 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpValidateHeap @ 0x180106CB0 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x18010728C (RtlpValidateHeapHeaders.c)
 *     RtlStdInitializeStackDatabase @ 0x18010DD90 (RtlStdInitializeStackDatabase.c)
 *     RtlpStdExtendLowerWatermark @ 0x18010E234 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x18010E314 (RtlpStdExtendUpperWatermark.c)
 *     RtlpTraceDatabaseAllocate @ 0x18010F560 (RtlpTraceDatabaseAllocate.c)
 *     EtwpInitializeCompression @ 0x180123718 (EtwpInitializeCompression.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1801264F8 (PsspDuplicateSnapshotRemoteToRemote.c)
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

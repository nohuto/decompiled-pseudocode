/*
 * XREFs of ZwFreeVirtualMemory @ 0x18009F1B0
 * Callers:
 *     RtlCreateQueryDebugBuffer @ 0x180002480 (RtlCreateQueryDebugBuffer.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x1800096A4 (RtlpAllocDeallocQueryBuffer.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180046C90 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHpEnvFreeVA @ 0x180047988 (RtlpHpEnvFreeVA.c)
 *     EtwpFreeLoggerContext @ 0x18005DA64 (EtwpFreeLoggerContext.c)
 *     EtwpAllocateTraceBufferPool @ 0x18005F6AC (EtwpAllocateTraceBufferPool.c)
 *     RtlpInitParameterBlock @ 0x18007FF50 (RtlpInitParameterBlock.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081A04 (LdrEnsureMrdataHeapExists.c)
 *     RtlFreeUserStack @ 0x180087380 (RtlFreeUserStack.c)
 *     RtlDestroyMemoryZone @ 0x180088B50 (RtlDestroyMemoryZone.c)
 *     RtlDestroyHandleTable @ 0x180088BC0 (RtlDestroyHandleTable.c)
 *     LdrCreateEnclave @ 0x1800D8570 (LdrCreateEnclave.c)
 *     LdrDeleteEnclave @ 0x1800D8680 (LdrDeleteEnclave.c)
 *     RtlCreateProcessReflection @ 0x1800E0CE0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800E1280 (RtlpProcessReflectionStartup.c)
 *     WerReportExceptionWorker @ 0x1800E7AD0 (WerReportExceptionWorker.c)
 *     WerpFreeSid @ 0x1800E7E8C (WerpFreeSid.c)
 *     GetShipAssertBuffer @ 0x1800E8074 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800E84C8 (WerEscalationLazyInit.c)
 *     RtlExtendMemoryZone @ 0x1800F5BD0 (RtlExtendMemoryZone.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800FF258 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlStdDeleteStackDatabase @ 0x18010DED0 (RtlStdDeleteStackDatabase.c)
 *     RtlStdInitializeStackDatabase @ 0x18010DF10 (RtlStdInitializeStackDatabase.c)
 *     RtlpTraceDatabaseFree @ 0x18010F754 (RtlpTraceDatabaseFree.c)
 *     EtwpShutdownCompression @ 0x1801251EC (EtwpShutdownCompression.c)
 *     PssNtFreeRemoteSnapshot @ 0x1801278C0 (PssNtFreeRemoteSnapshot.c)
 *     PssNtFreeSnapshot @ 0x180127AD0 (PssNtFreeSnapshot.c)
 *     PsspCaptureAuxiliaryPages @ 0x180128718 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x180128AC0 (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureHandleInformation @ 0x180129294 (PsspCaptureHandleInformation.c)
 *     PsspFreeLinkedHandleList @ 0x18012A258 (PsspFreeLinkedHandleList.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18012AA4C (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18012AFB8 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  NTSTATUS result; // eax

  result = 30;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

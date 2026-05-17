/*
 * XREFs of ZwFreeVirtualMemory @ 0x1800A1270
 * Callers:
 *     RtlCreateQueryDebugBuffer @ 0x1800024B0 (RtlCreateQueryDebugBuffer.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x180009484 (RtlpAllocDeallocQueryBuffer.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180046B30 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHpEnvFreeVA @ 0x180047828 (RtlpHpEnvFreeVA.c)
 *     EtwpFreeLoggerContext @ 0x18005AA6C (EtwpFreeLoggerContext.c)
 *     EtwpAllocateTraceBufferPool @ 0x18005C6AC (EtwpAllocateTraceBufferPool.c)
 *     RtlpInitParameterBlock @ 0x1800805C0 (RtlpInitParameterBlock.c)
 *     LdrEnsureMrdataHeapExists @ 0x180082074 (LdrEnsureMrdataHeapExists.c)
 *     RtlFreeUserStack @ 0x180087B80 (RtlFreeUserStack.c)
 *     RtlDestroyMemoryZone @ 0x180089350 (RtlDestroyMemoryZone.c)
 *     RtlDestroyHandleTable @ 0x1800893C0 (RtlDestroyHandleTable.c)
 *     LdrCreateEnclave @ 0x1800D7F20 (LdrCreateEnclave.c)
 *     LdrDeleteEnclave @ 0x1800D8030 (LdrDeleteEnclave.c)
 *     RtlCreateProcessReflection @ 0x1800E2010 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800E25B0 (RtlpProcessReflectionStartup.c)
 *     WerReportExceptionWorker @ 0x1800E8E00 (WerReportExceptionWorker.c)
 *     WerpFreeSid @ 0x1800E91BC (WerpFreeSid.c)
 *     GetShipAssertBuffer @ 0x1800E93A4 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800E97F8 (WerEscalationLazyInit.c)
 *     RtlExtendMemoryZone @ 0x1800F6FE0 (RtlExtendMemoryZone.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180100668 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlStdDeleteStackDatabase @ 0x18010F380 (RtlStdDeleteStackDatabase.c)
 *     RtlStdInitializeStackDatabase @ 0x18010F3C0 (RtlStdInitializeStackDatabase.c)
 *     RtlpTraceDatabaseFree @ 0x180110C04 (RtlpTraceDatabaseFree.c)
 *     EtwpShutdownCompression @ 0x18012669C (EtwpShutdownCompression.c)
 *     PssNtFreeRemoteSnapshot @ 0x180128D70 (PssNtFreeRemoteSnapshot.c)
 *     PssNtFreeSnapshot @ 0x180128F80 (PssNtFreeSnapshot.c)
 *     PsspCaptureAuxiliaryPages @ 0x180129BC8 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x180129F70 (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureHandleInformation @ 0x18012A744 (PsspCaptureHandleInformation.c)
 *     PsspFreeLinkedHandleList @ 0x18012B708 (PsspFreeLinkedHandleList.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18012BEFC (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18012C484 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 ZwFreeVirtualMemory()
{
  __int64 result; // rax

  result = 30LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

/*
 * XREFs of ZwFreeVirtualMemory @ 0x1800A4430
 * Callers:
 *     RtlCreateQueryDebugBuffer @ 0x180002080 (RtlCreateQueryDebugBuffer.c)
 *     RtlExtendMemoryZone @ 0x180002690 (RtlExtendMemoryZone.c)
 *     EtwpAllocateTraceBufferPool @ 0x180008294 (EtwpAllocateTraceBufferPool.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x18000A55C (RtlpAllocDeallocQueryBuffer.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800206D4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHpFreeVA @ 0x180021224 (RtlpHpFreeVA.c)
 *     RtlpHpVaMgrAlloc @ 0x180055CE8 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x180056194 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrCtxFree @ 0x180057B70 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFree @ 0x180057F40 (RtlpHpVaMgrRangeFree.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180058338 (RtlpCSparseBitmapPageDecommit.c)
 *     PsspFreeLinkedHandleList @ 0x18006147C (PsspFreeLinkedHandleList.c)
 *     PsspCaptureHandleInformation @ 0x1800616F0 (PsspCaptureHandleInformation.c)
 *     PsspCaptureAuxiliaryPages @ 0x180061BDC (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x180061DC4 (PsspCaptureVaSpaceInformation.c)
 *     RtlpInitParameterBlock @ 0x180084354 (RtlpInitParameterBlock.c)
 *     LdrEnsureMrdataHeapExists @ 0x180087234 (LdrEnsureMrdataHeapExists.c)
 *     RtlFreeUserStack @ 0x18008B360 (RtlFreeUserStack.c)
 *     RtlDestroyMemoryZone @ 0x18008B9D0 (RtlDestroyMemoryZone.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18008BD0C (PsspDuplicateSnapshotLocalToRemote.c)
 *     PssNtFreeSnapshot @ 0x18008C0C0 (PssNtFreeSnapshot.c)
 *     RtlDestroyHandleTable @ 0x18008D180 (RtlDestroyHandleTable.c)
 *     EtwpFreeLoggerContext @ 0x180091018 (EtwpFreeLoggerContext.c)
 *     LdrCreateEnclave @ 0x1800D8270 (LdrCreateEnclave.c)
 *     LdrDeleteEnclave @ 0x1800D8380 (LdrDeleteEnclave.c)
 *     RtlCreateProcessReflection @ 0x1800E2080 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800E2610 (RtlpProcessReflectionStartup.c)
 *     WerReportExceptionWorker @ 0x1800E8C40 (WerReportExceptionWorker.c)
 *     WerpFreeSid @ 0x1800E8FFC (WerpFreeSid.c)
 *     GetShipAssertBuffer @ 0x1800E91E4 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800E95C4 (WerEscalationLazyInit.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800FF558 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlStdDeleteStackDatabase @ 0x18010DD50 (RtlStdDeleteStackDatabase.c)
 *     RtlStdInitializeStackDatabase @ 0x18010DD90 (RtlStdInitializeStackDatabase.c)
 *     RtlpTraceDatabaseFree @ 0x18010F5AC (RtlpTraceDatabaseFree.c)
 *     EtwpShutdownCompression @ 0x1801237AC (EtwpShutdownCompression.c)
 *     PssNtFreeRemoteSnapshot @ 0x180125900 (PssNtFreeRemoteSnapshot.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1801264F8 (PsspDuplicateSnapshotRemoteToRemote.c)
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

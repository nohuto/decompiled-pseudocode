/*
 * XREFs of ZwDuplicateObject @ 0x1800A1630
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180001320 (RtlQueryProcessDebugInformation.c)
 *     RtlpWow64SuspendThread @ 0x180001CA0 (RtlpWow64SuspendThread.c)
 *     RtlpWow64OpenThreadProcess @ 0x180001E4C (RtlpWow64OpenThreadProcess.c)
 *     RtlReportSilentProcessExit @ 0x1800512A0 (RtlReportSilentProcessExit.c)
 *     TpCheckTerminateWorker @ 0x18005B050 (TpCheckTerminateWorker.c)
 *     TppPoolUpdateTrimmedWorker @ 0x180069A78 (TppPoolUpdateTrimmedWorker.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x18006C1E0 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlCreateProcessReflection @ 0x1800E2010 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800E25B0 (RtlpProcessReflectionStartup.c)
 *     RtlpWow64SuspendProcess @ 0x1800E7C08 (RtlpWow64SuspendProcess.c)
 *     RtlReportExceptionEx @ 0x1800E8110 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800E8600 (RtlReportExceptionHelper.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180100668 (RtlpHeapPerformCrossProcessQuery.c)
 *     PssNtFreeRemoteSnapshot @ 0x180128D40 (PssNtFreeRemoteSnapshot.c)
 *     PsspWalkHandleTable @ 0x18012AE84 (PsspWalkHandleTable.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18012BECC (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18012C488 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDuplicateObject(
        HANDLE SourceProcessHandle,
        HANDLE SourceHandle,
        HANDLE TargetProcessHandle,
        PHANDLE TargetHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Options)
{
  NTSTATUS result; // eax

  result = 60;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

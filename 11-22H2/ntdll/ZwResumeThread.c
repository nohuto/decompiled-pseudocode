/*
 * XREFs of ZwResumeThread @ 0x18009F830
 * Callers:
 *     RtlpWow64SuspendThread @ 0x180001C70 (RtlpWow64SuspendThread.c)
 *     EtwpCreateEtwThread @ 0x18005EEC0 (EtwpCreateEtwThread.c)
 *     RtlSetProcessDebugInformation @ 0x1800E2BA0 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x1800E7AD0 (WerReportExceptionWorker.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800FF258 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlRemoteCall @ 0x18010BE80 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResumeThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  NTSTATUS result; // eax

  result = 82;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

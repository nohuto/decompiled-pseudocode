/*
 * XREFs of NtTerminateThread @ 0x18009F850
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180001320 (RtlQueryProcessDebugInformation.c)
 *     RtlExitUserProcess @ 0x1800512C0 (RtlExitUserProcess.c)
 *     RtlExitUserThread @ 0x18005DFF0 (RtlExitUserThread.c)
 *     EtwpCreateEtwThread @ 0x18005EEC0 (EtwpCreateEtwThread.c)
 *     LdrpGenericExceptionFilter @ 0x1800E0678 (LdrpGenericExceptionFilter.c)
 *     RtlSetProcessDebugInformation @ 0x1800E2BA0 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x1800E7AD0 (WerReportExceptionWorker.c)
 *     RtlAssert @ 0x1800F8BD0 (RtlAssert.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800FF258 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  NTSTATUS result; // eax

  result = 83;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

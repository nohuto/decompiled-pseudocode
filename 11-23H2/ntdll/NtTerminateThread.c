/*
 * XREFs of NtTerminateThread @ 0x1800A1910
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180001320 (RtlQueryProcessDebugInformation.c)
 *     RtlExitUserProcess @ 0x180051160 (RtlExitUserProcess.c)
 *     RtlExitUserThread @ 0x18005AFF0 (RtlExitUserThread.c)
 *     EtwpCreateEtwThread @ 0x18005BEC0 (EtwpCreateEtwThread.c)
 *     LdrpGenericExceptionFilter @ 0x1800E19A8 (LdrpGenericExceptionFilter.c)
 *     RtlSetProcessDebugInformation @ 0x1800E3ED0 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x1800E8E00 (WerReportExceptionWorker.c)
 *     RtlAssert @ 0x1800F9FE0 (RtlAssert.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180100668 (RtlpHeapPerformCrossProcessQuery.c)
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

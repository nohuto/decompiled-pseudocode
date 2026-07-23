/*
 * XREFs of NtTerminateThread @ 0x1800A4AD0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800013C0 (RtlQueryProcessDebugInformation.c)
 *     RtlExitUserThread @ 0x1800048A0 (RtlExitUserThread.c)
 *     EtwpCreateEtwThread @ 0x180008020 (EtwpCreateEtwThread.c)
 *     RtlExitUserProcess @ 0x180054350 (RtlExitUserProcess.c)
 *     LdrpGenericExceptionFilter @ 0x18008FD68 (LdrpGenericExceptionFilter.c)
 *     RtlSetProcessDebugInformation @ 0x1800E3ED0 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x1800E8C40 (WerReportExceptionWorker.c)
 *     RtlAssert @ 0x1800F8990 (RtlAssert.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800FF558 (RtlpHeapPerformCrossProcessQuery.c)
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

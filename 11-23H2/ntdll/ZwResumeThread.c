/*
 * XREFs of ZwResumeThread @ 0x1800A18F0
 * Callers:
 *     RtlpWow64SuspendThread @ 0x180001CA0 (RtlpWow64SuspendThread.c)
 *     EtwpCreateEtwThread @ 0x18005BEC0 (EtwpCreateEtwThread.c)
 *     RtlSetProcessDebugInformation @ 0x1800E3ED0 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x1800E8E00 (WerReportExceptionWorker.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180100668 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlRemoteCall @ 0x18010D320 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

__int64 ZwResumeThread()
{
  __int64 result; // rax

  result = 82LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

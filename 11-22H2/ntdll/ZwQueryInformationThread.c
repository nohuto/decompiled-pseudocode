/*
 * XREFs of ZwQueryInformationThread @ 0x18009F290
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180001320 (RtlQueryProcessDebugInformation.c)
 *     RtlpWow64SuspendThread @ 0x180001C70 (RtlpWow64SuspendThread.c)
 *     RtlpWow64OpenThreadProcess @ 0x180001E1C (RtlpWow64OpenThreadProcess.c)
 *     RtlExitUserThread @ 0x18005DFF0 (RtlExitUserThread.c)
 *     TpCheckTerminateWorker @ 0x18005E050 (TpCheckTerminateWorker.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18005FF34 (EtwpAddLogHeaderToLogFile.c)
 *     LdrpDetectDetour @ 0x18007145C (LdrpDetectDetour.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x18007E250 (RtlGetThreadWorkOnBehalfTicket.c)
 *     RtlCheckHeldCriticalSections @ 0x180081140 (RtlCheckHeldCriticalSections.c)
 *     RtlSetThreadIsCritical @ 0x180088120 (RtlSetThreadIsCritical.c)
 *     RtlQueryThreadProfiling @ 0x1800D7040 (RtlQueryThreadProfiling.c)
 *     DbgUiConvertStateChangeStructureWorker @ 0x1800D8100 (DbgUiConvertStateChangeStructureWorker.c)
 *     LdrHotPatchNotify @ 0x1800D9A90 (LdrHotPatchNotify.c)
 *     LdrpDoDebuggerBreak @ 0x1800DD294 (LdrpDoDebuggerBreak.c)
 *     RtlSetProcessDebugInformation @ 0x1800E2BA0 (RtlSetProcessDebugInformation.c)
 *     RtlWow64GetThreadContext @ 0x1800E66B0 (RtlWow64GetThreadContext.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x1800E66E0 (RtlWow64GetThreadSelectorEntry.c)
 *     RtlpWow64SuspendProcess @ 0x1800E68D8 (RtlpWow64SuspendProcess.c)
 *     WerpThreadId @ 0x1800E7F58 (WerpThreadId.c)
 *     PsspSampleCounters @ 0x1801281C0 (PsspSampleCounters.c)
 *     PsspDumpObject_Thread @ 0x1801296C0 (PsspDumpObject_Thread.c)
 *     PsspDumpThread @ 0x18012A030 (PsspDumpThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 37;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

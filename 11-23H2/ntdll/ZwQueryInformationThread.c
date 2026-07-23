/*
 * XREFs of ZwQueryInformationThread @ 0x1800A1350
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180001320 (RtlQueryProcessDebugInformation.c)
 *     RtlpWow64SuspendThread @ 0x180001CA0 (RtlpWow64SuspendThread.c)
 *     RtlpWow64OpenThreadProcess @ 0x180001E4C (RtlpWow64OpenThreadProcess.c)
 *     RtlExitUserThread @ 0x18005AFF0 (RtlExitUserThread.c)
 *     TpCheckTerminateWorker @ 0x18005B050 (TpCheckTerminateWorker.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18005D0A4 (EtwpAddLogHeaderToLogFile.c)
 *     LdrpDetectDetour @ 0x180071780 (LdrpDetectDetour.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x18007E8C0 (RtlGetThreadWorkOnBehalfTicket.c)
 *     RtlCheckHeldCriticalSections @ 0x1800817B0 (RtlCheckHeldCriticalSections.c)
 *     RtlSetThreadIsCritical @ 0x180088920 (RtlSetThreadIsCritical.c)
 *     RtlQueryThreadProfiling @ 0x1800D69A0 (RtlQueryThreadProfiling.c)
 *     DbgUiConvertStateChangeStructureWorker @ 0x1800D7AB0 (DbgUiConvertStateChangeStructureWorker.c)
 *     LdrHotPatchNotify @ 0x1800D9440 (LdrHotPatchNotify.c)
 *     LdrpDoDebuggerBreak @ 0x1800DCC44 (LdrpDoDebuggerBreak.c)
 *     RtlSetProcessDebugInformation @ 0x1800E3ED0 (RtlSetProcessDebugInformation.c)
 *     RtlWow64GetThreadContext @ 0x1800E79E0 (RtlWow64GetThreadContext.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x1800E7A10 (RtlWow64GetThreadSelectorEntry.c)
 *     RtlpWow64SuspendProcess @ 0x1800E7C08 (RtlpWow64SuspendProcess.c)
 *     WerpThreadId @ 0x1800E9288 (WerpThreadId.c)
 *     PsspSampleCounters @ 0x180129640 (PsspSampleCounters.c)
 *     PsspDumpObject_Thread @ 0x18012AB40 (PsspDumpObject_Thread.c)
 *     PsspDumpThread @ 0x18012B4B0 (PsspDumpThread.c)
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

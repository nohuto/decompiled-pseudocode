/*
 * XREFs of ZwQueryInformationThread @ 0x1800A4510
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800013C0 (RtlQueryProcessDebugInformation.c)
 *     RtlpWow64SuspendThread @ 0x180001A20 (RtlpWow64SuspendThread.c)
 *     RtlpWow64OpenThreadProcess @ 0x180001BCC (RtlpWow64OpenThreadProcess.c)
 *     RtlExitUserThread @ 0x1800048A0 (RtlExitUserThread.c)
 *     TpCheckTerminateWorker @ 0x180004900 (TpCheckTerminateWorker.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18000851C (EtwpAddLogHeaderToLogFile.c)
 *     PsspSampleCounters @ 0x180060FD8 (PsspSampleCounters.c)
 *     PsspDumpThread @ 0x180061500 (PsspDumpThread.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x180072660 (RtlGetThreadWorkOnBehalfTicket.c)
 *     LdrpDetectDetour @ 0x180074E0C (LdrpDetectDetour.c)
 *     RtlCheckHeldCriticalSections @ 0x180084950 (RtlCheckHeldCriticalSections.c)
 *     RtlSetThreadIsCritical @ 0x18008D310 (RtlSetThreadIsCritical.c)
 *     PsspDumpObject_Thread @ 0x18008D4B0 (PsspDumpObject_Thread.c)
 *     RtlQueryThreadProfiling @ 0x1800D6FD0 (RtlQueryThreadProfiling.c)
 *     DbgUiConvertStateChangeStructureWorker @ 0x1800D7DF0 (DbgUiConvertStateChangeStructureWorker.c)
 *     LdrHotPatchNotify @ 0x1800D9A20 (LdrHotPatchNotify.c)
 *     LdrpDoDebuggerBreak @ 0x1800DCB14 (LdrpDoDebuggerBreak.c)
 *     RtlSetProcessDebugInformation @ 0x1800E3ED0 (RtlSetProcessDebugInformation.c)
 *     RtlWow64GetThreadContext @ 0x1800E7840 (RtlWow64GetThreadContext.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x1800E7870 (RtlWow64GetThreadSelectorEntry.c)
 *     RtlpWow64SuspendProcess @ 0x1800E7A68 (RtlpWow64SuspendProcess.c)
 *     WerpThreadId @ 0x1800E90C8 (WerpThreadId.c)
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

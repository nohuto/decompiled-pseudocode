/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x1800A1BC0
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x18005B380 (RtlWaitForWnfMetaNotification.c)
 *     RtlQueryWnfMetaNotification @ 0x1800862F0 (RtlQueryWnfMetaNotification.c)
 *     SignalStartWerSvc @ 0x1800E7968 (SignalStartWerSvc.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x18010EE10 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryWnfStateNameInformation(
        PCWNF_STATE_NAME StateName,
        WNF_STATE_NAME_INFORMATION NameInfoClass,
        const void *ExplicitScope,
        PVOID InfoBuffer,
        ULONG InfoBufferSize)
{
  NTSTATUS result; // eax

  result = 367;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

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

__int64 NtQueryWnfStateNameInformation()
{
  __int64 result; // rax

  result = 367LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

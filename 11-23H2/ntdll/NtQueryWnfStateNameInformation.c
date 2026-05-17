/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x1800A3C80
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x180060B50 (RtlWaitForWnfMetaNotification.c)
 *     RtlQueryWnfMetaNotification @ 0x180086AF0 (RtlQueryWnfMetaNotification.c)
 *     SignalStartWerSvc @ 0x1800E8C98 (SignalStartWerSvc.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1801102C0 (RtlRaiseCustomSystemEventTrigger.c)
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

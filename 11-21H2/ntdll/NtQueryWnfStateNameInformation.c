/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x1800A6DE0
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x1800596D0 (RtlWaitForWnfMetaNotification.c)
 *     RtlQueryWnfMetaNotification @ 0x18008AE60 (RtlQueryWnfMetaNotification.c)
 *     SignalStartWerSvc @ 0x1800E8AD8 (SignalStartWerSvc.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x18010EBE0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryWnfStateNameInformation()
{
  __int64 result; // rax

  result = 364LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

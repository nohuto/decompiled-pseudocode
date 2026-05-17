/*
 * XREFs of ZwQueryWnfStateData @ 0x1800A1BA0
 * Callers:
 *     RtlQueryWnfStateData @ 0x18005BB10 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x1800872A0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x18010EE10 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x180121254 (RtlpFcNotifyFeatureUsageTarget.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryWnfStateData()
{
  __int64 result; // rax

  result = 366LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

/*
 * XREFs of ZwQueryWnfStateData @ 0x1800A6DC0
 * Callers:
 *     RtlQueryWnfStateData @ 0x18005A3B0 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x18008AD80 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x18010EBE0 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x18011F290 (RtlpFcNotifyFeatureUsageTarget.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryWnfStateData()
{
  __int64 result; // rax

  result = 363LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

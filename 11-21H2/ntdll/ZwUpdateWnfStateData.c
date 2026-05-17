/*
 * XREFs of ZwUpdateWnfStateData @ 0x1800A7BA0
 * Callers:
 *     RtlPublishWnfStateData @ 0x1800847F0 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x18008B2D0 (RtlTestAndPublishWnfStateData.c)
 *     SignalStartWerSvc @ 0x1800E8AD8 (SignalStartWerSvc.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x18010EBE0 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x18011F290 (RtlpFcNotifyFeatureUsageTarget.c)
 * Callees:
 *     <none>
 */

__int64 ZwUpdateWnfStateData()
{
  __int64 result; // rax

  result = 474LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

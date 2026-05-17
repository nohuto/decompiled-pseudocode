/*
 * XREFs of ZwUpdateWnfStateData @ 0x1800A4A60
 * Callers:
 *     RtlPublishWnfStateData @ 0x180080BF0 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180086CE0 (RtlTestAndPublishWnfStateData.c)
 *     SignalStartWerSvc @ 0x1800E8C98 (SignalStartWerSvc.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1801102C0 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x180122704 (RtlpFcNotifyFeatureUsageTarget.c)
 * Callees:
 *     <none>
 */

__int64 ZwUpdateWnfStateData()
{
  __int64 result; // rax

  result = 478LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

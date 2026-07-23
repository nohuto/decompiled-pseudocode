/*
 * XREFs of ZwUpdateWnfStateData @ 0x1800A4A60
 * Callers:
 *     RtlPublishWnfStateData @ 0x180080BF0 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180086CE0 (RtlTestAndPublishWnfStateData.c)
 *     SignalStartWerSvc @ 0x1800E8C98 (SignalStartWerSvc.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180110290 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x1801226D4 (RtlpFcNotifyFeatureUsageTarget.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUpdateWnfStateData(
        PCWNF_STATE_NAME StateName,
        const void *Buffer,
        ULONG Length,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp,
        LOGICAL CheckStamp)
{
  NTSTATUS result; // eax

  result = 478;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

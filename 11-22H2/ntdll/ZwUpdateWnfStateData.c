/*
 * XREFs of ZwUpdateWnfStateData @ 0x1800A29A0
 * Callers:
 *     RtlPublishWnfStateData @ 0x180080580 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x1800864E0 (RtlTestAndPublishWnfStateData.c)
 *     SignalStartWerSvc @ 0x1800E7968 (SignalStartWerSvc.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x18010EE10 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x180121254 (RtlpFcNotifyFeatureUsageTarget.c)
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

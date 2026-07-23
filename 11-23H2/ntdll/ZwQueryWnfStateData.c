/*
 * XREFs of ZwQueryWnfStateData @ 0x1800A3C60
 * Callers:
 *     RtlQueryWnfStateData @ 0x1800612E0 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180087AA0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180110290 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x1801226D4 (RtlpFcNotifyFeatureUsageTarget.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryWnfStateData(
        PCWNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        PWNF_CHANGE_STAMP ChangeStamp,
        PVOID Buffer,
        PULONG BufferSize)
{
  NTSTATUS result; // eax

  result = 366;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

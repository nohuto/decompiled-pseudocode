/*
 * XREFs of NtPowerInformation @ 0x1800A4C40
 * Callers:
 *     RtlpSystemBootStatusRequest @ 0x18008D454 (RtlpSystemBootStatusRequest.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x1800F9150 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x1800F9620 (RtlRestoreSystemBootStatusDefaults.c)
 *     RtlUnlockBootStatusData @ 0x1800F9680 (RtlUnlockBootStatusData.c)
 *     RtlpRecordBootStatusData @ 0x1800F99B8 (RtlpRecordBootStatusData.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x180117DA0 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x180117EA0 (RtlpDestroyExecutionRequiredRequest.c)
 * Callees:
 *     <none>
 */

__int64 NtPowerInformation()
{
  __int64 result; // rax

  result = 95LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

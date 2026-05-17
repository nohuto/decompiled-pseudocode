/*
 * XREFs of NtPowerInformation @ 0x18009F9C0
 * Callers:
 *     RtlpSystemBootStatusRequest @ 0x180088244 (RtlpSystemBootStatusRequest.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x1800F93A0 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x1800F9880 (RtlRestoreSystemBootStatusDefaults.c)
 *     RtlUnlockBootStatusData @ 0x1800F98E0 (RtlUnlockBootStatusData.c)
 *     RtlpRecordBootStatusData @ 0x1800F9C28 (RtlpRecordBootStatusData.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x180118220 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x180118320 (RtlpDestroyExecutionRequiredRequest.c)
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

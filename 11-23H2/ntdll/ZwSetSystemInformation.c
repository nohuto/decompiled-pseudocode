/*
 * XREFs of ZwSetSystemInformation @ 0x1800A45C0
 * Callers:
 *     RtlOverwriteFeatureConfigurationBuffer @ 0x18010FD30 (RtlOverwriteFeatureConfigurationBuffer.c)
 *     RtlSetFeatureConfigurations @ 0x18010FDD0 (RtlSetFeatureConfigurations.c)
 *     RtlpFcUpdateUsageSubscriptions @ 0x18010FFA0 (RtlpFcUpdateUsageSubscriptions.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetSystemInformation()
{
  __int64 result; // rax

  result = 441LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

/*
 * XREFs of ZwSetSystemInformation @ 0x1800A2500
 * Callers:
 *     RtlOverwriteFeatureConfigurationBuffer @ 0x18010E880 (RtlOverwriteFeatureConfigurationBuffer.c)
 *     RtlSetFeatureConfigurations @ 0x18010E920 (RtlSetFeatureConfigurations.c)
 *     RtlpFcUpdateUsageSubscriptions @ 0x18010EAF8 (RtlpFcUpdateUsageSubscriptions.c)
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

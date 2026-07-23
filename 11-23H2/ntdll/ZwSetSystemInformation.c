/*
 * XREFs of ZwSetSystemInformation @ 0x1800A45C0
 * Callers:
 *     RtlOverwriteFeatureConfigurationBuffer @ 0x18010FD00 (RtlOverwriteFeatureConfigurationBuffer.c)
 *     RtlSetFeatureConfigurations @ 0x18010FDA0 (RtlSetFeatureConfigurations.c)
 *     RtlpFcUpdateUsageSubscriptions @ 0x18010FF70 (RtlpFcUpdateUsageSubscriptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength)
{
  NTSTATUS result; // eax

  result = 441;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

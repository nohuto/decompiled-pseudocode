/*
 * XREFs of ZwSetSystemInformation @ 0x1800A7700
 * Callers:
 *     RtlSetFeatureConfigurations @ 0x18010E700 (RtlSetFeatureConfigurations.c)
 *     RtlpFcUpdateUsageSubscriptions @ 0x18010E8C8 (RtlpFcUpdateUsageSubscriptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength)
{
  NTSTATUS result; // eax

  result = 437;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

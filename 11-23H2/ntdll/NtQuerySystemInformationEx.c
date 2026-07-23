/*
 * XREFs of NtQuerySystemInformationEx @ 0x1800A3C20
 * Callers:
 *     RtlGetVersion @ 0x18002F620 (RtlGetVersion.c)
 *     TppPoolUpdateNodeRelation @ 0x18004FCC4 (TppPoolUpdateNodeRelation.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18006E06C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800713C8 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlWow64GetProcessMachines @ 0x18007EFF0 (RtlWow64GetProcessMachines.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x1800818D0 (RtlWow64IsWowGuestMachineSupported.c)
 *     TppQueryMaximumGroupCount @ 0x1800A07A8 (TppQueryMaximumGroupCount.c)
 *     RtlpQueryProcessMachine @ 0x1800E484C (RtlpQueryProcessMachine.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x18010BB20 (RtlpHandleInvalidUserCallTarget.c)
 *     RtlpFcQueryFeatureConfigurationFromKernel @ 0x18010FED0 (RtlpFcQueryFeatureConfigurationFromKernel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQuerySystemInformationEx(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 364;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

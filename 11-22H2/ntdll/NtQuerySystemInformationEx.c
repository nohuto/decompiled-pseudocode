/*
 * XREFs of NtQuerySystemInformationEx @ 0x1800A1B60
 * Callers:
 *     RtlGetVersion @ 0x18002F7F0 (RtlGetVersion.c)
 *     TppPoolUpdateNodeRelation @ 0x18004FE24 (TppPoolUpdateNodeRelation.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18006E06C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800710A4 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlWow64GetProcessMachines @ 0x18007E980 (RtlWow64GetProcessMachines.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x180081260 (RtlWow64IsWowGuestMachineSupported.c)
 *     TppQueryMaximumGroupCount @ 0x18009E7B8 (TppQueryMaximumGroupCount.c)
 *     RtlpQueryProcessMachine @ 0x1800E351C (RtlpQueryProcessMachine.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x18010A6B0 (RtlpHandleInvalidUserCallTarget.c)
 *     RtlpFcQueryFeatureConfigurationFromKernel @ 0x18010EA50 (RtlpFcQueryFeatureConfigurationFromKernel.c)
 * Callees:
 *     <none>
 */

__int64 NtQuerySystemInformationEx()
{
  __int64 result; // rax

  result = 364LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

/*
 * XREFs of ZwGetDevicePowerState @ 0x1800A2E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetDevicePowerState(HANDLE Device, PDEVICE_POWER_STATE State)
{
  NTSTATUS result; // eax

  result = 252;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

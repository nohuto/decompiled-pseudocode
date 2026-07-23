/*
 * XREFs of ZwPlugPlayControl @ 0x1800A3600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPlugPlayControl(
        PLUGPLAY_CONTROL_CLASS PnPControlClass,
        PVOID PnPControlData,
        ULONG PnPControlDataLength)
{
  NTSTATUS result; // eax

  result = 315;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

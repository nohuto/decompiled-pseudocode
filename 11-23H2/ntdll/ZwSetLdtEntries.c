/*
 * XREFs of ZwSetLdtEntries @ 0x1800A44E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetLdtEntries(
        ULONG Selector0,
        ULONG Entry0Low,
        ULONG Entry0Hi,
        ULONG Selector1,
        ULONG Entry1Low,
        ULONG Entry1Hi)
{
  NTSTATUS result; // eax

  result = 434;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

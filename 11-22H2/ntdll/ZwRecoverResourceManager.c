/*
 * XREFs of ZwRecoverResourceManager @ 0x1800A1CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRecoverResourceManager(HANDLE ResourceManagerHandle)
{
  NTSTATUS result; // eax

  result = 375;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

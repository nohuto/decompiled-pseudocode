/*
 * XREFs of NtEnableLastKnownGood @ 0x1800A2B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS NtEnableLastKnownGood(void)
{
  NTSTATUS result; // eax

  result = 228;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

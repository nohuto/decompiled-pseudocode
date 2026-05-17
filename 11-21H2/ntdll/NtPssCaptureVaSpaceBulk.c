/*
 * XREFs of NtPssCaptureVaSpaceBulk @ 0x1800A68C0
 * Callers:
 *     PsspQueryVmBulkMode @ 0x180125C40 (PsspQueryVmBulkMode.c)
 * Callees:
 *     <none>
 */

__int64 NtPssCaptureVaSpaceBulk()
{
  __int64 result; // rax

  result = 323LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

/*
 * XREFs of NtPssCaptureVaSpaceBulk @ 0x1800A3740
 * Callers:
 *     PsspQueryVmBulkMode @ 0x18012A5B0 (PsspQueryVmBulkMode.c)
 * Callees:
 *     <none>
 */

__int64 NtPssCaptureVaSpaceBulk()
{
  __int64 result; // rax

  result = 325LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

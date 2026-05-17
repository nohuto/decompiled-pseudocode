/*
 * XREFs of ZwCancelSynchronousIoFile @ 0x1800A52C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCancelSynchronousIoFile()
{
  __int64 result; // rax

  result = 147LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

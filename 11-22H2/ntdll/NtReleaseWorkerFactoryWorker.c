/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x1800A1D60
 * Callers:
 *     TpPostTask @ 0x18003545C (TpPostTask.c)
 *     TppPrepareDirectParams @ 0x18003683C (TppPrepareDirectParams.c)
 * Callees:
 *     <none>
 */

__int64 NtReleaseWorkerFactoryWorker()
{
  __int64 result; // rax

  result = 380LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

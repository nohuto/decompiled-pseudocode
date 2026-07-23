/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x1800A6F80
 * Callers:
 *     TppPrepareDirectParams @ 0x180017B5C (TppPrepareDirectParams.c)
 *     TpPostTask @ 0x18001B374 (TpPostTask.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax

  result = 377;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

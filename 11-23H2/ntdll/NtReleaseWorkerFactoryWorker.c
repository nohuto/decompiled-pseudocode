/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x1800A3E20
 * Callers:
 *     TpPostTask @ 0x1800352FC (TpPostTask.c)
 *     TppPrepareDirectParams @ 0x1800366DC (TppPrepareDirectParams.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax

  result = 380;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

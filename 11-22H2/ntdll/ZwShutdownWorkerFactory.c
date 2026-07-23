/*
 * XREFs of ZwShutdownWorkerFactory @ 0x1800A2660
 * Callers:
 *     TpReleasePool @ 0x180084E80 (TpReleasePool.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwShutdownWorkerFactory(HANDLE WorkerFactoryHandle, LONG *PendingWorkerCount)
{
  NTSTATUS result; // eax

  result = 452;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

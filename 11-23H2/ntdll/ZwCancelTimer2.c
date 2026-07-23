/*
 * XREFs of ZwCancelTimer2 @ 0x1800A2120
 * Callers:
 *     TppUpdateSubQueueTimer @ 0x180030C28 (TppUpdateSubQueueTimer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelTimer2(HANDLE TimerHandle, PT2_CANCEL_PARAMETERS Parameters)
{
  NTSTATUS result; // eax

  result = 148;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

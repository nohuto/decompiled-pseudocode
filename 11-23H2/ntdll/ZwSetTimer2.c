/*
 * XREFs of ZwSetTimer2 @ 0x1800A4640
 * Callers:
 *     TppUpdateSubQueueTimer @ 0x180030C28 (TppUpdateSubQueueTimer.c)
 *     TppTimerQueueExpiration @ 0x1800313B0 (TppTimerQueueExpiration.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetTimer2()
{
  __int64 result; // rax

  result = 445LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

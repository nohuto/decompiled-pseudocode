/*
 * XREFs of ZwSetTimer2 @ 0x1800A7780
 * Callers:
 *     TppTimerQueueExpiration @ 0x18001CE00 (TppTimerQueueExpiration.c)
 *     TppUpdateSubQueueTimer @ 0x18001E8C8 (TppUpdateSubQueueTimer.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetTimer2()
{
  __int64 result; // rax

  result = 441LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

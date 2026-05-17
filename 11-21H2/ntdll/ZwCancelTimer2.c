/*
 * XREFs of ZwCancelTimer2 @ 0x1800A52E0
 * Callers:
 *     TppUpdateSubQueueTimer @ 0x18001E8C8 (TppUpdateSubQueueTimer.c)
 * Callees:
 *     <none>
 */

__int64 ZwCancelTimer2()
{
  __int64 result; // rax

  result = 148LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

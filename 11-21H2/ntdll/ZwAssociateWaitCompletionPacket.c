/*
 * XREFs of ZwAssociateWaitCompletionPacket @ 0x1800A5260
 * Callers:
 *     TppTimerQueueExpiration @ 0x18001CE00 (TppTimerQueueExpiration.c)
 *     TppSetupNextWait @ 0x18001F61C (TppSetupNextWait.c)
 *     TppInitializeTimerSubQueue @ 0x180074BDC (TppInitializeTimerSubQueue.c)
 * Callees:
 *     <none>
 */

__int64 ZwAssociateWaitCompletionPacket()
{
  __int64 result; // rax

  result = 144LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

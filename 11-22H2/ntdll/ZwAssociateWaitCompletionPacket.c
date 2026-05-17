/*
 * XREFs of ZwAssociateWaitCompletionPacket @ 0x18009FFE0
 * Callers:
 *     TppSetupNextWait @ 0x18002FEE0 (TppSetupNextWait.c)
 *     TppTimerQueueExpiration @ 0x180031510 (TppTimerQueueExpiration.c)
 *     TppInitializeTimerSubQueue @ 0x18004D258 (TppInitializeTimerSubQueue.c)
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

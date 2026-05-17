/*
 * XREFs of ZwAssociateWaitCompletionPacket @ 0x1800A20A0
 * Callers:
 *     TppSetupNextWait @ 0x18002FD10 (TppSetupNextWait.c)
 *     TppTimerQueueExpiration @ 0x1800313B0 (TppTimerQueueExpiration.c)
 *     TppInitializeTimerSubQueue @ 0x18004D0F8 (TppInitializeTimerSubQueue.c)
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

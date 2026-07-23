/*
 * XREFs of ZwCancelWaitCompletionPacket @ 0x1800A5300
 * Callers:
 *     TppCancelWait @ 0x18001EC80 (TppCancelWait.c)
 *     TppWaitTimerExpiration @ 0x18008AF58 (TppWaitTimerExpiration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  NTSTATUS result; // eax

  result = 149;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

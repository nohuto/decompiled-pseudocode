/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x1800A07E0
 * Callers:
 *     TppInitializeTimerSubQueue @ 0x18004D258 (TppInitializeTimerSubQueue.c)
 *     TpAllocWait @ 0x18004DAE0 (TpAllocWait.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateWaitCompletionPacket(
        PHANDLE WaitCompletionPacketHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 208;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x1800A5A40
 * Callers:
 *     TpAllocWait @ 0x18001F9C0 (TpAllocWait.c)
 *     TppInitializeTimerSubQueue @ 0x180074BDC (TppInitializeTimerSubQueue.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateWaitCompletionPacket(
        PHANDLE WaitCompletionPacketHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 207;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

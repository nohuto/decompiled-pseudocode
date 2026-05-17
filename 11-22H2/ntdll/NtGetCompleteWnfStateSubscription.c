/*
 * XREFs of NtGetCompleteWnfStateSubscription @ 0x1800A0CE0
 * Callers:
 *     RtlpWnfNotificationThread @ 0x18004C860 (RtlpWnfNotificationThread.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004DD84 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800E9310 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGetCompleteWnfStateSubscription()
{
  __int64 result; // rax

  result = 248LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

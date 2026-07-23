/*
 * XREFs of NtSubscribeWnfStateChange @ 0x1800A7920
 * Callers:
 *     RtlpAddWnfUserSubToNameSub @ 0x180059D7C (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x18005A51C (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSubscribeWnfStateChange(
        PCWNF_STATE_NAME StateName,
        WNF_CHANGE_STAMP ChangeStamp,
        ULONG EventMask,
        PULONG64 SubscriptionId)
{
  NTSTATUS result; // eax

  result = 454;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

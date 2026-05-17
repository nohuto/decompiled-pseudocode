/*
 * XREFs of NtAlpcSetInformation @ 0x1800A5200
 * Callers:
 *     TppAlpcpExecuteCallback @ 0x180021EE0 (TppAlpcpExecuteCallback.c)
 *     TpCallbackIndependent @ 0x180069CF0 (TpCallbackIndependent.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x180081304 (TppFastAlpcAdjustConcurrencyCount.c)
 *     TppAllocAlpcCompletion @ 0x180081594 (TppAllocAlpcCompletion.c)
 *     AlpcRegisterCompletionList @ 0x18008E130 (AlpcRegisterCompletionList.c)
 *     AlpcRundownCompletionList @ 0x18008E3A0 (AlpcRundownCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x18008E3C0 (AlpcUnregisterCompletionList.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x1800EBB80 (AlpcAdjustCompletionListConcurrencyCount.c)
 * Callees:
 *     <none>
 */

__int64 NtAlpcSetInformation()
{
  __int64 result; // rax

  result = 141LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

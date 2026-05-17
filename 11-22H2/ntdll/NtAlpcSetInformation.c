/*
 * XREFs of NtAlpcSetInformation @ 0x18009FF80
 * Callers:
 *     TppAllocAlpcCompletion @ 0x18004B9D4 (TppAllocAlpcCompletion.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x18004F5E4 (TppFastAlpcAdjustConcurrencyCount.c)
 *     AlpcRegisterCompletionList @ 0x180089050 (AlpcRegisterCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x180089140 (AlpcUnregisterCompletionList.c)
 *     AlpcRundownCompletionList @ 0x180089160 (AlpcRundownCompletionList.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x1800EB030 (AlpcAdjustCompletionListConcurrencyCount.c)
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

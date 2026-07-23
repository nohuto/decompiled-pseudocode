/*
 * XREFs of NtAlpcSetInformation @ 0x1800A2040
 * Callers:
 *     TppAllocAlpcCompletion @ 0x18004B874 (TppAllocAlpcCompletion.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x18004F484 (TppFastAlpcAdjustConcurrencyCount.c)
 *     AlpcRegisterCompletionList @ 0x180089850 (AlpcRegisterCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x180089940 (AlpcUnregisterCompletionList.c)
 *     AlpcRundownCompletionList @ 0x180089960 (AlpcRundownCompletionList.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x1800EC360 (AlpcAdjustCompletionListConcurrencyCount.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAlpcSetInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length)
{
  NTSTATUS result; // eax

  result = 141;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

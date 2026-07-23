/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1800A4440
 * Callers:
 *     RtlDisableXfgOnTarget @ 0x18010B738 (RtlDisableXfgOnTarget.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x18010BA44 (RtlpGuardGrantSuppressedCallAccess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  NTSTATUS result; // eax

  result = 429;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

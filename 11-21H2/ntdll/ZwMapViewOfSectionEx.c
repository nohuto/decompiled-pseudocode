/*
 * XREFs of ZwMapViewOfSectionEx @ 0x1800A63C0
 * Callers:
 *     LdrpMinimalMapModule @ 0x18004CAA8 (LdrpMinimalMapModule.c)
 *     RtlGetImageFileMachines @ 0x1800A30A0 (RtlGetImageFileMachines.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwMapViewOfSectionEx(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        ULONG AllocationType,
        ULONG PageProtection,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  NTSTATUS result; // eax

  result = 283;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

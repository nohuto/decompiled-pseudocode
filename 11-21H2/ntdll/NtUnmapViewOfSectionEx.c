/*
 * XREFs of NtUnmapViewOfSectionEx @ 0x1800A7B60
 * Callers:
 *     RtlGetImageFileMachines @ 0x1800A30A0 (RtlGetImageFileMachines.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtUnmapViewOfSectionEx(HANDLE ProcessHandle, PVOID BaseAddress, ULONG Flags)
{
  NTSTATUS result; // eax

  result = 472;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

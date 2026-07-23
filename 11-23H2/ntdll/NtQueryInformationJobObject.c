/*
 * XREFs of NtQueryInformationJobObject @ 0x1800A3920
 * Callers:
 *     TppJobpRundownJob @ 0x180050DF0 (TppJobpRundownJob.c)
 *     RtlGetSessionProperties @ 0x1800F2470 (RtlGetSessionProperties.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 340;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

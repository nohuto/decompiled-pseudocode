/*
 * XREFs of NtSetInformationIoRing @ 0x1800A7480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationIoRing(
        HANDLE IoRingHandle,
        ULONG IoRingInformationClass,
        ULONG IoRingInformationLength,
        PVOID IoRingInformation)
{
  NTSTATUS result; // eax

  result = 417;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

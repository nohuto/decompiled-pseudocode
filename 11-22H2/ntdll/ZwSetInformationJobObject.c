/*
 * XREFs of ZwSetInformationJobObject @ 0x1800A22A0
 * Callers:
 *     TpAllocJobNotification @ 0x180050CA0 (TpAllocJobNotification.c)
 *     TppJobpRundownJob @ 0x180050F50 (TppJobpRundownJob.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength)
{
  NTSTATUS result; // eax

  result = 422;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

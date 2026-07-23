/*
 * XREFs of ZwReleaseSemaphore @ 0x1800A41B0
 * Callers:
 *     TppCallbackEpilog @ 0x180017620 (TppCallbackEpilog.c)
 *     RtlReleaseResource @ 0x180069BE0 (RtlReleaseResource.c)
 *     RtlConvertSharedToExclusive @ 0x1800850D0 (RtlConvertSharedToExclusive.c)
 *     RtlConvertExclusiveToShared @ 0x18008CEF0 (RtlConvertExclusiveToShared.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReleaseSemaphore(HANDLE SemaphoreHandle, LONG ReleaseCount, PLONG PreviousCount)
{
  NTSTATUS result; // eax

  result = 10;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

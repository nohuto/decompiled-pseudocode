/*
 * XREFs of ZwReleaseSemaphore @ 0x1800A0FF0
 * Callers:
 *     TppCallbackEpilog @ 0x18003620C (TppCallbackEpilog.c)
 *     RtlReleaseResource @ 0x180060400 (RtlReleaseResource.c)
 *     RtlConvertSharedToExclusive @ 0x18007FC30 (RtlConvertSharedToExclusive.c)
 *     RtlConvertExclusiveToShared @ 0x1800884C0 (RtlConvertExclusiveToShared.c)
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

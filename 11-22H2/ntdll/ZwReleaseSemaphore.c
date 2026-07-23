/*
 * XREFs of ZwReleaseSemaphore @ 0x18009EF30
 * Callers:
 *     TppCallbackEpilog @ 0x18003636C (TppCallbackEpilog.c)
 *     RtlReleaseResource @ 0x18005AC30 (RtlReleaseResource.c)
 *     RtlConvertSharedToExclusive @ 0x18007F5C0 (RtlConvertSharedToExclusive.c)
 *     RtlConvertExclusiveToShared @ 0x180087CC0 (RtlConvertExclusiveToShared.c)
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

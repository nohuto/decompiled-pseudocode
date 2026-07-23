/*
 * XREFs of ZwReleaseSemaphore @ 0x14041B8A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReleaseSemaphore(HANDLE SemaphoreHandle, LONG ReleaseCount, PLONG PreviousCount)
{
  _disable();
  __readeflags();
  return sub_140433F80(SemaphoreHandle, ReleaseCount, PreviousCount);
}

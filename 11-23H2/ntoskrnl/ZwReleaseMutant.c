/*
 * XREFs of ZwReleaseMutant @ 0x14041B4F0
 * Callers:
 *     BiReleaseBcdSyncMutant @ 0x1408059AC (BiReleaseBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReleaseMutant(HANDLE MutantHandle, PLONG PreviousCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle);
}

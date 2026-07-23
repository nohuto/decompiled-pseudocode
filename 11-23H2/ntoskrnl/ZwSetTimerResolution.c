/*
 * XREFs of ZwSetTimerResolution @ 0x14041E8D0
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x140201B70 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution, PULONG ActualTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&DesiredTime);
}

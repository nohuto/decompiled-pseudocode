/*
 * XREFs of ZwPulseEvent @ 0x14041CF60
 * Callers:
 *     DifZwPulseEventWrapper @ 0x1405F3620 (DifZwPulseEventWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPulseEvent(HANDLE EventHandle, PLONG PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}

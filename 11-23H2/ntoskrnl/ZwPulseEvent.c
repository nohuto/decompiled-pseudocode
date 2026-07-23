/*
 * XREFs of ZwPulseEvent @ 0x14041D9B0
 * Callers:
 *     DifZwPulseEventWrapper @ 0x1405F3B00 (DifZwPulseEventWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPulseEvent(HANDLE EventHandle, PLONG PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}

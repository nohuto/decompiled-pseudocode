/*
 * XREFs of ZwPulseEvent @ 0x14041DFE0
 * Callers:
 *     sub_1406237D0 @ 0x1406237D0 (sub_1406237D0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPulseEvent(HANDLE EventHandle, PLONG PreviousState)
{
  _disable();
  __readeflags();
  return sub_140433F80(EventHandle, PreviousState);
}

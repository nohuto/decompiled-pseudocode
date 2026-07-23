/*
 * XREFs of ZwClearEvent @ 0x14041AE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwClearEvent(HANDLE EventHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}

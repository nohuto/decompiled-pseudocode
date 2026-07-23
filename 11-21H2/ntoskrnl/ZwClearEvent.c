/*
 * XREFs of ZwClearEvent @ 0x14041BF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwClearEvent(HANDLE EventHandle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return sub_140433F80(EventHandle, v1);
}

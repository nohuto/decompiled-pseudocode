/*
 * XREFs of ZwSetEventBoostPriority @ 0x14041B690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetEventBoostPriority(HANDLE EventHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}

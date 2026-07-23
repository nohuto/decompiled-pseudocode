/*
 * XREFs of ZwSetLowWaitHighEventPair @ 0x14041E770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetLowWaitHighEventPair(HANDLE EventPairHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventPairHandle);
}

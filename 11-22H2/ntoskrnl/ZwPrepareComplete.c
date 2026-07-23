/*
 * XREFs of ZwPrepareComplete @ 0x14041CE60
 * Callers:
 *     DifZwPrepareCompleteWrapper @ 0x1405F3280 (DifZwPrepareCompleteWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}

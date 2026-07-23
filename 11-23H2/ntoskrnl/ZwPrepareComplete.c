/*
 * XREFs of ZwPrepareComplete @ 0x14041D8B0
 * Callers:
 *     DifZwPrepareCompleteWrapper @ 0x1405F3760 (DifZwPrepareCompleteWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}

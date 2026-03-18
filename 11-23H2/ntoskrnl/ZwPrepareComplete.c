/*
 * XREFs of ZwPrepareComplete @ 0x14041D520
 * Callers:
 *     DifZwPrepareCompleteWrapper @ 0x1405F31F0 (DifZwPrepareCompleteWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}

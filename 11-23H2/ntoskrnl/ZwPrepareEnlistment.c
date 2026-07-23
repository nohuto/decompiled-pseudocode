/*
 * XREFs of ZwPrepareEnlistment @ 0x14041D8D0
 * Callers:
 *     DifZwPrepareEnlistmentWrapper @ 0x1405F3880 (DifZwPrepareEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}

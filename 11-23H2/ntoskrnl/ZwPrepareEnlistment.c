/*
 * XREFs of ZwPrepareEnlistment @ 0x14041D540
 * Callers:
 *     DifZwPrepareEnlistmentWrapper @ 0x1405F3310 (DifZwPrepareEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}

/*
 * XREFs of ZwPrePrepareEnlistment @ 0x14041D500
 * Callers:
 *     DifZwPrePrepareEnlistmentWrapper @ 0x1405F30D0 (DifZwPrePrepareEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrePrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}

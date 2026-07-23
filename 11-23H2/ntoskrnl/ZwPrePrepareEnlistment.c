/*
 * XREFs of ZwPrePrepareEnlistment @ 0x14041D890
 * Callers:
 *     DifZwPrePrepareEnlistmentWrapper @ 0x1405F3640 (DifZwPrePrepareEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrePrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}

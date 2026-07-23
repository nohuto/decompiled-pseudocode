/*
 * XREFs of ZwRollbackEnlistment @ 0x14041D800
 * Callers:
 *     DifZwRollbackEnlistmentWrapper @ 0x1405F6680 (DifZwRollbackEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}

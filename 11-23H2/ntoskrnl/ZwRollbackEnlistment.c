/*
 * XREFs of ZwRollbackEnlistment @ 0x14041DEC0
 * Callers:
 *     DifZwRollbackEnlistmentWrapper @ 0x1405F65F0 (DifZwRollbackEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}

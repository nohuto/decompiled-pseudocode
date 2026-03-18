/*
 * XREFs of ZwPrepareEnlistment @ 0x14041DF00
 * Callers:
 *     DifZwPrepareEnlistmentWrapper @ 0x140623540 (DifZwPrepareEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}

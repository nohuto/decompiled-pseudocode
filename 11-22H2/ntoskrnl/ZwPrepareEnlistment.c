/*
 * XREFs of ZwPrepareEnlistment @ 0x14041CE80
 * Callers:
 *     DifZwPrepareEnlistmentWrapper @ 0x1405F33A0 (DifZwPrepareEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}

/*
 * XREFs of ZwPrePrepareEnlistment @ 0x14041DEC0
 * Callers:
 *     sub_1406232E0 @ 0x1406232E0 (sub_1406232E0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrePrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return sub_140433F80(EnlistmentHandle, TmVirtualClock);
}

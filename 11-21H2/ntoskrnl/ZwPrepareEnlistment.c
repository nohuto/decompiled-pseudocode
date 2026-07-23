/*
 * XREFs of ZwPrepareEnlistment @ 0x14041DF00
 * Callers:
 *     sub_140623540 @ 0x140623540 (sub_140623540.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return sub_140433F80(EnlistmentHandle, TmVirtualClock);
}

/*
 * XREFs of ZwRollbackEnlistment @ 0x14041E860
 * Callers:
 *     sub_140626910 @ 0x140626910 (sub_140626910.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return sub_140433F80(EnlistmentHandle, TmVirtualClock);
}

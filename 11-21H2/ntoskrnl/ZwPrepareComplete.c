/*
 * XREFs of ZwPrepareComplete @ 0x14041DEE0
 * Callers:
 *     sub_140623410 @ 0x140623410 (sub_140623410.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return sub_140433F80(EnlistmentHandle, TmVirtualClock);
}

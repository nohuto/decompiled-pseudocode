/*
 * XREFs of ZwPrePrepareComplete @ 0x14041DEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrePrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return sub_140433F80(EnlistmentHandle, TmVirtualClock);
}

/*
 * XREFs of ZwCommitComplete @ 0x14041CA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCommitComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return sub_140433F80(EnlistmentHandle, TmVirtualClock);
}

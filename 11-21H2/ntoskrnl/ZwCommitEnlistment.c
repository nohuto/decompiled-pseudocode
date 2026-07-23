/*
 * XREFs of ZwCommitEnlistment @ 0x14041CA80
 * Callers:
 *     sub_14061DFC0 @ 0x14061DFC0 (sub_14061DFC0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCommitEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return sub_140433F80(EnlistmentHandle, TmVirtualClock);
}

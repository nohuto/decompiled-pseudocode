/*
 * XREFs of ZwCommitEnlistment @ 0x14041C080
 * Callers:
 *     DifZwCommitEnlistmentWrapper @ 0x1405EDF60 (DifZwCommitEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCommitEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}

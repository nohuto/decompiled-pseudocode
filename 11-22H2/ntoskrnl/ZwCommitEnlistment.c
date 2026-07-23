/*
 * XREFs of ZwCommitEnlistment @ 0x14041B9C0
 * Callers:
 *     DifZwCommitEnlistmentWrapper @ 0x1405EDFF0 (DifZwCommitEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCommitEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}

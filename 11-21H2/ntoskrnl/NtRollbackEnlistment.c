/*
 * XREFs of NtRollbackEnlistment @ 0x1403DFDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtRollbackEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return NtRollbackEnlistment_0(EnlistmentHandle, TmVirtualClock);
}

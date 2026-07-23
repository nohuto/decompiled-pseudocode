/*
 * XREFs of NtReadOnlyEnlistment @ 0x1403DFD00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtReadOnlyEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return NtReadOnlyEnlistment_0(EnlistmentHandle, TmVirtualClock);
}

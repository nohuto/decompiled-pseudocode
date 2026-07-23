/*
 * XREFs of NtRollbackComplete @ 0x1403DFD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtRollbackComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return NtRollbackComplete_0(EnlistmentHandle, TmVirtualClock);
}

/*
 * XREFs of NtPrepareComplete @ 0x1403DFC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtPrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return NtPrepareComplete_0(EnlistmentHandle, TmVirtualClock);
}

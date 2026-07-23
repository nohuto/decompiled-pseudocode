/*
 * XREFs of NtCommitComplete @ 0x1403DFA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtCommitComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return NtCommitComplete_0(EnlistmentHandle, TmVirtualClock);
}

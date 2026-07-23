/*
 * XREFs of NtCommitEnlistment @ 0x1403DFA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtCommitEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return NtCommitEnlistment_0(EnlistmentHandle, TmVirtualClock);
}

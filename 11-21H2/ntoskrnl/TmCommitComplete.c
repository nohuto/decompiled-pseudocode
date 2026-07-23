/*
 * XREFs of TmCommitComplete @ 0x1403DFE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmCommitComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return TmCommitComplete_0(Enlistment, TmVirtualClock);
}

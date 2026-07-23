/*
 * XREFs of TmRollbackComplete @ 0x1403E01C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRollbackComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return TmRollbackComplete_0(Enlistment, TmVirtualClock);
}

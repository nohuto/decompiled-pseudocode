/*
 * XREFs of TmRollbackEnlistment @ 0x1403E01E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRollbackEnlistment(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return TmRollbackEnlistment_0(Enlistment, TmVirtualClock);
}

/*
 * XREFs of TmPrePrepareComplete @ 0x1403D8770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmPrePrepareComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmPrePrepareComplete(Enlistment, TmVirtualClock);
}

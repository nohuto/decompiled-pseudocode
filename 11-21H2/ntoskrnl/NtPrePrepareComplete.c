/*
 * XREFs of NtPrePrepareComplete @ 0x1403DFBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtPrePrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return NtPrePrepareComplete_0(EnlistmentHandle, TmVirtualClock);
}

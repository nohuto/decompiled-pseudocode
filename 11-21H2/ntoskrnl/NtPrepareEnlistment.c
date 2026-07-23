/*
 * XREFs of NtPrepareEnlistment @ 0x1403DFC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtPrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return NtPrepareEnlistment_0(EnlistmentHandle, TmVirtualClock);
}

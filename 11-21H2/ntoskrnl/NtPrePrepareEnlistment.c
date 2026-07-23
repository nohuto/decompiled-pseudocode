/*
 * XREFs of NtPrePrepareEnlistment @ 0x1403DFBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtPrePrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return NtPrePrepareEnlistment_0(EnlistmentHandle, TmVirtualClock);
}

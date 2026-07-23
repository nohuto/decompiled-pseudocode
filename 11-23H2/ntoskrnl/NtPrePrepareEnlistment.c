/*
 * XREFs of NtPrePrepareEnlistment @ 0x1403D8330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtPrePrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtPrePrepareEnlistment(EnlistmentHandle, TmVirtualClock);
}

/*
 * XREFs of NtCommitEnlistment @ 0x1403D7F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtCommitEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtCommitEnlistment(EnlistmentHandle, TmVirtualClock);
}

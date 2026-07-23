/*
 * XREFs of NtRollbackComplete @ 0x1403D84D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtRollbackComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtRollbackComplete(EnlistmentHandle, TmVirtualClock);
}

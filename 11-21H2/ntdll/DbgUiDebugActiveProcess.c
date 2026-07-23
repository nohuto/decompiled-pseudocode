/*
 * XREFs of DbgUiDebugActiveProcess @ 0x1800D8090
 * Callers:
 *     <none>
 * Callees:
 *     NtDebugActiveProcess @ 0x1800A5AC0 (NtDebugActiveProcess.c)
 *     ZwRemoveProcessDebug @ 0x1800A6FC0 (ZwRemoveProcessDebug.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800D8120 (DbgUiIssueRemoteBreakin.c)
 */

NTSTATUS __cdecl DbgUiDebugActiveProcess(HANDLE Process)
{
  int active; // ebx

  active = NtDebugActiveProcess(Process, NtCurrentTeb()->DbgSsReserved[1]);
  if ( active >= 0 )
  {
    active = DbgUiIssueRemoteBreakin(Process);
    if ( active < 0 )
      ZwRemoveProcessDebug(Process, NtCurrentTeb()->DbgSsReserved[1]);
  }
  return active;
}

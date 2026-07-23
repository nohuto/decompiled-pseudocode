/*
 * XREFs of DbgUiDebugActiveProcess @ 0x1800D7D50
 * Callers:
 *     <none>
 * Callees:
 *     NtDebugActiveProcess @ 0x1800A2920 (NtDebugActiveProcess.c)
 *     ZwRemoveProcessDebug @ 0x1800A3E60 (ZwRemoveProcessDebug.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800D7DE0 (DbgUiIssueRemoteBreakin.c)
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

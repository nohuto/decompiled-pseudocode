/*
 * XREFs of DbgUiDebugActiveProcess @ 0x1800D8090
 * Callers:
 *     <none>
 * Callees:
 *     NtDebugActiveProcess @ 0x1800A5AC0 (NtDebugActiveProcess.c)
 *     ZwRemoveProcessDebug @ 0x1800A6FC0 (ZwRemoveProcessDebug.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800D8120 (DbgUiIssueRemoteBreakin.c)
 */

__int64 __fastcall DbgUiDebugActiveProcess(__int64 a1)
{
  int active; // ebx

  active = NtDebugActiveProcess();
  if ( active >= 0 )
  {
    active = DbgUiIssueRemoteBreakin(a1);
    if ( active < 0 )
      ZwRemoveProcessDebug();
  }
  return (unsigned int)active;
}

/*
 * XREFs of DbgUiDebugActiveProcess @ 0x1800D83A0
 * Callers:
 *     <none>
 * Callees:
 *     NtDebugActiveProcess @ 0x1800A0860 (NtDebugActiveProcess.c)
 *     ZwRemoveProcessDebug @ 0x1800A1DA0 (ZwRemoveProcessDebug.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800D8430 (DbgUiIssueRemoteBreakin.c)
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

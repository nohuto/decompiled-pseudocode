/*
 * XREFs of ?ISMShutDownStatic@InputProcessManager@@SAJPEAXK0@Z @ 0x180195E70
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessShutDown@InputProcessManager@InputTraceLogging@@SAXK@Z @ 0x180196258 (-ProcessShutDown@InputProcessManager@InputTraceLogging@@SAXK@Z.c)
 *     ?RestartProcess@InputProcessManager@InputTraceLogging@@SAXK@Z @ 0x180196694 (-RestartProcess@InputProcessManager@InputTraceLogging@@SAXK@Z.c)
 *     ?StartProcess@InputProcessManager@@QEAAJXZ @ 0x180196908 (-StartProcess@InputProcessManager@@QEAAJXZ.c)
 *     ?UnregisterHandle@InputProcessManager@@SAXPEAX@Z @ 0x180196C30 (-UnregisterHandle@InputProcessManager@@SAXPEAX@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180196DC4 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall InputProcessManager::ISMShutDownStatic(InputProcessManager *a1, int a2, void *a3)
{
  void *v5; // rdx
  unsigned int v6; // r8d
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD ExitCode; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    if ( !GetExitCodeProcess(a3, &ExitCode) )
      wil::details::in1diag3::_Throw_GetLastError(retaddr, v5, v6, v7);
    InputProcessManager::UnregisterHandle(a3);
    InputTraceLogging::InputProcessManager::ProcessShutDown(ExitCode);
    if ( ExitCode && ExitCode != 1073807364 )
    {
      InputTraceLogging::InputProcessManager::RestartProcess(ExitCode);
      InputProcessManager::StartProcess(a1);
    }
  }
  return 0LL;
}

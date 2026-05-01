/*
 * XREFs of ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x1805074E8
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x1801AB4E0 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z @ 0x18003C9A0 (-SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x18003CA08 (-SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z @ 0x18003CA6C (-SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CriticalProcessDidntUseAnyCpu@AEAY0BM@$$CBG@StartWindowTelemetry@@SAXAEAY0BM@$$CBG@Z @ 0x180504238 (--$CriticalProcessDidntUseAnyCpu@AEAY0BM@$$CBG@StartWindowTelemetry@@SAXAEAY0BM@$$CBG@Z.c)
 *     ??$CriticalProcessDidntUseAnyCpu@AEAY0L@$$CBG@StartWindowTelemetry@@SAXAEAY0L@$$CBG@Z @ 0x18050429C (--$CriticalProcessDidntUseAnyCpu@AEAY0L@$$CBG@StartWindowTelemetry@@SAXAEAY0L@$$CBG@Z.c)
 *     ??$CriticalProcessDidntUseAnyCpu@AEAY0P@$$CBG@StartWindowTelemetry@@SAXAEAY0P@$$CBG@Z @ 0x180504300 (--$CriticalProcessDidntUseAnyCpu@AEAY0P@$$CBG@StartWindowTelemetry@@SAXAEAY0P@$$CBG@Z.c)
 */

void __fastcall XamlLauncherState::StopTrackingCpuUsageOfCriticalProcesses(XamlLauncherState *this)
{
  int started; // eax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  if ( *((_QWORD *)this + 138) )
  {
    started = XamlLauncherState::SnapshotCpuCyclesUsedByStartMenu(this, &v9);
    if ( started >= 0 )
    {
      if ( v9 == *((_QWORD *)this + 138) )
        StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const (&)[28]>(v3);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD1C,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)started);
    }
  }
  v10 = 0LL;
  if ( *((_QWORD *)this + 139) )
  {
    v4 = XamlLauncherState::SnapshotCpuCyclesUsedByCortana(this, &v10);
    if ( v4 >= 0 )
    {
      if ( v10 == *((_QWORD *)this + 139) )
        StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const (&)[15]>(v5);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD24,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v4);
    }
  }
  v11 = 0LL;
  if ( *((_QWORD *)this + 140) )
  {
    v6 = XamlLauncherState::SnapshotCpuCyclesUsedBySiHost(this, &v11);
    if ( v6 >= 0 )
    {
      if ( v11 == *((_QWORD *)this + 140) )
        StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const (&)[11]>(v7);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD35,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v6);
    }
  }
}

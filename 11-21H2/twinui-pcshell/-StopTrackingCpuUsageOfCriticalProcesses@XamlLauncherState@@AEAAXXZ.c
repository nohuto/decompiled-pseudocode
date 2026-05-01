/*
 * XREFs of ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x18045216C
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x180173D00 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1800458C0 (-SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180045924 (-SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180045988 (-SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18011CEA0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@.c)
 *     ??$CriticalProcessDidntUseAnyCpu@AEAY0BM@$$CBG@StartWindowTelemetry@@SAXAEAY0BM@$$CBG@Z @ 0x18044DFA8 (--$CriticalProcessDidntUseAnyCpu@AEAY0BM@$$CBG@StartWindowTelemetry@@SAXAEAY0BM@$$CBG@Z.c)
 *     ??$CriticalProcessDidntUseAnyCpu@AEAY0L@$$CBG@StartWindowTelemetry@@SAXAEAY0L@$$CBG@Z @ 0x18044E00C (--$CriticalProcessDidntUseAnyCpu@AEAY0L@$$CBG@StartWindowTelemetry@@SAXAEAY0L@$$CBG@Z.c)
 *     ??$CriticalProcessDidntUseAnyCpu@PEBG@StartWindowTelemetry@@SAX$$QEAPEBG@Z @ 0x18044E070 (--$CriticalProcessDidntUseAnyCpu@PEBG@StartWindowTelemetry@@SAX$$QEAPEBG@Z.c)
 */

void __fastcall XamlLauncherState::StopTrackingCpuUsageOfCriticalProcesses(XamlLauncherState *this)
{
  int started; // eax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp+18h] BYREF
  const wchar_t *v13; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  if ( *((_QWORD *)this + 139) )
  {
    started = XamlLauncherState::SnapshotCpuCyclesUsedByStartMenu(this, &v10);
    if ( started >= 0 )
    {
      if ( v10 == *((_QWORD *)this + 139) )
        StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const (&)[28]>(v3);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCAF,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)started);
    }
  }
  v11 = 0LL;
  if ( *((_QWORD *)this + 140) )
  {
    v4 = XamlLauncherState::SnapshotCpuCyclesUsedByCortana(this, &v11);
    if ( v4 >= 0 )
    {
      if ( v11 == *((_QWORD *)this + 140) )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetImpl'::`2'::impl,
          1u,
          v5,
          v6);
        v13 = L"searchapp.exe";
        StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const *>((__int64 *)&v13);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCB7,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v4);
    }
  }
  v12 = 0LL;
  if ( *((_QWORD *)this + 141) )
  {
    v7 = XamlLauncherState::SnapshotCpuCyclesUsedBySiHost(this, &v12);
    if ( v7 >= 0 )
    {
      if ( v12 == *((_QWORD *)this + 141) )
        StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const (&)[11]>(v8);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCBF,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v7);
    }
  }
}

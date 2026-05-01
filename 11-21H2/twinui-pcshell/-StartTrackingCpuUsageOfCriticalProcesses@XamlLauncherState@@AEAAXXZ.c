/*
 * XREFs of ?StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x180045874
 * Callers:
 *     ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x1800456BC (-BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ?SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180045924 (-SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180045988 (-SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z.c)
 */

void __fastcall XamlLauncherState::StartTrackingCpuUsageOfCriticalProcesses(XamlLauncherState *this)
{
  *((_QWORD *)this + 139) = 0LL;
  XamlLauncherState::SnapshotCpuCyclesUsedByStartMenu(this, (unsigned __int64 *)this + 139);
  *((_QWORD *)this + 140) = 0LL;
  XamlLauncherState::SnapshotCpuCyclesUsedByCortana(this, (unsigned __int64 *)this + 140);
  *((_QWORD *)this + 141) = 0LL;
  XamlLauncherState::SnapshotCpuCyclesUsedBySiHost(this, (unsigned __int64 *)this + 141);
}

/*
 * XREFs of ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180045988
 * Callers:
 *     ?StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x180045874 (-StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x18045216C (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ?QueryCpuCyclesUsedByWindow@@YAJPEAUHWND__@@PEA_K@Z @ 0x1800459EC (-QueryCpuCyclesUsedByWindow@@YAJPEAUHWND__@@PEA_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncherState::SnapshotCpuCyclesUsedByCortana(XamlLauncherState *this, unsigned __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  __int64 result; // rax
  int CpuCyclesUsedByWindow; // eax
  HWND v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  v4 = *((_QWORD *)this + 11);
  v7 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v4 + 432LL))(v4, &v7);
  if ( (int)result >= 0 )
  {
    CpuCyclesUsedByWindow = QueryCpuCyclesUsedByWindow(v7, a2);
    if ( CpuCyclesUsedByWindow < 0 )
      return (unsigned int)CpuCyclesUsedByWindow;
    return v2;
  }
  return result;
}

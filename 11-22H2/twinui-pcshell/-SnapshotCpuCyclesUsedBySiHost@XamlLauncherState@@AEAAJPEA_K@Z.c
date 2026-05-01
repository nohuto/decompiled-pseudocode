/*
 * XREFs of ?SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z @ 0x18003C9A0
 * Callers:
 *     ?StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x18003C954 (-StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x1805074E8 (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetSiHostProcessHandle@@YAJKPEAPEAX@Z @ 0x180165E58 (-GetSiHostProcessHandle@@YAJKPEAPEAX@Z.c)
 */

__int64 __fastcall XamlLauncherState::SnapshotCpuCyclesUsedBySiHost(XamlLauncherState *this, unsigned __int64 *a2)
{
  HANDLE *v2; // rbx
  __int64 result; // rax
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = (HANDLE *)((char *)this + 1128);
  if ( ((*((_QWORD *)this + 141) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0
    || (result = GetSiHostProcessHandle(0x1000u, (void **)this + 141), (int)result >= 0) )
  {
    if ( QueryProcessCycleTime(*v2, a2) )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0xCE1,
               (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
               v5);
  }
  return result;
}

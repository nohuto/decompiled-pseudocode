/*
 * XREFs of ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x1800CF114
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800F0560 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180043210 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x1800CE918 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::TerminateADG(CAudioDGProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  unsigned int v2; // edi

  v1 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  CAudioDGProcess::CancelADGTerminationTimer(v1);
  v2 = CAudioDGProcess::DoTerminateADG((CAudioDGProcess *)v1);
  if ( v1 )
    LeaveCriticalSection(v1);
  return v2;
}

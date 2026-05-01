/*
 * XREFs of CControlCenterExperienceManager::OnDisplayMonitorInfoChangedAsync$_InitCoro$2 @ 0x1801DEF58
 * Callers:
 *     ?OnDisplayMonitorInfoChangedAsync@CControlCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801DF22C (-OnDisplayMonitorInfoChangedAsync@CControlCenterExperienceManager@@AEAA-AUfire_and_forget@winrt@.c)
 * Callees:
 *     CControlCenterExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1801DF010 (CControlCenterExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::OnDisplayMonitorInfoChangedAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 74) = a4;
  *(_QWORD *)a2 = CControlCenterExperienceManager::OnDisplayMonitorInfoChangedAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 73) = 0;
  return CControlCenterExperienceManager::OnDisplayMonitorInfoChangedAsync__ResumeCoro_1(a2);
}

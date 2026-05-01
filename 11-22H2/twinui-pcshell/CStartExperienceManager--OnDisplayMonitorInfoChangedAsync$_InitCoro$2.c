/*
 * XREFs of CStartExperienceManager::OnDisplayMonitorInfoChangedAsync$_InitCoro$2 @ 0x1801E28C0
 * Callers:
 *     ?OnDisplayMonitorInfoChangedAsync@CStartExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801E2BA0 (-OnDisplayMonitorInfoChangedAsync@CStartExperienceManager@@AEAA-AUfire_and_forget@winrt@@XZ.c)
 * Callees:
 *     CStartExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1801E2980 (CStartExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStartExperienceManager::OnDisplayMonitorInfoChangedAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 74) = a4;
  *(_QWORD *)a2 = CStartExperienceManager::OnDisplayMonitorInfoChangedAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 73) = 0;
  return CStartExperienceManager::OnDisplayMonitorInfoChangedAsync__ResumeCoro_1(a2);
}

/*
 * XREFs of CActionCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_InitCoro$2 @ 0x1801DBF5C
 * Callers:
 *     ?CreateDisplayMonitorInfoCollectionAsync@CActionCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801DC1AC (-CreateDisplayMonitorInfoCollectionAsync@CActionCenterExperienceManager@@AEAA-AUfire_and_forget@.c)
 * Callees:
 *     CActionCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1801DC010 (CActionCenterExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 74) = a4;
  *(_QWORD *)a2 = CActionCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 73) = 0;
  return CActionCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync__ResumeCoro_1(a2);
}

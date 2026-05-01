/*
 * XREFs of CControlCenterExperienceManager::ShowRequested$_InitCoro$2 @ 0x1801957EC
 * Callers:
 *     ?ShowRequested@CControlCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x180195CEC (-ShowRequested@CControlCenterExperienceManager@@AEAA-AUfire_and_forget@winrt@@UShowShellViewRequ.c)
 * Callees:
 *     CControlCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801958E0 (CControlCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     _CControlCenterExperienceManager::ShowRequested_::_5_::_parameters_::_parameters_ @ 0x180353060 (_CControlCenterExperienceManager--ShowRequested_--_5_--_parameters_--_parameters_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CControlCenterExperienceManager::ShowRequested__InitCoro_2(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  CControlCenterExperienceManager::ShowRequested_::_5_::_parameters_::_parameters_((char *)a2 + 817, a5, a4);
  *(_QWORD *)a2 = CControlCenterExperienceManager::ShowRequested__ResumeCoro_1;
  a2[2] = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *((_BYTE *)a2 + 816) = 0;
  return CControlCenterExperienceManager::ShowRequested__ResumeCoro_1(a2);
}

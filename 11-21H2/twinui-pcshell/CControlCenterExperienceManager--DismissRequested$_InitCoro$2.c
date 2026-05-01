/*
 * XREFs of CControlCenterExperienceManager::DismissRequested$_InitCoro$2 @ 0x180194B10
 * Callers:
 *     ?DismissRequested@CControlCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x180194FF8 (-DismissRequested@CControlCenterExperienceManager@@AEAA-AUfire_and_forget@winrt@@UDismissShellVi.c)
 * Callees:
 *     CControlCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180194C00 (CControlCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     _CControlCenterExperienceManager::DismissRequested_::_5_::_parameters_::_parameters_ @ 0x180353044 (_CControlCenterExperienceManager--DismissRequested_--_5_--_parameters_--_parameters_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CControlCenterExperienceManager::DismissRequested__InitCoro_2(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  CControlCenterExperienceManager::DismissRequested_::_5_::_parameters_::_parameters_((char *)a2 + 801, a5, a4);
  *(_QWORD *)a2 = CControlCenterExperienceManager::DismissRequested__ResumeCoro_1;
  a2[2] = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *((_BYTE *)a2 + 800) = 0;
  return CControlCenterExperienceManager::DismissRequested__ResumeCoro_1(a2);
}

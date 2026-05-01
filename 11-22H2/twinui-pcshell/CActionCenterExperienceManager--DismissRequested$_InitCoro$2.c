/*
 * XREFs of CActionCenterExperienceManager::DismissRequested$_InitCoro$2 @ 0x1801DC210
 * Callers:
 *     ?DismissRequested@CActionCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801DC8F0 (-DismissRequested@CActionCenterExperienceManager@@AEAA-AUfire_and_forget@winrt@@UDismissShellVie.c)
 * Callees:
 *     CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x1801DC300 (CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     _CActionCenterExperienceManager::DismissRequested_::_10_::_parameters_::_parameters_ @ 0x180416660 (_CActionCenterExperienceManager--DismissRequested_--_10_--_parameters_--_parameters_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActionCenterExperienceManager::DismissRequested__InitCoro_2(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  CActionCenterExperienceManager::DismissRequested_::_10_::_parameters_::_parameters_((char *)a2 + 529, a5, a4);
  *(_QWORD *)a2 = CActionCenterExperienceManager::DismissRequested__ResumeCoro_1;
  a2[2] = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *((_BYTE *)a2 + 528) = 0;
  return CActionCenterExperienceManager::DismissRequested__ResumeCoro_1(a2);
}

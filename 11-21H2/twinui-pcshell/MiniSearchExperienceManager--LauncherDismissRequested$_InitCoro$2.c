/*
 * XREFs of MiniSearchExperienceManager::LauncherDismissRequested$_InitCoro$2 @ 0x1801A75EC
 * Callers:
 *     ?LauncherDismissRequested@MiniSearchExperienceManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801A79AC (-LauncherDismissRequested@MiniSearchExperienceManager@@AEAA-AUfire_and_forget@winrt@@UDismissShe.c)
 * Callees:
 *     MiniSearchExperienceManager::LauncherDismissRequested$_ResumeCoro$1 @ 0x1801A76E0 (MiniSearchExperienceManager--LauncherDismissRequested$_ResumeCoro$1.c)
 *     _MiniSearchExperienceManager::LauncherDismissRequested_::_8_::_parameters_::_parameters_ @ 0x1803A0DA4 (_MiniSearchExperienceManager--LauncherDismissRequested_--_8_--_parameters_--_parameters_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MiniSearchExperienceManager::LauncherDismissRequested__InitCoro_2(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  MiniSearchExperienceManager::LauncherDismissRequested_::_8_::_parameters_::_parameters_((char *)a2 + 305, a5, a4);
  *(_QWORD *)a2 = MiniSearchExperienceManager::LauncherDismissRequested__ResumeCoro_1;
  a2[2] = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *((_BYTE *)a2 + 304) = 0;
  return MiniSearchExperienceManager::LauncherDismissRequested__ResumeCoro_1(a2);
}

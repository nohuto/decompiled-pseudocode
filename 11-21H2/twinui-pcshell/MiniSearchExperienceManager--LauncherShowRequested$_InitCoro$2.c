/*
 * XREFs of MiniSearchExperienceManager::LauncherShowRequested$_InitCoro$2 @ 0x1801A7A2C
 * Callers:
 *     ?LauncherShowRequested@MiniSearchExperienceManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801A7FFC (-LauncherShowRequested@MiniSearchExperienceManager@@AEAA-AUfire_and_forget@winrt@@UShowShellView.c)
 * Callees:
 *     MiniSearchExperienceManager::LauncherShowRequested$_ResumeCoro$1 @ 0x1801A7B20 (MiniSearchExperienceManager--LauncherShowRequested$_ResumeCoro$1.c)
 *     _MiniSearchExperienceManager::LauncherShowRequested_::_20_::_parameters_::_parameters_ @ 0x1803A0DC0 (_MiniSearchExperienceManager--LauncherShowRequested_--_20_--_parameters_--_parameters_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MiniSearchExperienceManager::LauncherShowRequested__InitCoro_2(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  MiniSearchExperienceManager::LauncherShowRequested_::_20_::_parameters_::_parameters_((char *)a2 + 705, a5, a4);
  *(_QWORD *)a2 = MiniSearchExperienceManager::LauncherShowRequested__ResumeCoro_1;
  a2[2] = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *((_BYTE *)a2 + 704) = 0;
  return MiniSearchExperienceManager::LauncherShowRequested__ResumeCoro_1(a2);
}

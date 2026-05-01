/*
 * XREFs of CVirtualTouchpadExperienceManager::DismissRequested$_InitCoro$2 @ 0x1801E3CB4
 * Callers:
 *     ?DismissRequested@CVirtualTouchpadExperienceManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801E3FB4 (-DismissRequested@CVirtualTouchpadExperienceManager@@AEAA-AUfire_and_forget@winrt@@UDismissShell.c)
 * Callees:
 *     CVirtualTouchpadExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x1801E3DA0 (CVirtualTouchpadExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     _CVirtualTouchpadExperienceManager::DismissRequested_::_5_::_parameters_::_parameters_ @ 0x180451D60 (_CVirtualTouchpadExperienceManager--DismissRequested_--_5_--_parameters_--_parameters_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualTouchpadExperienceManager::DismissRequested__InitCoro_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  CVirtualTouchpadExperienceManager::DismissRequested_::_5_::_parameters_::_parameters_(a2 + 58, a5, a4);
  *(_QWORD *)a2 = CVirtualTouchpadExperienceManager::DismissRequested__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *(_BYTE *)(a2 + 57) = 0;
  return CVirtualTouchpadExperienceManager::DismissRequested__ResumeCoro_1(a2);
}

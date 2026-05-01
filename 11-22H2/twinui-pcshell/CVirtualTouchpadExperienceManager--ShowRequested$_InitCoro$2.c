/*
 * XREFs of CVirtualTouchpadExperienceManager::ShowRequested$_InitCoro$2 @ 0x1801E4030
 * Callers:
 *     ?ShowRequested@CVirtualTouchpadExperienceManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801E437C (-ShowRequested@CVirtualTouchpadExperienceManager@@AEAA-AUfire_and_forget@winrt@@UShowShellViewRe.c)
 * Callees:
 *     CVirtualTouchpadExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801E4120 (CVirtualTouchpadExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     _CVirtualTouchpadExperienceManager::ShowRequested_::_5_::_parameters_::_parameters_ @ 0x180451D7C (_CVirtualTouchpadExperienceManager--ShowRequested_--_5_--_parameters_--_parameters_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualTouchpadExperienceManager::ShowRequested__InitCoro_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  CVirtualTouchpadExperienceManager::ShowRequested_::_5_::_parameters_::_parameters_(a2 + 97, a5, a4);
  *(_QWORD *)a2 = CVirtualTouchpadExperienceManager::ShowRequested__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *(_BYTE *)(a2 + 96) = 0;
  return CVirtualTouchpadExperienceManager::ShowRequested__ResumeCoro_1(a2);
}

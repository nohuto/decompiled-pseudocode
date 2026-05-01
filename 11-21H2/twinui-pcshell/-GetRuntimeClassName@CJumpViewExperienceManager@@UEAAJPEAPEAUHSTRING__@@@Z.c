/*
 * XREFs of ?GetRuntimeClassName@CJumpViewExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180372950
 * Callers:
 *     ?GetRuntimeClassName@CJumpViewExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1801F47A0 (-GetRuntimeClassName@CJumpViewExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CJumpViewExperienceManager::GetRuntimeClassName(CJumpViewExperienceManager *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.JumpViewExperienceManager", 0x3Bu, a2);
}

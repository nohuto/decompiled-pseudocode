/*
 * XREFs of ?GetRuntimeClassName@CJumpViewExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180448540
 * Callers:
 *     ?GetRuntimeClassName@CJumpViewExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180298120 (-GetRuntimeClassName@CJumpViewExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CJumpViewExperienceManager::GetRuntimeClassName(CJumpViewExperienceManager *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.JumpViewExperienceManager", 0x3Bu, a2);
}

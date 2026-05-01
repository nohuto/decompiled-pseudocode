/*
 * XREFs of ?GetRuntimeClassName@MiniSearchExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1803595B0
 * Callers:
 *     ?GetRuntimeClassName@SearchAppExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1801F2C10 (-GetRuntimeClassName@SearchAppExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@UndockedSearchAppExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1801F5A70 (-GetRuntimeClassName@UndockedSearchAppExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall MiniSearchExperienceManager::GetRuntimeClassName(MiniSearchExperienceManager *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.CortanaExperienceManager", 0x3Au, a2);
}

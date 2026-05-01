/*
 * XREFs of ?GetRuntimeClassName@CStartExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180444E20
 * Callers:
 *     ?GetRuntimeClassName@CStartExperienceManager@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180297D00 (-GetRuntimeClassName@CStartExperienceManager@@WCI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CStartExperienceManager@@WDI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180297D20 (-GetRuntimeClassName@CStartExperienceManager@@WDI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CStartExperienceManager::GetRuntimeClassName(CStartExperienceManager *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.StartExperienceManager", 0x38u, a2);
}

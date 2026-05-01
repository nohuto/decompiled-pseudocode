/*
 * XREFs of ?GetRuntimeClassName@CInsightsExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180459BB0
 * Callers:
 *     ?GetRuntimeClassName@CInsightsExperienceManager@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180298CA0 (-GetRuntimeClassName@CInsightsExperienceManager@@WCA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CInsightsExperienceManager::GetRuntimeClassName(CInsightsExperienceManager *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.InsightsExperienceManager", 0x3Bu, a2);
}

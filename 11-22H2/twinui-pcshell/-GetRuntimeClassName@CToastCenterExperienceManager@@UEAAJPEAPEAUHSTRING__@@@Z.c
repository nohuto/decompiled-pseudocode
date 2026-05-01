/*
 * XREFs of ?GetRuntimeClassName@CToastCenterExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1804361D0
 * Callers:
 *     ?GetRuntimeClassName@CToastCenterExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180297090 (-GetRuntimeClassName@CToastCenterExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CToastCenterExperienceManager@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802970B0 (-GetRuntimeClassName@CToastCenterExperienceManager@@WDA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CToastCenterExperienceManager@@WDI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802970D0 (-GetRuntimeClassName@CToastCenterExperienceManager@@WDI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CToastCenterExperienceManager::GetRuntimeClassName(CToastCenterExperienceManager *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.ToastCenterExperienceManager", 0x3Eu, a2);
}

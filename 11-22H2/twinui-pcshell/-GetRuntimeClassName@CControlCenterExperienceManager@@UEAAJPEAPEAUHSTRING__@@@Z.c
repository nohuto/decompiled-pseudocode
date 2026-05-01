/*
 * XREFs of ?GetRuntimeClassName@CControlCenterExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18041F680
 * Callers:
 *     ?GetRuntimeClassName@CControlCenterExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180295FD0 (-GetRuntimeClassName@CControlCenterExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CControlCenterExperienceManager@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180295FF0 (-GetRuntimeClassName@CControlCenterExperienceManager@@WCA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CControlCenterExperienceManager@@WEA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180296010 (-GetRuntimeClassName@CControlCenterExperienceManager@@WEA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CControlCenterExperienceManager::GetRuntimeClassName(
        CControlCenterExperienceManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.ControlCenterExperienceManager", 0x40u, a2);
}

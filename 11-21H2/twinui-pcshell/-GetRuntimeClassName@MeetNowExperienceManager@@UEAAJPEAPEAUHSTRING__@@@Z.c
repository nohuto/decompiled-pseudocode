/*
 * XREFs of ?GetRuntimeClassName@MeetNowExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180394240
 * Callers:
 *     ?GetRuntimeClassName@MeetNowExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1801F6050 (-GetRuntimeClassName@MeetNowExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall MeetNowExperienceManager::GetRuntimeClassName(MeetNowExperienceManager *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.NetworkFlyoutExperienceManager", 0x40u, a2);
}

/*
 * XREFs of ?InputHostHiding@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x180472750
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?HandleInputHostVisibilityChanged@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z @ 0x1804725D8 (-HandleInputHostVisibilityChanged@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISP.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::InputHostHiding(__int64 a1)
{
  return CBaseTrayFlyoutExperienceManager::HandleInputHostVisibilityChanged((CBaseTrayFlyoutExperienceManager *)(a1 - 24));
}

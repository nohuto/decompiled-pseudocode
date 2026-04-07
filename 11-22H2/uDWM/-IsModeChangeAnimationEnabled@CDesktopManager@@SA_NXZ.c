/*
 * XREFs of ?IsModeChangeAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x18005F2F4
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18003BBE8 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool CDesktopManager::IsModeChangeAnimationEnabled(void)
{
  return !CDesktopManager::s_forceDisableModeChangeAnimation;
}

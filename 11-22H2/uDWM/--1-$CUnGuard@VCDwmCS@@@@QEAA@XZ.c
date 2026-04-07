/*
 * XREFs of ??1?$CUnGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800A9BC8
 * Callers:
 *     _CTimer::_OnTimerCallback_::_1_::dtor$0 @ 0x1800671B6 (_CTimer--_OnTimerCallback_--_1_--dtor$0.c)
 *     _CDesktopManager::Initialize_::_1_::dtor$12 @ 0x180068324 (_CDesktopManager--Initialize_--_1_--dtor$12.c)
 *     _CDesktopManager::DwmLivePreviewWndProc_::_1_::dtor$1 @ 0x1800B45C3 (_CDesktopManager--DwmLivePreviewWndProc_--_1_--dtor$1.c)
 *     _CDesktopManager::DwmLivePreviewWndProc_::_1_::dtor$2 @ 0x1800B45CF (_CDesktopManager--DwmLivePreviewWndProc_--_1_--dtor$2.c)
 *     _CDesktopManager::NotifyRedirectionShutdown_::_1_::dtor$0 @ 0x1800B54F8 (_CDesktopManager--NotifyRedirectionShutdown_--_1_--dtor$0.c)
 *     _CTransitionVisualController::RestoreWindow_::_1_::dtor$0 @ 0x1800EC228 (_CTransitionVisualController--RestoreWindow_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CUnGuard<CDwmCS>::~CUnGuard<CDwmCS>(LPCRITICAL_SECTION *a1)
{
  EnterCriticalSection(*a1);
}

/*
 * XREFs of ??1?$CUnGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800A195C
 * Callers:
 *     _CDesktopManager::Initialize_::_1_::dtor$12 @ 0x180065E2C (_CDesktopManager--Initialize_--_1_--dtor$12.c)
 *     _CAnimationClock::_SetState_::_1_::dtor$1 @ 0x1800A4025 (_CAnimationClock--_SetState_--_1_--dtor$1.c)
 *     _CDesktopManager::DwmLivePreviewWndProc_::_1_::dtor$1 @ 0x1800B03F6 (_CDesktopManager--DwmLivePreviewWndProc_--_1_--dtor$1.c)
 *     _CDesktopManager::DwmLivePreviewWndProc_::_1_::dtor$2 @ 0x1800B0402 (_CDesktopManager--DwmLivePreviewWndProc_--_1_--dtor$2.c)
 *     _CDesktopManager::NotifyRedirectionShutdown_::_1_::dtor$0 @ 0x1800B1000 (_CDesktopManager--NotifyRedirectionShutdown_--_1_--dtor$0.c)
 *     _CTimer::_OnTimerCallback_::_1_::dtor$0 @ 0x1800E3EA3 (_CTimer--_OnTimerCallback_--_1_--dtor$0.c)
 *     _CTransitionVisualController::RestoreWindow_::_1_::dtor$0 @ 0x1800EE140 (_CTransitionVisualController--RestoreWindow_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CUnGuard<CDwmCS>::~CUnGuard<CDwmCS>(LPCRITICAL_SECTION *a1)
{
  EnterCriticalSection(*a1);
}

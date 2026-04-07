/*
 * XREFs of ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18003FA6C
 * Callers:
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18003F928 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180040370 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?Start@CDisplayAnimatedVisual@@QEAAJXZ @ 0x18005BA80 (-Start@CDisplayAnimatedVisual@@QEAAJXZ.c)
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800D2D90 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 *     ?Start@CScreenRotation@@QEAAJXZ @ 0x1800D3410 (-Start@CScreenRotation@@QEAAJXZ.c)
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x1801042B0 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x180105E24 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18003FAC4 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800D4D50 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAnimationScheduler::AbortAllAnimations(CAnimationScheduler *this)
{
  __int64 i; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
    CStoryboard::Abandon(*(CStoryboard **)(*((_QWORD *)this + 2) + 8 * i));
  CAnimationScheduler::_CleanupTransition(this);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v3);
}

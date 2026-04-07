/*
 * XREFs of ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18004159C
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180040960 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180041174 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?Start@CDisplayAnimatedVisual@@QEAAJXZ @ 0x180047B9C (-Start@CDisplayAnimatedVisual@@QEAAJXZ.c)
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800D7A00 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 *     ?Start@CScreenRotation@@QEAAJXZ @ 0x1800D8070 (-Start@CScreenRotation@@QEAAJXZ.c)
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x18010A860 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18010C464 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x1800415F4 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800D9D50 (-Abandon@CStoryboard@@QEAAXXZ.c)
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

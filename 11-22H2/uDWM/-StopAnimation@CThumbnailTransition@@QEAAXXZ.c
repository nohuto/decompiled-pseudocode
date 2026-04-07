/*
 * XREFs of ?StopAnimation@CThumbnailTransition@@QEAAXXZ @ 0x1800E4B10
 * Callers:
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x180009FFC (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 *     ??1CThumbnailTransition@@UEAA@XZ @ 0x1800E45C0 (--1CThumbnailTransition@@UEAA@XZ.c)
 *     ?OnAnimationComplete@CThumbnailTransition@@UEAAJI@Z @ 0x1800E4810 (-OnAnimationComplete@CThumbnailTransition@@UEAAJI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x1800E4BB0 (-_CleanupAnimation@CThumbnailTransition@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CThumbnailTransition::StopAnimation(CThumbnailTransition *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_BYTE *)this + 36) )
  {
    *((_BYTE *)this + 36) = 0;
    CThumbnailTransition::_CleanupAnimation(this);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v2);
}

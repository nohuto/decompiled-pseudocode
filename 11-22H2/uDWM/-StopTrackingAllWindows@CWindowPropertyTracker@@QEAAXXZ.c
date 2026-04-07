/*
 * XREFs of ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x1800417C0
 * Callers:
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x1800415F4 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ??1CAnimationScheduler@@QEAA@XZ @ 0x1800AC468 (--1CAnimationScheduler@@QEAA@XZ.c)
 * Callees:
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18000CE7C (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowPropertyTracker::StopTrackingAllWindows(CWindowPropertyTracker *this)
{
  int v2; // eax
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  while ( 1 )
  {
    v2 = *((_DWORD *)this + 6);
    if ( !v2 )
      break;
    CWindowPropertyTracker::_StopTrackingWindowByIndex(this, v2 - 1);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v3);
}

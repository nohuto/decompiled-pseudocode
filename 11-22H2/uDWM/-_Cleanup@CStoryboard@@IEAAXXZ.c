/*
 * XREFs of ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18000CF48
 * Callers:
 *     ?Destroy@CStoryboard@@UEAAXXZ @ 0x18000DB70 (-Destroy@CStoryboard@@UEAAXXZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18000DB94 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?OnAnimationComplete@CStoryboard@@UEAAJI@Z @ 0x18000E9D0 (-OnAnimationComplete@CStoryboard@@UEAAJI@Z.c)
 *     ?Destroy@CAppArrangementDelayed@@EEAAXXZ @ 0x1800DA070 (-Destroy@CAppArrangementDelayed@@EEAAXXZ.c)
 *     ?Destroy@CSlideOut@@UEAAXXZ @ 0x1800DA0B0 (-Destroy@CSlideOut@@UEAAXXZ.c)
 *     ?Destroy@CVirtualDesktopSwitch@@EEAAXXZ @ 0x1800DA0F0 (-Destroy@CVirtualDesktopSwitch@@EEAAXXZ.c)
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x1800DC334 (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000CCB0 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x18000D0CC (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x18000D144 (-DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18000D1DC (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18000DB94 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000E58C (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z @ 0x18000FAD4 (-ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18000FBF0 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z @ 0x180010024 (-StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x18003A1C0 (-GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CStoryboard::_Cleanup(CStoryboard *this)
{
  int v2; // eax
  char v3; // bp
  CStoryboard *v4; // rcx
  __int64 i; // rdi
  __int64 v6; // rdx
  struct CWindowData *WindowDataByHwnd; // rax
  CBaseObject *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r10
  int *v12; // rcx
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = *((_DWORD *)this + 6);
  if ( v2 != 4 )
  {
    if ( (unsigned int)(v2 - 2) > 1 )
    {
      v3 = 1;
      CTransitionVisualController::RemoveTargetsForStoryboard(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
        this,
        1,
        0);
    }
    else
    {
      v3 = 0;
    }
    *((_DWORD *)this + 6) = 4;
    CWindowPropertyTracker::StopTrackingStoryboard(
      (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
      this);
    CStoryboard::_LogStoryboardEvent(this);
    *((_DWORD *)this + 7) = -1;
    v4 = (CStoryboard *)*((_QWORD *)this + 11);
    if ( v4 )
    {
      CStoryboard::Release(v4);
      *((_QWORD *)this + 11) = 0LL;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 30); i = (unsigned int)(i + 1) )
    {
      v6 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * i) + 24LL);
      if ( (v6 & 0x20000000) != 0
        && !(unsigned __int8)CAnimationScheduler::ShouldSnapshot(
                               *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23),
                               v6,
                               this) )
      {
        CTransitionVisualController::DiscardStoredSnapshot(
          *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
          *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * i) + 16LL));
      }
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                           *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * i) + 16LL));
      if ( WindowDataByHwnd )
      {
        v12 = (int *)((char *)WindowDataByHwnd + 680);
        if ( (v3 || (*v12 & 0xFFF) == 0xFFF) && (*v12 & 0x40000000) == 0 )
          *v12 = *v12 & 0x2000000 | 0xFFF;
      }
      CTransitionVisualController::RemoveAnimationComponent(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
        *(struct CAnimationComponent **)(*((_QWORD *)this + 12) + 8 * i));
      v8 = *(CBaseObject **)(*((_QWORD *)this + 12) + 8 * i);
      if ( v8 )
      {
        CBaseObject::Release(v8);
        *(_QWORD *)(*((_QWORD *)this + 12) + 8 * i) = 0LL;
      }
    }
    if ( (int)CAnimationScheduler::GetActiveStoryboardCount(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance
                                                            + 23)) > 0 )
      CTransitionVisualController::SetupZOrder(*(CTransitionVisualController **)(v11 + 192), v9, v10);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
}

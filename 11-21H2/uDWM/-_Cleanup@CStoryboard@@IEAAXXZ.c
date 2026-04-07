/*
 * XREFs of ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x1800D93F8
 * Callers:
 *     ?Destroy@CAppArrangementDelayed@@EEAAXXZ @ 0x1800D5EB0 (-Destroy@CAppArrangementDelayed@@EEAAXXZ.c)
 *     ?Destroy@CSlideOut@@UEAAXXZ @ 0x1800D5EF0 (-Destroy@CSlideOut@@UEAAXXZ.c)
 *     ?Destroy@CStoryboard@@UEAAXXZ @ 0x1800D5F30 (-Destroy@CStoryboard@@UEAAXXZ.c)
 *     ?Destroy@CVirtualDesktopSwitch@@EEAAXXZ @ 0x1800D5F60 (-Destroy@CVirtualDesktopSwitch@@EEAAXXZ.c)
 *     ?OnAnimationComplete@CStoryboard@@UEAAJI@Z @ 0x1800D7700 (-OnAnimationComplete@CStoryboard@@UEAAJI@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x1800D86A0 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x1800D8A4C (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180004E98 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x18001C5CC (-GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z @ 0x1800A74FC (-ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z.c)
 *     ?StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z @ 0x1800D1270 (-StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x1800D86A0 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x1800DB27C (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x1800EC7A8 (-DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800EDB00 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x1800EDD10 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x1800EE154 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CStoryboard::_Cleanup(CStoryboard *this)
{
  int v2; // eax
  char v3; // bp
  CStoryboard *v4; // rcx
  __int64 i; // rdi
  int v6; // edx
  struct CWindowData *WindowDataByHwnd; // rax
  int v8; // ecx
  CBaseObject *v9; // rcx
  __int64 v10; // r10
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = *((_DWORD *)this + 6);
  if ( v2 != 4 )
  {
    if ( (unsigned int)(v2 - 2) <= 1 )
    {
      v3 = 0;
    }
    else
    {
      v3 = 1;
      CTransitionVisualController::RemoveTargetsForStoryboard(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
        this,
        1,
        0);
    }
    *((_DWORD *)this + 6) = 4;
    CWindowPropertyTracker::StopTrackingStoryboard(
      (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
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
      v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * i) + 24LL);
      if ( (v6 & 0x20000000) != 0
        && !CAnimationScheduler::ShouldSnapshot(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22), v6, this) )
      {
        CTransitionVisualController::DiscardStoredSnapshot(
          *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
          *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * i) + 16LL));
      }
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                           *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * i) + 16LL));
      if ( WindowDataByHwnd && (v3 || (*((_DWORD *)WindowDataByHwnd + 168) & 0xFFF) == 0xFFF) )
      {
        v8 = *((_DWORD *)WindowDataByHwnd + 168);
        if ( (v8 & 0x40000000) == 0 )
          *((_DWORD *)WindowDataByHwnd + 168) = v8 & 0x2000000 | 0xFFF;
      }
      CTransitionVisualController::RemoveAnimationComponent(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
        *(struct CAnimationComponent **)(*((_QWORD *)this + 12) + 8 * i));
      v9 = *(CBaseObject **)(*((_QWORD *)this + 12) + 8 * i);
      if ( v9 )
      {
        CBaseObject::Release(v9);
        *(_QWORD *)(*((_QWORD *)this + 12) + 8 * i) = 0LL;
      }
    }
    if ( (int)CAnimationScheduler::GetActiveStoryboardCount(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance
                                                            + 22)) > 0 )
      CTransitionVisualController::SetupZOrder(*(CTransitionVisualController **)(v10 + 184));
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
}

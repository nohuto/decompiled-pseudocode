/*
 * XREFs of ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x1800D1750
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180022660 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x18003FB04 (-StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ.c)
 *     ?StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z @ 0x1800D1270 (-StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z.c)
 *     ?StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z @ 0x1800D1354 (-StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180004E98 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ??_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z @ 0x1800D0D64 (--_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800EDF64 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 */

void __fastcall CWindowPropertyTracker::_StopTrackingWindowByIndex(CWindowPropertyTracker *this, unsigned int a2)
{
  __int64 v3; // rbx
  struct CWindowData *WindowDataByHwnd; // rax
  __int64 v5; // r8
  unsigned int v6; // ecx
  CWindowPropertyTracker::CPropertyChangeRecord *v7; // rsi
  __int64 v8; // rcx

  v3 = a2;
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                       **(HWND **)(*(_QWORD *)this + 8LL * a2));
  if ( WindowDataByHwnd )
    CTransitionVisualController::RestoreWindow(
      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
      WindowDataByHwnd,
      1);
  v5 = *(_QWORD *)this;
  v6 = *((_DWORD *)this + 6);
  v7 = *(CWindowPropertyTracker::CPropertyChangeRecord **)(*(_QWORD *)this + 8 * v3);
  if ( (unsigned int)v3 < v6 )
  {
    for ( ; (unsigned int)v3 < v6 - 1; v6 = *((_DWORD *)this + 6) )
    {
      v8 = (unsigned int)v3;
      LODWORD(v3) = v3 + 1;
      *(_QWORD *)(v5 + 8 * v8) = *(_QWORD *)(v5 + 8LL * (unsigned int)v3);
    }
    *((_DWORD *)this + 6) = v6 - 1;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x194u);
  }
  if ( v7 )
    CWindowPropertyTracker::CPropertyChangeRecord::`scalar deleting destructor'(v7);
}

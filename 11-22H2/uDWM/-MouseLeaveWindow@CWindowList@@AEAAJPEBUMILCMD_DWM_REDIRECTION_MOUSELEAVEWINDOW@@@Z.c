/*
 * XREFs of ?MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z @ 0x18010B248
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800321C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180007294 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800302A8 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::MouseLeaveWindow(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW *a2)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v5; // ebx
  CTopLevelWindow *v6; // rcx
  struct CWindowData *v8; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a2 + 4), &v8);
  v5 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    if ( v8 )
    {
      v6 = (CTopLevelWindow *)*((_QWORD *)v8 + 55);
      if ( v6 )
        CTopLevelWindow::NotifyMouseLeave(v6);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x1A6Bu);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v5;
}

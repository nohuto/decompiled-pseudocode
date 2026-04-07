/*
 * XREFs of ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D524C
 * Callers:
 *     ?StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D1BF0 (-StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D2EF0 (-StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800D35E0 (-UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D3830 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateWindowCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800D3B40 (-UpdateWindowCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 *     ?_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D59C0 (-_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@AEBU.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800301F4 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800302A8 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_SetProjectionBorderForWindow(
        CProjectionBorderManager *this,
        HWND a2,
        char a3)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v6; // ebx
  struct CWindowData *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CWindowData *v11; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+48h] [rbp+20h] BYREF

  v11 = this;
  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                             a2,
                             &v11);
  v6 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    v7 = v11;
    if ( v11 && *((_QWORD *)v11 + 55) )
    {
      if ( a3 )
      {
        if ( !*((_DWORD *)v11 + 118) )
          CWindowList::ShowProjectionBorder(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54), v11, 1);
        ++*((_DWORD *)v7 + 118);
      }
      else if ( (*((_DWORD *)v11 + 118))-- == 1 )
      {
        CWindowList::ShowProjectionBorder(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54), v7, 0);
      }
    }
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A3,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)SyncedWindowDataByHwnd);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v6;
}

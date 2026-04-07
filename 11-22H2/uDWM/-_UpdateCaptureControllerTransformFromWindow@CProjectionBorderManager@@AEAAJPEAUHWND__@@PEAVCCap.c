/*
 * XREFs of ?_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D5820
 * Callers:
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D41C8 (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual.c)
 * Callees:
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x180007928 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800302A8 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800D4A44 (-_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z @ 0x1800D5120 (-_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_UpdateCaptureControllerTransformFromWindow(
        CProjectionBorderManager *this,
        HWND a2,
        struct CCaptureControllerProxy *a3)
{
  int ProxyWindowHandle; // eax
  unsigned int v6; // ebx
  HWND v8; // rbx
  int SyncedWindowDataByHwnd; // eax
  __int64 v10; // rdx
  CTopLevelWindow *v11; // rcx
  CProjectionBorderManager *v12; // rcx
  struct _MARGINS v13; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  HWND v15; // [rsp+60h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+68h] [rbp+38h] BYREF

  if ( a3 )
  {
    v15 = 0LL;
    ProxyWindowHandle = CProjectionBorderManager::_GetProxyWindowHandle(this, a2, &v15);
    v6 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x51F,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)ProxyWindowHandle);
      return v6;
    }
    v8 = v15;
    if ( !v15 )
      v8 = a2;
    v16 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v15 = 0LL;
    SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                               v8,
                               (struct CWindowData **)&v15);
    v6 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v10 = 1320LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)SyncedWindowDataByHwnd);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
      return v6;
    }
    if ( v15 )
    {
      v11 = (CTopLevelWindow *)*((_QWORD *)v15 + 55);
      if ( v11 )
      {
        CTopLevelWindow::GetFrameMargins(v11, &v13);
        SyncedWindowDataByHwnd = CProjectionBorderManager::_SetCaptureControllerOffsetTransform(
                                   v12,
                                   a3,
                                   -v13.cxLeftWidth,
                                   -v13.cyTopHeight);
        v6 = SyncedWindowDataByHwnd;
        if ( SyncedWindowDataByHwnd < 0 )
        {
          v10 = 1328LL;
          goto LABEL_13;
        }
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  }
  return 0LL;
}

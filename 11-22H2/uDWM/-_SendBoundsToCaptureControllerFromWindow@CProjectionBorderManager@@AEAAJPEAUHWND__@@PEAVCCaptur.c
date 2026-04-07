/*
 * XREFs of ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D4F60
 * Callers:
 *     ?UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800D35E0 (-UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D3830 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D41C8 (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual.c)
 * Callees:
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x180007928 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800302A8 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetContentSize@CCaptureControllerProxy@@QEAAJNN@Z @ 0x1800AD2D8 (-SetContentSize@CCaptureControllerProxy@@QEAAJNN@Z.c)
 *     ?_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800D4A44 (-_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@_N@Z @ 0x1800D4BDC (-_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_SendBoundsToCaptureControllerFromWindow(
        CProjectionBorderManager *this,
        HWND a2,
        struct CCaptureControllerProxy *a3)
{
  int ProxyWindowHandle; // eax
  unsigned int v6; // ebx
  HWND v8; // rbx
  int SyncedWindowDataByHwnd; // eax
  struct _RTL_CRITICAL_SECTION *v10; // rcx
  __int64 v11; // rdx
  HWND v12; // rbx
  int v13; // eax
  int v14; // edi
  unsigned __int64 v15; // xmm0_8
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r8d
  int v19; // eax
  struct _MARGINS v20; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  HWND v22; // [rsp+60h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+68h] [rbp+38h] BYREF

  if ( a3 )
  {
    v22 = 0LL;
    ProxyWindowHandle = CProjectionBorderManager::_GetProxyWindowHandle(this, a2, &v22);
    v6 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F9,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)ProxyWindowHandle);
      return v6;
    }
    v8 = v22;
    if ( !v22 )
      v8 = a2;
    v23 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v22 = 0LL;
    SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                               v8,
                               (struct CWindowData **)&v22);
    v6 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v11 = 1282LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)SyncedWindowDataByHwnd);
      goto LABEL_21;
    }
    v12 = v22;
    if ( v22 && *((_QWORD *)v22 + 55) )
    {
      if ( ((_DWORD)v22[29] & 0x20000000) != 0 )
      {
        v13 = CProjectionBorderManager::_PauseOrResumeWindowCapture(v10, a3, 0);
        v14 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x508,
            (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
            (const char *)(unsigned int)v13);
          v6 = v14;
LABEL_21:
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
          return v6;
        }
      }
      CTopLevelWindow::GetFrameMargins(*((CTopLevelWindow **)v12 + 55), &v20);
      v15 = _mm_srli_si128(*((__m128i *)v12 + 3), 8).m128i_u64[0];
      v16 = *((_QWORD *)v12 + 6);
      v17 = 0;
      if ( (int)v15 - (int)v16 >= 0 )
        v17 = v15 - v16;
      v18 = v17 - v20.cxRightWidth - v20.cxLeftWidth;
      v19 = 0;
      if ( HIDWORD(v15) - HIDWORD(v16) >= 0 )
        v19 = HIDWORD(v15) - HIDWORD(v16);
      SyncedWindowDataByHwnd = CCaptureControllerProxy::SetContentSize(
                                 a3,
                                 (double)v18,
                                 (double)(v19 - v20.cyTopHeight - v20.cyBottomHeight));
      v6 = SyncedWindowDataByHwnd;
      if ( SyncedWindowDataByHwnd < 0 )
      {
        v11 = 1299LL;
        goto LABEL_20;
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
  }
  return 0LL;
}

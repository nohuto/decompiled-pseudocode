/*
 * XREFs of ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CFCE0
 * Callers:
 *     ?UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800CE6F0 (-UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CE8C0 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CF0F8 (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x18001B810 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180020CF0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?SetContentSize@CCaptureControllerProxy@@QEAAJNN@Z @ 0x1800A8248 (-SetContentSize@CCaptureControllerProxy@@QEAAJNN@Z.c)
 *     ?_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800CF7D8 (-_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@_N@Z @ 0x1800CF970 (-_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@_N@Z.c)
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
  __int64 v10; // rdx
  __m128i *v11; // rdi
  struct _RTL_CRITICAL_SECTION *v12; // rcx
  unsigned __int64 v13; // xmm0_8
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r8d
  int v17; // eax
  struct _MARGINS v18; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  HWND v20; // [rsp+60h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+68h] [rbp+38h] BYREF

  if ( a3 )
  {
    v20 = 0LL;
    ProxyWindowHandle = CProjectionBorderManager::_GetProxyWindowHandle(this, a2, &v20);
    v6 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x439,
        (int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)ProxyWindowHandle);
      return v6;
    }
    v8 = v20;
    if ( !v20 )
      v8 = a2;
    v21 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v20 = 0LL;
    SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                               v8,
                               (struct CWindowData **)&v20);
    v6 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v10 = 1090LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)SyncedWindowDataByHwnd);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
      return v6;
    }
    v11 = (__m128i *)v20;
    if ( v20 )
    {
      v12 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v20 + 55);
      if ( v12 )
      {
        if ( ((_DWORD)v20[29] & 0x20000000) != 0 )
        {
          SyncedWindowDataByHwnd = CProjectionBorderManager::_PauseOrResumeWindowCapture(v12, a3, 0);
          v6 = SyncedWindowDataByHwnd;
          if ( SyncedWindowDataByHwnd < 0 )
          {
            v10 = 1096LL;
            goto LABEL_21;
          }
          v12 = (struct _RTL_CRITICAL_SECTION *)v11[27].m128i_i64[1];
        }
        CTopLevelWindow::GetFrameMargins((CTopLevelWindow *)v12, &v18);
        v13 = _mm_srli_si128(v11[3], 8).m128i_u64[0];
        v14 = v11[3].m128i_i64[0];
        v15 = 0;
        if ( (int)v13 - (int)v14 >= 0 )
          v15 = v13 - v14;
        v16 = v15 - v18.cxRightWidth - v18.cxLeftWidth;
        v17 = 0;
        if ( HIDWORD(v13) - HIDWORD(v14) >= 0 )
          v17 = HIDWORD(v13) - HIDWORD(v14);
        SyncedWindowDataByHwnd = CCaptureControllerProxy::SetContentSize(
                                   a3,
                                   (double)v16,
                                   (double)(v17 - v18.cyTopHeight - v18.cyBottomHeight));
        v6 = SyncedWindowDataByHwnd;
        if ( SyncedWindowDataByHwnd < 0 )
        {
          v10 = 1107LL;
          goto LABEL_21;
        }
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
  }
  return 0LL;
}

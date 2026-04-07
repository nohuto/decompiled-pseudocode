/*
 * XREFs of ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D3830
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800AD344 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800CFDDC (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800D0070 (--1UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800D05D8 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     ?StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x1800D1654 (-StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800D1F40 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowSWRVisual@@@Z @ 0x1800D4780 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 *     ?_GetHostWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800D496C (-_GetHostWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800D4A44 (-_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D4F60 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptur.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D524C (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D5350 (-_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800D5470 (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D59C0 (-_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@AEBU.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CProjectionBorderManager::UpdateWindowCapture(
        struct _RTL_GENERIC_TABLE *this,
        HWND a2,
        const struct DWM_CAPTURE_TOKEN *a3)
{
  int v6; // edi
  int v7; // ebx
  CProjectionBorderManager *v8; // rcx
  int HostWindowHandle; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  _QWORD *Element; // rax
  CProjectionBorderManager *v13; // rcx
  HWND v14; // rdi
  HWND v15; // rbx
  CProjectionBorderManager *v16; // rcx
  int CapturedItemRootVisual; // esi
  __int64 v18; // rdx
  struct CapturedWindowSWRVisual *v19; // r8
  CCaptureControllerProxy **v20; // r15
  CProjectionBorderManager *v21; // rcx
  CProjectionBorderManager *v22; // rcx
  CProjectionBorderManager *v23; // rcx
  CProjectionBorderManager *v24; // rcx
  int v25; // eax
  unsigned int v26; // edi
  struct CapturedWindowSWRVisual *v28; // [rsp+20h] [rbp-E0h] BYREF
  HWND v29; // [rsp+28h] [rbp-D8h] BYREF
  struct CVisualProxy *v30; // [rsp+30h] [rbp-D0h] BYREF
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v32[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v31 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v30 = 0LL;
  v28 = 0LL;
  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v32,
    (__int64)"UpdateWindowCapture");
  v32[0] = (__int64)&WindowFrameLoggingTelemetry::UpdateWindowCapture::`vftable';
  WindowFrameLoggingTelemetry::UpdateWindowCapture::StartActivity(
    (WindowFrameLoggingTelemetry::UpdateWindowCapture *)v32,
    a2,
    v7,
    v6);
  v29 = 0LL;
  HostWindowHandle = CProjectionBorderManager::_GetHostWindowHandle(v8, a2, &v29);
  v10 = HostWindowHandle;
  if ( HostWindowHandle >= 0 )
  {
    Element = CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
                this + 6,
                *(_QWORD *)a3);
    if ( !Element || !Element[2] )
    {
      v10 = -2147024809;
      goto LABEL_33;
    }
    v14 = v29;
    if ( (HWND)Element[2] != v29 )
    {
      v29 = 0LL;
      HostWindowHandle = CProjectionBorderManager::_GetProxyWindowHandle(v13, v14, &v29);
      v10 = HostWindowHandle;
      if ( HostWindowHandle < 0 )
      {
        v11 = 409LL;
        goto LABEL_8;
      }
      v15 = v29;
      if ( !v29 )
        v15 = v14;
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v28);
      CapturedItemRootVisual = CProjectionBorderManager::_GetCapturedItemRootVisual(v16, v15, &v30, &v28);
      if ( CapturedItemRootVisual < 0 )
      {
        v18 = 416LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)CapturedItemRootVisual);
        v10 = CapturedItemRootVisual;
        goto LABEL_33;
      }
      v19 = v28;
      v28 = 0LL;
      CapturedItemRootVisual = CProjectionBorderManager::_UpdateTabGroupMap(
                                 (CProjectionBorderManager *)this,
                                 v14,
                                 v19,
                                 a3);
      if ( CapturedItemRootVisual < 0 )
      {
        v18 = 417LL;
        goto LABEL_13;
      }
      v20 = (CCaptureControllerProxy **)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
                                          this + 6,
                                          *(_QWORD *)a3);
      CapturedItemRootVisual = CCaptureControllerProxy::SetRootVisual(v20[1], v30);
      if ( CapturedItemRootVisual < 0 )
      {
        v18 = 422LL;
        goto LABEL_13;
      }
      CapturedItemRootVisual = CProjectionBorderManager::_SendBoundsToCaptureControllerFromWindow(
                                 (CProjectionBorderManager *)this,
                                 v15,
                                 v20[1]);
      if ( CapturedItemRootVisual < 0 )
      {
        v18 = 424LL;
        goto LABEL_13;
      }
      CapturedItemRootVisual = CProjectionBorderManager::_SetProjectionBorderForWindow(v21, v15, 1);
      if ( CapturedItemRootVisual < 0 )
      {
        v18 = 427LL;
        goto LABEL_13;
      }
      CapturedItemRootVisual = CProjectionBorderManager::_SetScreenCaptureForWindow(v22, v15, 1);
      if ( CapturedItemRootVisual < 0 )
      {
        v18 = 428LL;
        goto LABEL_13;
      }
      if ( v15 != v14 )
      {
        CapturedItemRootVisual = CProjectionBorderManager::_SetProjectionBorderForWindow(v23, v14, 1);
        if ( CapturedItemRootVisual < 0 )
        {
          v18 = 431LL;
          goto LABEL_13;
        }
        v25 = CProjectionBorderManager::_SetScreenCaptureForWindow(v24, v14, 1);
        v26 = v25;
        if ( v25 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1B0,
            (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
            (const char *)(unsigned int)v25);
          v10 = v26;
          goto LABEL_33;
        }
      }
      HostWindowHandle = CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoost(
                           (CProjectionBorderManager *)this,
                           v15);
      v10 = HostWindowHandle;
      if ( HostWindowHandle < 0 )
      {
        v11 = 434LL;
        goto LABEL_8;
      }
    }
    wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v32, 0);
    v10 = 0;
    goto LABEL_33;
  }
  v11 = 393LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)HostWindowHandle);
LABEL_33:
  WindowFrameLoggingTelemetry::UpdateWindowCapture::~UpdateWindowCapture((WindowFrameLoggingTelemetry::UpdateWindowCapture *)v32);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v28);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v31);
  return v10;
}

/*
 * XREFs of ?StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D1BF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800AD344 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCCaptureControllerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCCaptureControllerProxy@@@Z @ 0x1800AE4AC (--$CreateProxyFromSharedHandle@VCCaptureControllerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCCaptureC.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800CFDDC (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1StartWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800CFFEC (--1StartWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800D05D8 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     ?StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x1800D13A8 (-StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800D1F40 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D41C8 (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowSWRVisual@@@Z @ 0x1800D4780 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 *     ?_GetHostWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800D496C (-_GetHostWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800D4A44 (-_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D524C (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D5350 (-_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800D5470 (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CProjectionBorderManager::StartWindowCapture(
        struct _RTL_GENERIC_TABLE *this,
        HWND a2,
        void *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  int v8; // edi
  int v9; // ebx
  int v10; // ebx
  int HostWindowHandle; // eax
  CProjectionBorderManager *v12; // rcx
  CProjectionBorderManager *v13; // rcx
  HWND v14; // rsi
  HWND v15; // rdi
  CProjectionBorderManager *v16; // rcx
  struct CapturedWindowSWRVisual *v17; // r8
  CProjectionBorderManager *v18; // rcx
  CProjectionBorderManager *v19; // rcx
  CProjectionBorderManager *v20; // rcx
  CProjectionBorderManager *v21; // rcx
  unsigned int v23; // [rsp+20h] [rbp-E0h]
  struct CapturedWindowSWRVisual *v24; // [rsp+30h] [rbp-D0h] BYREF
  CCaptureControllerProxy *v25; // [rsp+38h] [rbp-C8h] BYREF
  HWND v26; // [rsp+40h] [rbp-C0h] BYREF
  HWND v27; // [rsp+48h] [rbp-B8h] BYREF
  struct CVisualProxy *v28; // [rsp+50h] [rbp-B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v30[40]; // [rsp+60h] [rbp-A0h] BYREF

  v29 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v28 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v8 = *(_DWORD *)a4;
  v9 = *((_DWORD *)a4 + 1);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v30,
    (__int64)"StartWindowCapture");
  v30[0] = &WindowFrameLoggingTelemetry::StartWindowCapture::`vftable';
  WindowFrameLoggingTelemetry::StartWindowCapture::StartActivity(
    (WindowFrameLoggingTelemetry::StartWindowCapture *)v30,
    a2,
    v9,
    v8);
  if ( CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
         this + 6,
         *(_QWORD *)a4) )
  {
    v10 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147418113, 0x142u);
    goto LABEL_29;
  }
  HostWindowHandle = CCompositor::CreateProxyFromSharedHandle<CCaptureControllerProxy>(
                       *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                       (__int64)a3,
                       &v25);
  v10 = HostWindowHandle;
  if ( HostWindowHandle >= 0 )
  {
    v26 = 0LL;
    HostWindowHandle = CProjectionBorderManager::_GetHostWindowHandle(v12, a2, &v26);
    v10 = HostWindowHandle;
    if ( HostWindowHandle >= 0 )
    {
      v27 = 0LL;
      v14 = v26;
      HostWindowHandle = CProjectionBorderManager::_GetProxyWindowHandle(v13, v26, &v27);
      v10 = HostWindowHandle;
      if ( HostWindowHandle >= 0 )
      {
        v15 = v27;
        if ( !v27 )
          v15 = v14;
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v24);
        HostWindowHandle = CProjectionBorderManager::_GetCapturedItemRootVisual(v16, v15, &v28, &v24);
        v10 = HostWindowHandle;
        if ( HostWindowHandle >= 0 )
        {
          HostWindowHandle = CCaptureControllerProxy::SetRootVisual(v25, v28);
          v10 = HostWindowHandle;
          if ( HostWindowHandle >= 0 )
          {
            v17 = v24;
            v24 = 0LL;
            HostWindowHandle = CProjectionBorderManager::_AddTabGroupCaptureEntry(
                                 (CProjectionBorderManager *)this,
                                 v14,
                                 v17,
                                 v25,
                                 a4);
            v10 = HostWindowHandle;
            if ( HostWindowHandle >= 0 )
            {
              HostWindowHandle = CProjectionBorderManager::_SetProjectionBorderForWindow(v18, v15, 1);
              v10 = HostWindowHandle;
              if ( HostWindowHandle >= 0 )
              {
                HostWindowHandle = CProjectionBorderManager::_SetScreenCaptureForWindow(v19, v15, 1);
                v10 = HostWindowHandle;
                if ( HostWindowHandle >= 0 )
                {
                  if ( v15 != v14 )
                  {
                    HostWindowHandle = CProjectionBorderManager::_SetProjectionBorderForWindow(v20, v14, 1);
                    v10 = HostWindowHandle;
                    if ( HostWindowHandle < 0 )
                    {
                      v23 = 355;
                      goto LABEL_28;
                    }
                    HostWindowHandle = CProjectionBorderManager::_SetScreenCaptureForWindow(v21, v14, 1);
                    v10 = HostWindowHandle;
                    if ( HostWindowHandle < 0 )
                    {
                      v23 = 356;
                      goto LABEL_28;
                    }
                  }
                  HostWindowHandle = CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoost(
                                       (CProjectionBorderManager *)this,
                                       v15);
                  v10 = HostWindowHandle;
                  if ( HostWindowHandle >= 0 )
                    goto LABEL_29;
                  v23 = 358;
                }
                else
                {
                  v23 = 352;
                }
              }
              else
              {
                v23 = 351;
              }
            }
            else
            {
              v23 = 349;
            }
          }
          else
          {
            v23 = 346;
          }
        }
        else
        {
          v23 = 344;
        }
      }
      else
      {
        v23 = 336;
      }
    }
    else
    {
      v23 = 332;
    }
  }
  else
  {
    v23 = 325;
  }
LABEL_28:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, HostWindowHandle, v23);
LABEL_29:
  if ( a3 )
    CloseHandle(a3);
  if ( v25 && v10 < 0 )
    CBaseObject::Release(v25);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v30,
    (unsigned int)v10);
  WindowFrameLoggingTelemetry::StartWindowCapture::~StartWindowCapture((WindowFrameLoggingTelemetry::StartWindowCapture *)v30);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v24);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v29);
  return (unsigned int)v10;
}

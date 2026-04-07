/*
 * XREFs of ?StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CCE40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800A8284 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCCaptureControllerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCCaptureControllerProxy@@@Z @ 0x1800A9460 (--$CreateProxyFromSharedHandle@VCCaptureControllerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCCaptureC.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800CB690 (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1StartWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800CB894 (--1StartWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800CBE7C (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     ?StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x1800CC5F4 (-StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800CD154 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CF0F8 (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowSWRVisual@@@Z @ 0x1800CF640 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 *     ?_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800CF7D8 (-_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800CFFBC (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D00C8 (-_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CProjectionBorderManager::StartWindowCapture(
        struct _RTL_GENERIC_TABLE *this,
        HWND a2,
        void *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  struct CCaptureControllerProxy *v8; // rsi
  int v9; // ebx
  int v10; // edi
  int v11; // ebx
  int v12; // eax
  CProjectionBorderManager *v13; // rcx
  int ProxyWindowHandle; // eax
  HWND v15; // rdi
  CProjectionBorderManager *v16; // rcx
  int CapturedItemRootVisual; // eax
  int v18; // eax
  struct CapturedWindowSWRVisual *v19; // r8
  CProjectionBorderManager *v20; // rcx
  CProjectionBorderManager *v21; // rcx
  CProjectionBorderManager *v22; // rcx
  CProjectionBorderManager *v23; // rcx
  unsigned int v25; // [rsp+20h] [rbp-E0h]
  CCaptureControllerProxy *v26; // [rsp+30h] [rbp-D0h] BYREF
  struct CapturedWindowSWRVisual *v27; // [rsp+38h] [rbp-C8h] BYREF
  HWND v28; // [rsp+40h] [rbp-C0h] BYREF
  struct CVisualProxy *v29; // [rsp+48h] [rbp-B8h] BYREF
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v31[40]; // [rsp+60h] [rbp-A0h] BYREF

  v30 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v29 = 0LL;
  v8 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v9 = *(_DWORD *)a4;
  v10 = *((_DWORD *)a4 + 1);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v31,
    (__int64)"StartWindowCapture");
  v31[0] = &WindowFrameLoggingTelemetry::StartWindowCapture::`vftable';
  WindowFrameLoggingTelemetry::StartWindowCapture::StartActivity(
    (WindowFrameLoggingTelemetry::StartWindowCapture *)v31,
    a2,
    v10,
    v9);
  if ( CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
         this + 6,
         *(_QWORD *)a4) )
  {
    v11 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147418113, 0x142u);
    goto LABEL_26;
  }
  v12 = CCompositor::CreateProxyFromSharedHandle<CCaptureControllerProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
          (__int64)a3,
          &v26);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x145u);
LABEL_5:
    v8 = v26;
    goto LABEL_26;
  }
  v28 = 0LL;
  ProxyWindowHandle = CProjectionBorderManager::_GetProxyWindowHandle(v13, a2, &v28);
  v11 = ProxyWindowHandle;
  if ( ProxyWindowHandle < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ProxyWindowHandle, 0x149u);
    goto LABEL_5;
  }
  v15 = v28;
  if ( !v28 )
    v15 = a2;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v27);
  CapturedItemRootVisual = CProjectionBorderManager::_GetCapturedItemRootVisual(v16, v15, &v29, &v27);
  v11 = CapturedItemRootVisual;
  if ( CapturedItemRootVisual < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CapturedItemRootVisual, 0x151u);
    goto LABEL_5;
  }
  v8 = v26;
  v18 = CCaptureControllerProxy::SetRootVisual(v26, v29);
  v11 = v18;
  if ( v18 >= 0 )
  {
    v19 = v27;
    v27 = 0LL;
    v18 = CProjectionBorderManager::_AddTabGroupCaptureEntry((CProjectionBorderManager *)this, a2, v19, v8, a4);
    v11 = v18;
    if ( v18 >= 0 )
    {
      v18 = CProjectionBorderManager::_SetProjectionBorderForWindow(v20, v15, 1);
      v11 = v18;
      if ( v18 >= 0 )
      {
        v18 = CProjectionBorderManager::_SetScreenCaptureForWindow(v21, v15, 1);
        v11 = v18;
        if ( v18 >= 0 )
        {
          if ( v15 == a2 )
            goto LABEL_26;
          v18 = CProjectionBorderManager::_SetProjectionBorderForWindow(v22, a2, 1);
          v11 = v18;
          if ( v18 >= 0 )
          {
            v18 = CProjectionBorderManager::_SetScreenCaptureForWindow(v23, a2, 1);
            v11 = v18;
            if ( v18 >= 0 )
              goto LABEL_26;
            v25 = 349;
          }
          else
          {
            v25 = 348;
          }
        }
        else
        {
          v25 = 345;
        }
      }
      else
      {
        v25 = 344;
      }
    }
    else
    {
      v25 = 342;
    }
  }
  else
  {
    v25 = 339;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, v25);
LABEL_26:
  if ( a3 )
    CloseHandle(a3);
  if ( v8 && v11 < 0 )
    CBaseObject::Release(v8);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v31,
    (unsigned int)v11);
  WindowFrameLoggingTelemetry::StartWindowCapture::~StartWindowCapture((WindowFrameLoggingTelemetry::StartWindowCapture *)v31);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v27);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v30);
  return (unsigned int)v11;
}

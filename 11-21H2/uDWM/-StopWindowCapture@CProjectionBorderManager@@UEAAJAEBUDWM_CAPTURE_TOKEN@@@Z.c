/*
 * XREFs of ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CE050
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800A8284 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAHPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@Z @ 0x1800B144C (-RemoveElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorde.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800CB690 (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1StopWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800CB8EC (--1StopWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800CBE7C (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     ?StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800CC7CC (-StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800CD154 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x1800CF26C (-_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ.c)
 *     ?_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800CF7D8 (-_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800CFFBC (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D00C8 (-_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProjectionBorderManager::StopWindowCapture(
        struct _RTL_GENERIC_TABLE *this,
        const struct DWM_CAPTURE_TOKEN *a2)
{
  int v4; // ebx
  int v5; // edi
  HWND *Element; // rax
  CProjectionBorderManager *v7; // rcx
  HWND *v8; // rsi
  unsigned int v9; // edi
  int ProxyWindowHandle; // eax
  int v11; // ebx
  __int64 v12; // rdx
  CProjectionBorderManager *v13; // rcx
  CProjectionBorderManager *v14; // rcx
  HWND v15; // rsi
  CProjectionBorderManager *v16; // rcx
  HWND v18; // [rsp+20h] [rbp-188h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+28h] [rbp-180h] BYREF
  _QWORD v20[40]; // [rsp+30h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v19 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_DWORD *)a2;
  v5 = *((_DWORD *)a2 + 1);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v20,
    (__int64)"StopWindowCapture");
  v20[0] = &WindowFrameLoggingTelemetry::StopWindowCapture::`vftable';
  WindowFrameLoggingTelemetry::StopWindowCapture::StartActivity(
    (WindowFrameLoggingTelemetry::StopWindowCapture *)v20,
    v5,
    v4);
  Element = (HWND *)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
                      this + 6,
                      *(_QWORD *)a2);
  v8 = Element;
  v9 = 0;
  if ( !Element )
  {
    v11 = -2147418113;
    goto LABEL_20;
  }
  if ( *((_BYTE *)Element + 32) )
  {
    ProxyWindowHandle = CProjectionBorderManager::_SetProjectionBorderForWindow(v7, Element[2], 0);
    v11 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      v12 = 412LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)ProxyWindowHandle);
LABEL_20:
      v9 = v11;
      goto LABEL_21;
    }
  }
  ProxyWindowHandle = CProjectionBorderManager::_SetScreenCaptureForWindow(v7, v8[2], 0);
  v11 = ProxyWindowHandle;
  if ( ProxyWindowHandle < 0 )
  {
    v12 = 414LL;
    goto LABEL_17;
  }
  ProxyWindowHandle = CCaptureControllerProxy::SetRootVisual((CCaptureControllerProxy *)v8[1], 0LL);
  v11 = ProxyWindowHandle;
  if ( ProxyWindowHandle < 0 )
  {
    v12 = 418LL;
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease((CBaseObject **)v8 + 1);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease((CBaseObject **)v8 + 3);
  CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::RemoveElement(
    this + 6,
    (CBaseObject **)v8);
  CProjectionBorderManager::_EnsureCursorStateForCapture((CProjectionBorderManager *)this);
  if ( *((_BYTE *)v8 + 32) )
  {
    v18 = 0LL;
    ProxyWindowHandle = CProjectionBorderManager::_GetProxyWindowHandle(v13, v8[2], &v18);
    v11 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      v12 = 429LL;
      goto LABEL_17;
    }
    v15 = v18;
    if ( v18 )
    {
      ProxyWindowHandle = CProjectionBorderManager::_SetProjectionBorderForWindow(v14, v18, 0);
      v11 = ProxyWindowHandle;
      if ( ProxyWindowHandle < 0 )
      {
        v12 = 432LL;
        goto LABEL_17;
      }
      ProxyWindowHandle = CProjectionBorderManager::_SetScreenCaptureForWindow(v16, v15, 0);
      v11 = ProxyWindowHandle;
      if ( ProxyWindowHandle < 0 )
      {
        v12 = 433LL;
        goto LABEL_17;
      }
    }
  }
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v20,
    0);
LABEL_21:
  WindowFrameLoggingTelemetry::StopWindowCapture::~StopWindowCapture((WindowFrameLoggingTelemetry::StopWindowCapture *)v20);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
  return v9;
}

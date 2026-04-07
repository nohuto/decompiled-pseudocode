/*
 * XREFs of ?StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D2D60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800AD344 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAHPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@Z @ 0x1800B58F8 (-RemoveElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderM.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800CFDDC (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800D0018 (--1StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800D0574 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderMan.c)
 *     ?StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800D14A4 (-StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800D1F40 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x1800D433C (-_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProjectionBorderManager::StopVirtualMonitorCapture(
        struct _RTL_GENERIC_TABLE *this,
        const struct DWM_CAPTURE_TOKEN *a2)
{
  int v4; // edi
  int v5; // ebx
  CBaseObject **Element; // rax
  CBaseObject **v7; // rsi
  int v8; // eax
  unsigned int v9; // ebx
  int v11[2]; // [rsp+20h] [rbp-178h] BYREF
  __int64 v12[40]; // [rsp+30h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  *(_QWORD *)v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_DWORD *)a2;
  v5 = *((_DWORD *)a2 + 1);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v12,
    (__int64)"StopDisplayCapture");
  v12[0] = (__int64)&WindowFrameLoggingTelemetry::StopDisplayCapture::`vftable';
  WindowFrameLoggingTelemetry::StopDisplayCapture::StartActivity(
    (WindowFrameLoggingTelemetry::StopDisplayCapture *)v12,
    v5,
    v4);
  Element = (CBaseObject **)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::FindElement(
                              this + 7,
                              *(_QWORD *)a2);
  v7 = Element;
  if ( Element )
  {
    v8 = CCaptureControllerProxy::SetRootVisual(Element[1], 0LL);
    v9 = v8;
    if ( v8 >= 0 )
    {
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v7 + 1);
      CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::RemoveElement(this + 7, v7);
      CProjectionBorderManager::_EnsureCursorStateForCapture((CProjectionBorderManager *)this);
      wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v12, 0);
      WindowFrameLoggingTelemetry::StopDisplayCapture::~StopDisplayCapture((WindowFrameLoggingTelemetry::StopDisplayCapture *)v12);
      CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v11);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26D,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v8);
      WindowFrameLoggingTelemetry::StopDisplayCapture::~StopDisplayCapture((WindowFrameLoggingTelemetry::StopDisplayCapture *)v12);
      CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v11);
      return v9;
    }
  }
  else
  {
    WindowFrameLoggingTelemetry::StopDisplayCapture::~StopDisplayCapture((WindowFrameLoggingTelemetry::StopDisplayCapture *)v12);
    CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v11);
    return 2147549183LL;
  }
}

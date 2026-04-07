/*
 * XREFs of ?StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D1760
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800AD344 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCCaptureControllerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCCaptureControllerProxy@@@Z @ 0x1800AE4AC (--$CreateProxyFromSharedHandle@VCCaptureControllerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCCaptureC.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800CFDDC (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800CFFC0 (--1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800D0574 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderMan.c)
 *     ?StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z @ 0x1800D12AC (-StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800D1F40 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800D3C64 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPr.c)
 *     ?_GetDesktopRootVisual@CProjectionBorderManager@@AEAAJPEAPEAVCVisualProxy@@@Z @ 0x1800D48CC (-_GetDesktopRootVisual@CProjectionBorderManager@@AEAAJPEAPEAVCVisualProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProjectionBorderManager::StartDisplayCapture(
        struct _RTL_GENERIC_TABLE *this,
        HMONITOR a2,
        HANDLE hObject,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  struct CCaptureControllerProxy *v8; // rsi
  int v9; // edi
  int v10; // ebx
  int v11; // ebx
  int v12; // eax
  CProjectionBorderManager *v13; // rcx
  int DesktopRootVisual; // eax
  int v15; // eax
  unsigned int v17; // [rsp+20h] [rbp-E0h]
  CCaptureControllerProxy *v18; // [rsp+30h] [rbp-D0h] BYREF
  struct CVisualProxy *v19; // [rsp+38h] [rbp-C8h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v21[40]; // [rsp+50h] [rbp-B0h] BYREF

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v19 = 0LL;
  v8 = 0LL;
  v18 = 0LL;
  v9 = *(_DWORD *)a4;
  v10 = *((_DWORD *)a4 + 1);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v21,
    (__int64)"StartDisplayCapture");
  v21[0] = &WindowFrameLoggingTelemetry::StartDisplayCapture::`vftable';
  WindowFrameLoggingTelemetry::StartDisplayCapture::StartActivity(
    (WindowFrameLoggingTelemetry::StartDisplayCapture *)v21,
    a2,
    v10,
    v9);
  if ( CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::FindElement(
         this + 7,
         *(_QWORD *)a4) )
  {
    v11 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147418113, 0x1F9u);
    goto LABEL_13;
  }
  v12 = CCompositor::CreateProxyFromSharedHandle<CCaptureControllerProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
          (__int64)hObject,
          &v18);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x1FCu);
LABEL_5:
    v8 = v18;
    goto LABEL_13;
  }
  DesktopRootVisual = CProjectionBorderManager::_GetDesktopRootVisual(v13, &v19);
  v11 = DesktopRootVisual;
  if ( DesktopRootVisual < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DesktopRootVisual, 0x1FEu);
    goto LABEL_5;
  }
  v8 = v18;
  v15 = CCaptureControllerProxy::SetRootVisual(v18, v19);
  v11 = v15;
  if ( v15 >= 0 )
  {
    v15 = CProjectionBorderManager::_AddDisplayCaptureEntry((CProjectionBorderManager *)this, a2, v8, a4, 1);
    v11 = v15;
    if ( v15 >= 0 )
      goto LABEL_13;
    v17 = 513;
  }
  else
  {
    v17 = 511;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, v17);
LABEL_13:
  if ( hObject )
    CloseHandle(hObject);
  if ( v8 && v11 < 0 )
    CBaseObject::Release(v8);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v21,
    (unsigned int)v11);
  WindowFrameLoggingTelemetry::StartDisplayCapture::~StartDisplayCapture((WindowFrameLoggingTelemetry::StartDisplayCapture *)v21);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  return (unsigned int)v11;
}

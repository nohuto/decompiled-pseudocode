/*
 * XREFs of ?StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D1980
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800AD344 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCCaptureControllerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCCaptureControllerProxy@@@Z @ 0x1800AE4AC (--$CreateProxyFromSharedHandle@VCCaptureControllerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCCaptureC.c)
 *     ?IsMonitorVirtual@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x1800B5248 (-IsMonitorVirtual@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800CFDDC (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800CFFC0 (--1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800D0574 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderMan.c)
 *     ?StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z @ 0x1800D12AC (-StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800D1F40 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800D3C64 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPr.c)
 *     ?_GetDesktopRootVisual@CProjectionBorderManager@@AEAAJPEAPEAVCVisualProxy@@@Z @ 0x1800D48CC (-_GetDesktopRootVisual@CProjectionBorderManager@@AEAAJPEAPEAVCVisualProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProjectionBorderManager::StartVirtualMonitorCapture(
        struct _RTL_GENERIC_TABLE *this,
        HMONITOR a2,
        HANDLE hObject,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  struct CCaptureControllerProxy *v8; // rsi
  int v9; // edi
  int v10; // ebx
  int IsMonitorVirtual; // eax
  int v12; // ebx
  int v13; // r9d
  int v14; // eax
  CProjectionBorderManager *v15; // rcx
  int DesktopRootVisual; // eax
  unsigned int v18; // [rsp+20h] [rbp-E0h]
  bool v19; // [rsp+30h] [rbp-D0h] BYREF
  CCaptureControllerProxy *v20; // [rsp+38h] [rbp-C8h] BYREF
  struct CVisualProxy *v21; // [rsp+40h] [rbp-C0h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v23[40]; // [rsp+50h] [rbp-B0h] BYREF

  v22 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v21 = 0LL;
  v8 = 0LL;
  v20 = 0LL;
  v19 = 0;
  v9 = *(_DWORD *)a4;
  v10 = *((_DWORD *)a4 + 1);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v23,
    (__int64)"StartDisplayCapture");
  v23[0] = &WindowFrameLoggingTelemetry::StartDisplayCapture::`vftable';
  WindowFrameLoggingTelemetry::StartDisplayCapture::StartActivity(
    (WindowFrameLoggingTelemetry::StartDisplayCapture *)v23,
    a2,
    v10,
    v9);
  IsMonitorVirtual = CDesktopManager::IsMonitorVirtual(
                       (CDWMDXGIEnumeration **)CDesktopManager::s_pDesktopManagerInstance,
                       a2,
                       &v19);
  v12 = IsMonitorVirtual;
  if ( IsMonitorVirtual < 0 )
  {
    v18 = 573;
LABEL_17:
    v13 = IsMonitorVirtual;
    goto LABEL_18;
  }
  if ( v19 )
  {
    if ( !CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::FindElement(
            this + 7,
            *(_QWORD *)a4) )
    {
      v14 = CCompositor::CreateProxyFromSharedHandle<CCaptureControllerProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
              (__int64)hObject,
              &v20);
      v12 = v14;
      if ( v14 >= 0 )
      {
        DesktopRootVisual = CProjectionBorderManager::_GetDesktopRootVisual(v15, &v21);
        v12 = DesktopRootVisual;
        if ( DesktopRootVisual >= 0 )
        {
          v8 = v20;
          IsMonitorVirtual = CCaptureControllerProxy::SetRootVisual(v20, v21);
          v12 = IsMonitorVirtual;
          if ( IsMonitorVirtual >= 0 )
          {
            IsMonitorVirtual = CProjectionBorderManager::_AddDisplayCaptureEntry(
                                 (CProjectionBorderManager *)this,
                                 a2,
                                 v8,
                                 a4,
                                 0);
            v12 = IsMonitorVirtual;
            if ( IsMonitorVirtual >= 0 )
              goto LABEL_19;
            v18 = 591;
          }
          else
          {
            v18 = 589;
          }
          goto LABEL_17;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DesktopRootVisual, 0x24Bu);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x249u);
      }
      v8 = v20;
      goto LABEL_19;
    }
    v12 = -2147418113;
    v18 = 582;
  }
  else
  {
    v12 = -2147024891;
    v18 = 577;
  }
  v13 = v12;
LABEL_18:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, v18);
LABEL_19:
  if ( hObject )
    CloseHandle(hObject);
  if ( v8 && v12 < 0 )
    CBaseObject::Release(v8);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v23,
    (unsigned int)v12);
  WindowFrameLoggingTelemetry::StartDisplayCapture::~StartDisplayCapture((WindowFrameLoggingTelemetry::StartDisplayCapture *)v23);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v22);
  return (unsigned int)v12;
}

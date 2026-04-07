/*
 * XREFs of ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D3F64
 * Callers:
 *     ?UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ @ 0x180057D70 (-UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ.c)
 *     ?UpdateDisplayCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800D3140 (-UpdateDisplayCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800D3C64 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPr.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D3E38 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800360BC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180046348 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800B4DE0 (-GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x1800D028C (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800D0574 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderMan.c)
 *     ?UpdateRect@CSolidRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x1800D5C70 (-UpdateRect@CSolidRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_AddProjectionBorderForDisplay(
        struct _RTL_GENERIC_TABLE *this,
        HMONITOR a2,
        const struct DWM_CAPTURE_TOKEN *a3)
{
  unsigned int *Element; // r14
  int v7; // ebx
  int DisplayRect; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r9
  struct CVisual *OverlayRootVisualForDesktop; // rax
  unsigned int v13; // eax
  unsigned int v14; // r8d
  int v15; // r9d
  unsigned int v16; // eax
  unsigned int v18; // [rsp+20h] [rbp-60h]
  CSolidRectangleVisual *v19; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v22; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v23; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v21 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  Element = (unsigned int *)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::FindElement(
                              this + 7,
                              *(_QWORD *)a3);
  if ( Element )
  {
    DisplayRect = CDesktopManager::GetDisplayRect((__int64)CDesktopManager::s_pDesktopManagerInstance, a2, &v22);
    v7 = DisplayRect;
    if ( DisplayRect < 0 )
    {
      v10 = 1470LL;
LABEL_5:
      v11 = (unsigned int)DisplayRect;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)v11);
      goto LABEL_21;
    }
    v23 = v22;
    if ( !(unsigned int)GetDesktopID(1LL, &v20, v9) )
    {
      v7 = -2147467259;
      v11 = 2147500037LL;
      v10 = 1479LL;
      goto LABEL_6;
    }
    DisplayRect = CProjectionBorderVisual::Create(&v19);
    v7 = DisplayRect;
    if ( DisplayRect < 0 )
    {
      v10 = 1482LL;
      goto LABEL_5;
    }
    *((_DWORD *)v19 + 77) = 1;
    OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                    v20,
                                    1);
    if ( !OverlayRootVisualForDesktop )
    {
      OverlayRootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                      v20);
      if ( !OverlayRootVisualForDesktop )
      {
        v7 = -2147467261;
        v11 = 2147500035LL;
        v10 = 1492LL;
        goto LABEL_6;
      }
    }
    DisplayRect = VisualCollection::InsertRelative(
                    (struct CVisual *)((char *)OverlayRootVisualForDesktop + 32),
                    (unsigned __int64)v19,
                    0LL,
                    0,
                    v18);
    v7 = DisplayRect;
    if ( DisplayRect < 0 )
    {
      v10 = 1493LL;
      goto LABEL_5;
    }
    CSolidRectangleVisual::UpdateRect(v19, &v23);
    (*(void (__fastcall **)(CSolidRectangleVisual *))(*(_QWORD *)v19 + 112LL))(v19);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v19 + 3) + 64LL))(*((_QWORD *)v19 + 3));
    v13 = Element[12];
    v14 = v13 + 1;
    if ( v13 + 1 < v13 )
    {
      v7 = -2147024362;
      v15 = -2147024362;
      v16 = 181;
LABEL_24:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, v16);
      v11 = (unsigned int)v7;
      v10 = 1498LL;
      goto LABEL_6;
    }
    if ( v14 > Element[11] )
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(Element + 6), 8, 1, &v19);
      v15 = v7;
      if ( v7 < 0 )
      {
        v16 = 192;
        goto LABEL_24;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)Element + 3) + 8LL * Element[12]) = v19;
      Element[12] = v14;
    }
    v7 = 0;
    goto LABEL_21;
  }
  v7 = -2147418113;
LABEL_21:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
  return (unsigned int)v7;
}

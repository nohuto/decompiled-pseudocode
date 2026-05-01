/*
 * XREFs of ?AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManagerAnimationHelper@@@Z @ 0x180452424
 * Callers:
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x180453214 (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@@Z @ 0x180454E08 (-Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperie.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x180748D8C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TAR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualTouchpadExperienceManager::AnimateFrame(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  unsigned int LastError; // ebx
  __int64 v10; // rdx
  const char *v11; // r9
  __int64 v12; // rdx
  HMONITOR v13; // rax
  __int64 v14; // r9
  struct tagRECT *p_Rect; // rcx
  __int64 v17; // [rsp+40h] [rbp-49h] BYREF
  HWND hWnd; // [rsp+48h] [rbp-41h] BYREF
  struct tagRECT Rect; // [rsp+50h] [rbp-39h] BYREF
  struct tagRECT v20; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT rc; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT v22; // [rsp+80h] [rbp-9h] BYREF
  struct tagMONITORINFO mi; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v17 = 0LL;
  v6 = *(_QWORD *)(a1 + 344);
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 32LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  v8 = v7(v6, &v17);
  LastError = v8;
  if ( v8 < 0 )
  {
    v10 = 882LL;
    goto LABEL_17;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v17 + 24LL))(v17, &hWnd);
  LastError = v8;
  if ( v8 < 0 )
  {
    v10 = 885LL;
    goto LABEL_17;
  }
  if ( GetWindowRect(hWnd, &Rect) )
  {
    rc = Rect;
    v13 = MonitorFromRect(&Rect, 2u);
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( GetMonitorInfoW(v13, &mi) )
    {
      if ( a2 )
      {
        if ( a2 != 1 )
        {
          LastError = -2147418113;
          v14 = 2147549183LL;
          v10 = 906LL;
LABEL_18:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v10,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
            (const char *)v14);
          goto LABEL_20;
        }
        p_Rect = &Rect;
      }
      else
      {
        p_Rect = &rc;
      }
      OffsetRect(p_Rect, 0, mi.rcMonitor.bottom - Rect.top);
      v22 = rc;
      v20 = Rect;
      OffsetRect(&v22, -rc.left, -rc.top);
      OffsetRect(&v20, -v20.left, -v20.top);
      v8 = CExperienceManagerAnimationHelper::Begin(
             a3,
             *(_QWORD *)(a1 + 344),
             562036744LL,
             &v22,
             &rc,
             &v20,
             &Rect,
             &mi.rcMonitor);
      LastError = v8;
      if ( v8 >= 0 )
      {
        LastError = 0;
        goto LABEL_20;
      }
      v10 = 918LL;
LABEL_17:
      v14 = (unsigned int)v8;
      goto LABEL_18;
    }
    v12 = 893LL;
  }
  else
  {
    v12 = 888LL;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)v12,
                (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                v11);
LABEL_20:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  return LastError;
}

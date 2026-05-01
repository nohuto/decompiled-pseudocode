/*
 * XREFs of ?SetHostedPos@FrameWrapper@@UEAAJPEBUtagRECT@@@Z @ 0x18030AE80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x18007A3FC (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FrameWrapper::SetHostedPos(FrameWrapper *this, const struct tagRECT *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  const char *v5; // r9
  __int64 v6; // rdx
  HMONITOR v8; // rsi
  RECT *p_rcMonitor; // rax
  RECT v10; // xmm0
  int v11; // eax
  LONG left; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 *v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  void *v18; // [rsp+20h] [rbp-79h] BYREF
  void *v19; // [rsp+28h] [rbp-71h] BYREF
  HWND hwnd; // [rsp+30h] [rbp-69h] BYREF
  RECT rc; // [rsp+38h] [rbp-61h] BYREF
  struct tagPOINT Points[2]; // [rsp+50h] [rbp-49h] BYREF
  struct tagRECT v23; // [rsp+60h] [rbp-39h] BYREF
  _DWORD v24[4]; // [rsp+70h] [rbp-29h] BYREF
  struct tagRECT Rect; // [rsp+80h] [rbp-19h] BYREF
  struct tagMONITORINFO mi; // [rsp+90h] [rbp-9h] BYREF
  __int128 v27; // [rsp+C0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  rc = *a2;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 2) + 120LL))(*((_QWORD *)this + 2), v24);
  if ( v3 >= 0 )
  {
    rc.left -= v24[0];
    rc.top -= v24[1];
    rc.right -= v24[2];
    rc.bottom -= v24[3];
    SetLastError(0);
    if ( !GetClientRect(*((HWND *)this + 4), &Rect) )
    {
      v6 = 139LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v6,
               (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
               v5);
    }
    if ( !GetWindowRect(*((HWND *)this + 4), &v23) )
    {
      v6 = 142LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v6,
               (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
               v5);
    }
    if ( !MapWindowPoints(0LL, *((HWND *)this + 4), (LPPOINT)&v23, 2u) && GetLastError() )
    {
      v6 = 146LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v6,
               (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
               v5);
    }
    rc.left += v23.left - Rect.left;
    rc.top += v23.top - Rect.top;
    rc.right += v23.right - Rect.right;
    rc.bottom += v23.bottom - Rect.bottom;
    v8 = MonitorFromRect(&rc, 2u);
    if ( !v8 )
    {
      v3 = -2147418113;
      v4 = 153LL;
      goto LABEL_3;
    }
    memset(&mi, 0, sizeof(mi));
    mi.cbSize = 40;
    if ( GetMonitorInfoW(v8, &mi) )
    {
      if ( !(unsigned int)GetWindowBand(*((_QWORD *)this + 4), &v18) || (p_rcMonitor = &mi.rcWork, (_DWORD)v18 != 1) )
        p_rcMonitor = &mi.rcMonitor;
      v10 = *p_rcMonitor;
      *(RECT *)&Points[0].x = v10;
      if ( rc.top < v10.top )
      {
        v11 = v10.top - rc.top;
        rc.top = v10.top;
        rc.bottom += v11;
      }
      if ( rc.left >= v10.left )
      {
        if ( rc.right <= Points[1].x )
          goto LABEL_25;
        left = Points[1].x - rc.right + rc.left;
        rc.right = Points[1].x;
      }
      else
      {
        left = v10.left;
        rc.right += v10.left - rc.left;
      }
      rc.left = left;
    }
LABEL_25:
    v3 = (*(__int64 (__fastcall **)(_QWORD, HWND *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), &hwnd);
    if ( v3 < 0 )
    {
      v4 = 192LL;
      goto LABEL_3;
    }
    if ( v8 != MonitorFromWindow(hwnd, 1u) )
    {
      v3 = (*(__int64 (__fastcall **)(FrameWrapper *, __int128 *))(*(_QWORD *)this + 56LL))(this, &v27);
      if ( v3 < 0 )
      {
        v4 = 197LL;
        goto LABEL_3;
      }
      *(_OWORD *)&Points[0].x = v27;
      if ( !MapWindowPoints(hwnd, 0LL, Points, 2u) && GetLastError() )
      {
        v6 = 201LL;
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)v6,
                 (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
                 v5);
      }
      Points[1].x += rc.left - Points[0].x;
      Points[0].x = rc.left;
      Points[1].y += rc.top - Points[0].y;
      Points[0].y = rc.top;
      v18 = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v18);
      v13 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
              &v18,
              (struct tagRECT *)Points);
      v3 = v13;
      if ( v13 < 0 )
      {
        v14 = 210LL;
LABEL_37:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
          (const char *)(unsigned int)v13);
        v15 = (__int64 *)&v18;
LABEL_46:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v15);
        return (unsigned int)v3;
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2), v18);
      v3 = v13;
      if ( v13 < 0 )
      {
        v14 = 211LL;
        goto LABEL_37;
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v18);
    }
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v19);
    v16 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
            &v19,
            &rc);
    v3 = v16;
    if ( v16 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2), v19);
      v3 = v16;
      if ( v16 >= 0 )
      {
        v3 = 0;
        goto LABEL_45;
      }
      v17 = 216LL;
    }
    else
    {
      v17 = 215LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v16);
LABEL_45:
    v15 = (__int64 *)&v19;
    goto LABEL_46;
  }
  v4 = 131LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}

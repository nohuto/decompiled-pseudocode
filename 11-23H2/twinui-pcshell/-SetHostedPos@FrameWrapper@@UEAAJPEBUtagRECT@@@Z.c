/*
 * XREFs of ?SetHostedPos@FrameWrapper@@UEAAJPEBUtagRECT@@@Z @ 0x1803C72D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18003064C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicat.c)
 *     ??0CCommonApplicationViewPosition@@QEAA@XZ @ 0x180031094 (--0CCommonApplicationViewPosition@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewPosition@@@Z @ 0x180031130 (-Attach@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationVie.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x180057AC8 (-InternalRelease@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
  _OWORD *v13; // rax
  CCommonApplicationViewPosition *v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  __int64 *v19; // rcx
  _OWORD *v20; // rax
  CCommonApplicationViewPosition *v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // eax
  _OWORD *v26; // [rsp+20h] [rbp-79h] BYREF
  __int64 v27; // [rsp+28h] [rbp-71h] BYREF
  __int64 v28; // [rsp+30h] [rbp-69h] BYREF
  HWND hwnd; // [rsp+38h] [rbp-61h] BYREF
  RECT rc; // [rsp+40h] [rbp-59h] BYREF
  struct tagPOINT Points[2]; // [rsp+50h] [rbp-49h] BYREF
  struct tagRECT v32; // [rsp+60h] [rbp-39h] BYREF
  _DWORD v33[4]; // [rsp+70h] [rbp-29h] BYREF
  struct tagRECT Rect; // [rsp+80h] [rbp-19h] BYREF
  struct tagMONITORINFO mi; // [rsp+90h] [rbp-9h] BYREF
  __int128 v36; // [rsp+C0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  rc = *a2;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 2) + 120LL))(*((_QWORD *)this + 2), v33);
  if ( v3 >= 0 )
  {
    rc.left -= v33[0];
    rc.top -= v33[1];
    rc.right -= v33[2];
    rc.bottom -= v33[3];
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
    if ( !GetWindowRect(*((HWND *)this + 4), &v32) )
    {
      v6 = 142LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v6,
               (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
               v5);
    }
    if ( !MapWindowPoints(0LL, *((HWND *)this + 4), (LPPOINT)&v32, 2u) && GetLastError() )
    {
      v6 = 146LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v6,
               (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
               v5);
    }
    rc.left += v32.left - Rect.left;
    rc.top += v32.top - Rect.top;
    rc.right += v32.right - Rect.right;
    rc.bottom += v32.bottom - Rect.bottom;
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
      if ( !(unsigned int)GetWindowBand(*((_QWORD *)this + 4), &v27) || (p_rcMonitor = &mi.rcWork, (_DWORD)v27 != 1) )
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
      v3 = (*(__int64 (__fastcall **)(FrameWrapper *, __int128 *))(*(_QWORD *)this + 56LL))(this, &v36);
      if ( v3 < 0 )
      {
        v4 = 197LL;
        goto LABEL_3;
      }
      *(_OWORD *)&Points[0].x = v36;
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
      v27 = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v27);
      v27 = 0LL;
      v13 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
      v26 = v13;
      if ( !v13 )
      {
        Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v26);
        v3 = -2147024882;
LABEL_36:
        v16 = (unsigned int)v3;
        v17 = 210LL;
LABEL_39:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
          (const char *)v16);
        v19 = &v27;
LABEL_50:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v19);
        return (unsigned int)v3;
      }
      v14 = CCommonApplicationViewPosition::CCommonApplicationViewPosition((CCommonApplicationViewPosition *)v13);
      v26 = 0LL;
      Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::Attach(&v26, (__int64)v14);
      v15 = (__int64)v26;
      v26[1] = *(_OWORD *)&Points[0].x;
      v3 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>>(
             v15,
             (__int64)&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
             &v27);
      Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease((__int64 *)&v26);
      if ( v3 < 0 )
        goto LABEL_36;
      v18 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2), v27);
      v3 = v18;
      if ( v18 < 0 )
      {
        v16 = (unsigned int)v18;
        v17 = 211LL;
        goto LABEL_39;
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v27);
    }
    v28 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v28);
    v28 = 0LL;
    v20 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v26 = v20;
    if ( v20 )
    {
      v21 = CCommonApplicationViewPosition::CCommonApplicationViewPosition((CCommonApplicationViewPosition *)v20);
      v26 = 0LL;
      Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::Attach(&v26, (__int64)v21);
      v22 = (__int64)v26;
      v26[1] = rc;
      v3 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>>(
             v22,
             (__int64)&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
             &v28);
      Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease((__int64 *)&v26);
      if ( v3 >= 0 )
      {
        v25 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2), v28);
        v3 = v25;
        if ( v25 >= 0 )
        {
          v3 = 0;
          goto LABEL_49;
        }
        v23 = (unsigned int)v25;
        v24 = 216LL;
LABEL_47:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
          (const char *)v23);
LABEL_49:
        v19 = &v28;
        goto LABEL_50;
      }
    }
    else
    {
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v26);
      v3 = -2147024882;
    }
    v23 = (unsigned int)v3;
    v24 = 215LL;
    goto LABEL_47;
  }
  v4 = 131LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}

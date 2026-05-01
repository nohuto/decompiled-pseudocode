/*
 * XREFs of ?GetFlyoutRectForLocationAndBorderFlag@CPeopleBarFlyoutExperienceManager@@AEAAJUPoint@Foundation@Windows@@PEAUtagRECT@@PEAW4Border@CSingleViewShellExperience@@@Z @ 0x18043E424
 * Callers:
 *     ?UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x180440544 (-UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z @ 0x18043E1A8 (-AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPeopleBarFlyoutExperienceManager::GetFlyoutRectForLocationAndBorderFlag(
        __int64 a1,
        __int64 a2,
        RECT *a3,
        _DWORD *a4)
{
  LONG v5; // r12d
  LONG v6; // r13d
  HMONITOR v7; // r15
  unsigned int v8; // esi
  HRESULT Instance; // eax
  int LastError; // ebx
  __int64 v12; // rdx
  POINT v13; // rbx
  __int64 (__fastcall *v14)(POINT, SID *, GUID *, SIZE *); // rdi
  SIZE v15; // rbx
  __int64 (__fastcall *v16)(SIZE, HMONITOR, SID *, GUID *, int *); // rdi
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  CPeopleBarFlyoutExperienceManager *v21; // rcx
  UINT v22; // ebx
  signed int Error; // eax
  const char *v24; // r9
  LONG top; // eax
  SIZE windowSize; // [rsp+30h] [rbp-69h] BYREF
  POINT anchorPoint; // [rsp+38h] [rbp-61h] BYREF
  int v28[2]; // [rsp+40h] [rbp-59h] BYREF
  int v29; // [rsp+48h] [rbp-51h] BYREF
  RECT *v30; // [rsp+50h] [rbp-49h]
  RECT popupWindowPosition; // [rsp+58h] [rbp-41h] BYREF
  RECT rc; // [rsp+68h] [rbp-31h] BYREF
  struct tagMONITORINFO mi; // [rsp+78h] [rbp-21h] BYREF
  RECT excludeRect; // [rsp+A0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v30 = a3;
  *(_QWORD *)v28 = a2;
  *a3 = 0LL;
  v5 = (int)*(float *)&a2;
  v6 = (int)*((float *)&a2 + 1);
  rc.left = (int)*(float *)&a2;
  rc.top = (int)*((float *)&a2 + 1);
  rc.right = (int)*(float *)&a2;
  rc.bottom = (int)*((float *)&a2 + 1);
  v7 = MonitorFromRect(&rc, 0);
  v8 = 0;
  if ( !v7 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x254,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  *(_QWORD *)v28 = 0LL;
  windowSize = 0LL;
  anchorPoint = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&anchorPoint);
  Instance = CoCreateInstance(
               &CLSID_ImmersiveShell,
               0LL,
               0x404u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               (LPVOID *)&anchorPoint);
  LastError = Instance;
  if ( Instance < 0 )
  {
    v12 = 605LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)Instance);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&anchorPoint);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&windowSize);
    goto LABEL_38;
  }
  v13 = anchorPoint;
  v14 = *(__int64 (__fastcall **)(POINT, SID *, GUID *, SIZE *))(**(_QWORD **)&anchorPoint + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&windowSize);
  Instance = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v14)(
               v13,
               &SID_IImmersiveMonitorService,
               &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
               &windowSize);
  LastError = Instance;
  if ( Instance < 0 )
  {
    v12 = 606LL;
    goto LABEL_9;
  }
  v15 = windowSize;
  v16 = *(__int64 (__fastcall **)(SIZE, HMONITOR, SID *, GUID *, int *))(**(_QWORD **)&windowSize + 72LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v28);
  Instance = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v16)(
               v15,
               v7,
               &SID_EdgeUi,
               &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
               v28);
  LastError = Instance;
  if ( Instance < 0 )
  {
    v12 = 609LL;
    goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&anchorPoint);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&windowSize);
  v17 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v28 + 80LL))(*(_QWORD *)v28, &v29);
  LastError = v17;
  if ( v17 < 0 )
  {
    v18 = (unsigned int)v17;
    v19 = 616LL;
    goto LABEL_37;
  }
  v20 = (*(__int64 (__fastcall **)(_QWORD, RECT *))(**(_QWORD **)v28 + 168LL))(*(_QWORD *)v28, &excludeRect);
  LastError = v20;
  if ( v20 < 0 )
  {
    v18 = (unsigned int)v20;
    v19 = 617LL;
    goto LABEL_37;
  }
  *a4 = 0;
  if ( v29 == -1 )
    goto LABEL_36;
  if ( v29 )
  {
    switch ( v29 )
    {
      case 1:
        v22 = 65540;
        *a4 = 13;
        break;
      case 2:
        v22 = 65560;
        *a4 = 11;
        break;
      case 3:
        v22 = 65572;
        *a4 = 7;
        break;
      default:
LABEL_36:
        LastError = -2147467263;
        v18 = 2147500033LL;
        v19 = 664LL;
        goto LABEL_37;
    }
  }
  else
  {
    v22 = 65552;
    *a4 = 14;
  }
  anchorPoint.x = v5;
  anchorPoint.y = v6;
  windowSize.cx = 320;
  windowSize.cy = 616;
  CPeopleBarFlyoutExperienceManager::AdjustSizeForScale(v21, &windowSize);
  if ( !CalculatePopupWindowPosition(&anchorPoint, &windowSize, v22, &excludeRect, &popupWindowPosition) )
  {
    Error = ResultFromKnownLastError();
    LastError = Error;
    if ( Error >= 0 )
      goto LABEL_38;
    v18 = (unsigned int)Error;
    v19 = 674LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)v18);
    goto LABEL_38;
  }
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  if ( GetMonitorInfoW(v7, &mi) )
  {
    rc = mi.rcWork;
    if ( popupWindowPosition.top >= mi.rcWork.top )
    {
      if ( popupWindowPosition.bottom > mi.rcWork.bottom )
      {
        OffsetRect(&popupWindowPosition, 0, mi.rcWork.bottom - popupWindowPosition.bottom);
        top = popupWindowPosition.top;
        if ( popupWindowPosition.top < rc.top )
          top = rc.top;
        popupWindowPosition.top = top;
      }
    }
    else
    {
      OffsetRect(&popupWindowPosition, 0, mi.rcWork.top - popupWindowPosition.top);
      if ( popupWindowPosition.bottom > rc.bottom )
        popupWindowPosition.bottom = rc.bottom;
    }
    *v30 = popupWindowPosition;
    goto LABEL_39;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x2A7,
                (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
                v24);
LABEL_38:
  v8 = LastError;
LABEL_39:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v28);
  return v8;
}

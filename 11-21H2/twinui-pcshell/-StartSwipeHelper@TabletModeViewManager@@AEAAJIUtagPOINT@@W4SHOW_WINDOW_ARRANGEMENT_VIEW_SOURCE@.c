/*
 * XREFs of ?StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x18050C44C
 * Callers:
 *     ?StartDrag@TabletModeViewManager@@UEAAJUtagPOINT@@@Z @ 0x18050C410 (-StartDrag@TabletModeViewManager@@UEAAJUtagPOINT@@@Z.c)
 *     ?StartExtendedSwipe@TabletModeViewManager@@UEAAJUtagPOINT@@I0@Z @ 0x18050C430 (-StartExtendedSwipe@TabletModeViewManager@@UEAAJUtagPOINT@@I0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002E638 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1801712D0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UICallingProcessInfo@@@WRL@Microsoft@@IEAAKXZ @ 0x180173F8C (-InternalRelease@-$ComPtr@UICallingProcessInfo@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DismissAllLightDismiss@TabletModeViewManager@@AEAAJXZ @ 0x18050B1E0 (-DismissAllLightDismiss@TabletModeViewManager@@AEAAJXZ.c)
 *     ?IsLauncherOrSwitcherVisibleOnThisMonitor@TabletModeViewManager@@AEAA_NXZ @ 0x18050B64C (-IsLauncherOrSwitcherVisibleOnThisMonitor@TabletModeViewManager@@AEAA_NXZ.c)
 *     ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x18050BF30 (-ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEA.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TabletModeViewManager::StartSwipeHelper(__int64 a1, unsigned int a2, POINT a3, unsigned int a4)
{
  unsigned int v4; // esi
  HRESULT v6; // eax
  unsigned int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  bool *v11; // r9
  int v12; // eax
  void *v13; // rbx
  void (__fastcall *v14)(void *, __int64 *); // rdi
  __int64 *AddressOf; // rax
  __int64 v16; // rdi
  unsigned int v17; // r12d
  HRESULT v18; // eax
  HRESULT v19; // ebx
  void *v20; // rbx
  __int64 (__fastcall *v21)(void *, __int64 *); // rsi
  int v22; // eax
  unsigned int v23; // ebx
  LONG left; // eax
  LONG top; // eax
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, __int64 *); // rsi
  int v28; // eax
  unsigned int v29; // ebx
  int v30; // eax
  POINT pt; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  void *v35; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  void *v37; // [rsp+78h] [rbp-88h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h] BYREF
  void *ppvOut; // [rsp+88h] [rbp-78h] BYREF
  int v40; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v41; // [rsp+94h] [rbp-6Ch]
  unsigned int v42; // [rsp+98h] [rbp-68h]
  _BYTE v43[16]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-50h]
  RECT v45; // [rsp+C8h] [rbp-38h] BYREF
  RECT v46; // [rsp+E0h] [rbp-20h] BYREF
  RECT rc; // [rsp+F8h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v4 = a4;
  v41 = a4;
  v42 = a2;
  pt = a3;
  *(_BYTE *)(a1 + 184) = 0;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  v6 = IUnknown_QueryService(
         *(IUnknown **)(a1 + 16),
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &ppvOut);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, &v40);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 659LL;
      goto LABEL_5;
    }
    v7 = 1;
    if ( v40 != 1 )
      goto LABEL_46;
    if ( TabletModeViewManager::IsLauncherOrSwitcherVisibleOnThisMonitor((TabletModeViewManager *)a1, v9, v10, v11) )
    {
      *(_BYTE *)(a1 + 184) = 1;
      v7 = 0;
      goto LABEL_46;
    }
    v12 = TabletModeViewManager::DismissAllLightDismiss((IUnknown **)a1);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2A2,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)v12);
    v38 = 0LL;
    v37 = 0LL;
    Microsoft::WRL::ComPtr<ICallingProcessInfo>::InternalRelease((__int64 *)&v37);
    if ( IUnknown_QueryService(
           *(IUnknown **)(a1 + 16),
           &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
           &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
           &v37) >= 0 )
    {
      v13 = v37;
      v14 = *(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)v37 + 80LL);
      AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v38);
      v14(v13, AddressOf);
    }
    v16 = 0LL;
    v36 = 0LL;
    if ( v38 )
    {
      v17 = 1;
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v36, &v38);
      v16 = v36;
LABEL_41:
      if ( v16 )
      {
        v30 = TabletModeViewManager::ShowWindowArrangementView(a1, v16, 0LL, 0LL, &pt, 0LL, v17, v4, 0LL);
        v7 = v30;
        if ( v30 >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, POINT))(**(_QWORD **)(a1 + 152) + 24LL))(
            *(_QWORD *)(a1 + 152),
            v42,
            pt);
          v7 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2DD,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
            (const char *)(unsigned int)v30);
        }
      }
      goto LABEL_45;
    }
    v17 = 0;
    v35 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v35);
    v18 = IUnknown_QueryService(
            *(IUnknown **)(a1 + 16),
            &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
            &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
            &v35);
    v19 = v18;
    if ( v18 >= 0 )
    {
      v33 = 0LL;
      v20 = v35;
      v21 = *(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v35 + 72LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v33);
      v22 = v21(v20, &v33);
      v23 = v22;
      if ( v22 >= 0 )
      {
        (*(void (__fastcall **)(__int64, RECT *))(*(_QWORD *)v33 + 24LL))(v33, &v46);
        if ( PtInRect(&rc, pt) && !PtInRect(&v46, pt) )
        {
          left = v46.left;
          if ( pt.x > v46.left )
            left = pt.x;
          if ( left >= v46.right )
          {
            pt.x = v46.right;
          }
          else if ( pt.x <= v46.left )
          {
            pt.x = v46.left;
          }
          top = v46.top;
          if ( pt.y > v46.top )
            top = pt.y;
          if ( top >= v46.bottom )
          {
            pt.y = v46.bottom;
          }
          else if ( pt.y <= v46.top )
          {
            pt.y = v46.top;
          }
        }
        v34 = 0LL;
        v26 = v33;
        v27 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v33 + 128LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v34);
        v28 = v27(v26, &v34);
        v29 = v28;
        if ( v28 >= 0 )
        {
          while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v34 + 24LL))(v34, 1LL, v43) >= 0 )
          {
            if ( PtInRect(&v45, pt) )
            {
              Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v36, v44);
              v16 = v36;
              break;
            }
          }
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v34);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v33);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v35);
          v4 = v41;
          goto LABEL_41;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2CD,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v28);
        v7 = v29;
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v34);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2BE,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v22);
        v7 = v23;
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v33);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2BB,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)v18);
      v7 = v19;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v35);
LABEL_45:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v36);
    Microsoft::WRL::ComPtr<ICallingProcessInfo>::InternalRelease((__int64 *)&v37);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v38);
    goto LABEL_46;
  }
  v8 = 656LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_46:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  return v7;
}

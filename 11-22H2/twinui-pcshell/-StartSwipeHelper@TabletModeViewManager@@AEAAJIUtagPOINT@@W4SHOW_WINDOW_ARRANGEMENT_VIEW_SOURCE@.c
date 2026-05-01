/*
 * XREFs of ?StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x1805C497C
 * Callers:
 *     ?StartDrag@TabletModeViewManager@@UEAAJUtagPOINT@@@Z @ 0x1805C4940 (-StartDrag@TabletModeViewManager@@UEAAJUtagPOINT@@@Z.c)
 *     ?StartExtendedSwipe@TabletModeViewManager@@UEAAJUtagPOINT@@I0@Z @ 0x1805C4960 (-StartExtendedSwipe@TabletModeViewManager@@UEAAJUtagPOINT@@I0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1800528C8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D028 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B7F64 (-InternalRelease@-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DismissAllLightDismiss@TabletModeViewManager@@AEAAJXZ @ 0x1805C36F0 (-DismissAllLightDismiss@TabletModeViewManager@@AEAAJXZ.c)
 *     ?IsLauncherOrSwitcherVisibleOnThisMonitor@TabletModeViewManager@@AEAA_NXZ @ 0x1805C3B5C (-IsLauncherOrSwitcherVisibleOnThisMonitor@TabletModeViewManager@@AEAA_NXZ.c)
 *     ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x1805C4460 (-ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEA.c)
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
  __int64 v15; // rdi
  unsigned int v16; // r12d
  HRESULT v17; // eax
  HRESULT v18; // ebx
  void *v19; // rbx
  __int64 (__fastcall *v20)(void *, __int64 *); // rsi
  int v21; // eax
  unsigned int v22; // ebx
  LONG left; // eax
  LONG top; // eax
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, __int64 *); // rsi
  int v27; // eax
  unsigned int v28; // ebx
  int v29; // eax
  POINT pt; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h] BYREF
  void *v34; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  __int64 v36; // [rsp+78h] [rbp-88h] BYREF
  void *v37; // [rsp+80h] [rbp-80h] BYREF
  void *ppvOut; // [rsp+88h] [rbp-78h] BYREF
  int v39; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v40; // [rsp+94h] [rbp-6Ch]
  unsigned int v41; // [rsp+98h] [rbp-68h]
  _BYTE v42[16]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-50h]
  RECT v44; // [rsp+C8h] [rbp-38h] BYREF
  RECT v45; // [rsp+E0h] [rbp-20h] BYREF
  RECT rc; // [rsp+F8h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v4 = a4;
  v40 = a4;
  v41 = a2;
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
    v6 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, &v39);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 659LL;
      goto LABEL_5;
    }
    v7 = 1;
    if ( v39 != 1 )
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
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)v12);
    v36 = 0LL;
    v37 = 0LL;
    Microsoft::WRL::ComPtr<IFullScreenPositioner>::InternalRelease((__int64 *)&v37);
    if ( IUnknown_QueryService(
           *(IUnknown **)(a1 + 16),
           &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
           &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
           &v37) >= 0 )
    {
      v13 = v37;
      v14 = *(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)v37 + 80LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v36);
      v14(v13, &v36);
    }
    v15 = 0LL;
    v35 = 0LL;
    if ( v36 )
    {
      v16 = 1;
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v35, &v36);
      v15 = v35;
LABEL_41:
      if ( v15 )
      {
        v29 = TabletModeViewManager::ShowWindowArrangementView(a1, v15, 0LL, 0LL, &pt, 0LL, v16, v4, 0LL);
        v7 = v29;
        if ( v29 >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, POINT))(**(_QWORD **)(a1 + 152) + 24LL))(
            *(_QWORD *)(a1 + 152),
            v41,
            pt);
          v7 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2DD,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
            (const char *)(unsigned int)v29);
        }
      }
      goto LABEL_45;
    }
    v16 = 0;
    v34 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v34);
    v17 = IUnknown_QueryService(
            *(IUnknown **)(a1 + 16),
            &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
            &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
            &v34);
    v18 = v17;
    if ( v17 >= 0 )
    {
      v32 = 0LL;
      v19 = v34;
      v20 = *(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v34 + 72LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
      v21 = v20(v19, &v32);
      v22 = v21;
      if ( v21 >= 0 )
      {
        (*(void (__fastcall **)(__int64, RECT *))(*(_QWORD *)v32 + 24LL))(v32, &v45);
        if ( PtInRect(&rc, pt) && !PtInRect(&v45, pt) )
        {
          left = v45.left;
          if ( pt.x > v45.left )
            left = pt.x;
          if ( left >= v45.right )
          {
            pt.x = v45.right;
          }
          else if ( pt.x <= v45.left )
          {
            pt.x = v45.left;
          }
          top = v45.top;
          if ( pt.y > v45.top )
            top = pt.y;
          if ( top >= v45.bottom )
          {
            pt.y = v45.bottom;
          }
          else if ( pt.y <= v45.top )
          {
            pt.y = v45.top;
          }
        }
        v33 = 0LL;
        v25 = v32;
        v26 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 128LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v33);
        v27 = v26(v25, &v33);
        v28 = v27;
        if ( v27 >= 0 )
        {
          while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v33 + 24LL))(v33, 1LL, v42) >= 0 )
          {
            if ( PtInRect(&v44, pt) )
            {
              Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v35, v43);
              v15 = v35;
              break;
            }
          }
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v33);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v34);
          v4 = v40;
          goto LABEL_41;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2CD,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v27);
        v7 = v28;
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v33);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2BE,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v21);
        v7 = v22;
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2BB,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)v17);
      v7 = v18;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v34);
LABEL_45:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v35);
    Microsoft::WRL::ComPtr<IFullScreenPositioner>::InternalRelease((__int64 *)&v37);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v36);
    goto LABEL_46;
  }
  v8 = 656LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_46:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  return v7;
}

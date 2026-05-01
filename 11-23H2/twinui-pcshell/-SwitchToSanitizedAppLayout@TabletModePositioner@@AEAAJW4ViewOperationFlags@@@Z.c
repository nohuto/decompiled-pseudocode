/*
 * XREFs of ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x1805C1B38
 * Callers:
 *     ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x1801077CC (-InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x1805BD1A4 (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1801BDC18 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1805B8FC4 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z @ 0x1805B9CC8 (-CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z.c)
 *     ?GetForegroundOperableView@TabletModePositioner@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x1805BC058 (-GetForegroundOperableView@TabletModePositioner@@AEAAJPEAPEAUIApplicationView@@@Z.c)
 *     ?GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1805BC1E8 (-GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z.c)
 *     ?GetTopOperableView@TabletModePositioner@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@@Z @ 0x1805BC7D0 (-GetTopOperableView@TabletModePositioner@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1805BCE54 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?IsPPIWin32VtcSidebarPresentInLayout@TabletModePositioner@@AEAA_NXZ @ 0x1805BD808 (-IsPPIWin32VtcSidebarPresentInLayout@TabletModePositioner@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall TabletModePositioner::SwitchToSanitizedAppLayout(IUnknown **a1, char a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  HRESULT v6; // eax
  int OperableViews; // eax
  int inited; // eax
  __int64 v9; // rdx
  void *v10; // rbx
  __int64 (__fastcall *v11)(void *, void *, struct IObjectArray *, __int64 *); // rdi
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  struct IApplicationView *v17; // [rsp+30h] [rbp-20h] BYREF
  struct IApplicationView *v18; // [rsp+38h] [rbp-18h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-10h] BYREF
  void *v20; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IUnknown *v22; // [rsp+80h] [rbp+30h] BYREF
  struct IObjectArray *v23; // [rsp+90h] [rbp+40h] BYREF
  __int64 v24; // [rsp+98h] [rbp+48h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  v4 = IUnknown_QueryService(
         a1[2],
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &ppvOut);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
    v6 = IUnknown_QueryService(
           a1[2],
           &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
           &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
           &v20);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D6,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v6);
LABEL_32:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
      goto LABEL_33;
    }
    v23 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
    OperableViews = TabletModePositioner::GetOperableViews(
                      (TabletModePositioner *)a1,
                      (struct IImmersiveMonitor *)ppvOut,
                      &v23);
    v5 = OperableViews;
    if ( OperableViews < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D9,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)OperableViews);
LABEL_31:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
      goto LABEL_32;
    }
    if ( IsSurfaceHubWithWin32VtcEnabled()
      && TabletModePositioner::IsPPIWin32VtcSidebarPresentInLayout((TabletModePositioner *)a1) )
    {
      v22 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
      inited = TabletModePositioner::InitLayoutOperationHelper(
                 (TabletModePositioner *)a1,
                 &CLSID_PPIWin32VtcLayoutOperation,
                 &GUID_7f4d2785_4b93_429e_9250_0e9670706fba,
                 (void **)&v22);
      v5 = inited;
      if ( inited < 0 )
      {
        v9 = 1760LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)inited);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
        goto LABEL_31;
      }
      inited = ((__int64 (__fastcall *)(struct IUnknown *))v22->lpVtbl[3].AddRef)(v22);
      v5 = inited;
      if ( inited < 0 )
      {
        v9 = 1761LL;
        goto LABEL_15;
      }
      inited = TabletModePositioner::ApplyLayoutOperationHelper((TabletModePositioner *)a1, v22);
      v5 = inited;
      if ( inited < 0 )
      {
        v9 = 1762LL;
        goto LABEL_15;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
LABEL_28:
      v15 = TabletModePositioner::CleanupBackgroundViews((__int64)a1, (__int64)v23, a2);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x702,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v15);
      v5 = 0;
      goto LABEL_31;
    }
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v18);
    TabletModePositioner::GetTopOperableView((TabletModePositioner *)a1, v23, &v18);
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v17);
    TabletModePositioner::GetForegroundOperableView((TabletModePositioner *)a1, &v17);
    v24 = 0LL;
    v10 = v20;
    v11 = *(__int64 (__fastcall **)(void *, void *, struct IObjectArray *, __int64 *))(*(_QWORD *)v20 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
    v12 = v11(v10, ppvOut, v23, &v24);
    v5 = v12;
    if ( v12 >= 0 )
    {
      v22 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
      v13 = TabletModePositioner::InitLayoutOperationHelper(
              (TabletModePositioner *)a1,
              &CLSID_TabletModePositionerOperation,
              &GUID_ef9dff78_5b41_4081_a5aa_407c9421d1b6,
              (void **)&v22);
      v5 = v13;
      if ( v13 >= 0 )
      {
        v13 = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationView *, struct IApplicationView *, __int64, int))v22->lpVtbl[1].Release)(
                v22,
                v18,
                v17,
                v24,
                a2 & 1);
        v5 = v13;
        if ( v13 >= 0 )
        {
          v13 = TabletModePositioner::ApplyLayoutOperationHelper((TabletModePositioner *)a1, v22);
          v5 = v13;
          if ( v13 >= 0 )
          {
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v17);
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v18);
            goto LABEL_28;
          }
          v14 = 1789LL;
        }
        else
        {
          v14 = 1788LL;
        }
      }
      else
      {
        v14 = 1784LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6F4,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v12);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v17);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v18);
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6D3,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v4);
LABEL_33:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  return v5;
}

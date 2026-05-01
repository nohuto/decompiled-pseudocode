/*
 * XREFs of ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x180509670
 * Callers:
 *     ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x18011B170 (-InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x180504C14 (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x180180528 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180500804 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z @ 0x180501508 (-CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z.c)
 *     ?GetForegroundOperableView@TabletModePositioner@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x180503A48 (-GetForegroundOperableView@TabletModePositioner@@AEAAJPEAPEAUIApplicationView@@@Z.c)
 *     ?GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x180503BD4 (-GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z.c)
 *     ?GetTopOperableView@TabletModePositioner@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@@Z @ 0x180504234 (-GetTopOperableView@TabletModePositioner@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1805048C4 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?IsPPIWin32VtcSidebarPresentInLayout@TabletModePositioner@@AEAA_NXZ @ 0x180505278 (-IsPPIWin32VtcSidebarPresentInLayout@TabletModePositioner@@AEAA_NXZ.c)
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
  __int64 *AddressOf; // rax
  __int64 *v11; // rax
  void *v12; // rbx
  __int64 (__fastcall *v13)(void *, void *, struct IObjectArray *, __int64 *); // rdi
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  void *ppvOut; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h] BYREF
  void *v22; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IUnknown *v24; // [rsp+80h] [rbp+30h] BYREF
  struct IObjectArray *v25; // [rsp+90h] [rbp+40h] BYREF
  __int64 v26; // [rsp+98h] [rbp+48h] BYREF

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
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
    v6 = IUnknown_QueryService(
           a1[2],
           &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
           &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
           &v22);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D6,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v6);
LABEL_32:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
      goto LABEL_33;
    }
    v25 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
    OperableViews = TabletModePositioner::GetOperableViews(
                      (TabletModePositioner *)a1,
                      (struct IImmersiveMonitor *)ppvOut,
                      &v25);
    v5 = OperableViews;
    if ( OperableViews < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D9,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)OperableViews);
LABEL_31:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
      goto LABEL_32;
    }
    if ( IsSurfaceHubWithWin32VtcEnabled()
      && TabletModePositioner::IsPPIWin32VtcSidebarPresentInLayout((TabletModePositioner *)a1) )
    {
      v24 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
      inited = TabletModePositioner::InitLayoutOperationHelper(
                 (TabletModePositioner *)a1,
                 &CLSID_PPIWin32VtcLayoutOperation,
                 &GUID_7f4d2785_4b93_429e_9250_0e9670706fba,
                 (void **)&v24);
      v5 = inited;
      if ( inited < 0 )
      {
        v9 = 1760LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)inited);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
        goto LABEL_31;
      }
      inited = ((__int64 (__fastcall *)(struct IUnknown *))v24->lpVtbl[3].AddRef)(v24);
      v5 = inited;
      if ( inited < 0 )
      {
        v9 = 1761LL;
        goto LABEL_15;
      }
      inited = TabletModePositioner::ApplyLayoutOperationHelper((TabletModePositioner *)a1, v24);
      v5 = inited;
      if ( inited < 0 )
      {
        v9 = 1762LL;
        goto LABEL_15;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
LABEL_28:
      v17 = TabletModePositioner::CleanupBackgroundViews((__int64)a1, (__int64)v25, a2);
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x702,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v17);
      v5 = 0;
      goto LABEL_31;
    }
    v21 = 0LL;
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v21);
    TabletModePositioner::GetTopOperableView((TabletModePositioner *)a1, v25, (struct IApplicationView **)AddressOf);
    v20 = 0LL;
    v11 = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v20);
    TabletModePositioner::GetForegroundOperableView((TabletModePositioner *)a1, (struct IApplicationView **)v11);
    v26 = 0LL;
    v12 = v22;
    v13 = *(__int64 (__fastcall **)(void *, void *, struct IObjectArray *, __int64 *))(*(_QWORD *)v22 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
    v14 = v13(v12, ppvOut, v25, &v26);
    v5 = v14;
    if ( v14 >= 0 )
    {
      v24 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
      v15 = TabletModePositioner::InitLayoutOperationHelper(
              (TabletModePositioner *)a1,
              &CLSID_TabletModePositionerOperation,
              &GUID_ef9dff78_5b41_4081_a5aa_407c9421d1b6,
              (void **)&v24);
      v5 = v15;
      if ( v15 >= 0 )
      {
        v15 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64, __int64, int))v24->lpVtbl[1].Release)(
                v24,
                v21,
                v20,
                v26,
                a2 & 1);
        v5 = v15;
        if ( v15 >= 0 )
        {
          v15 = TabletModePositioner::ApplyLayoutOperationHelper((TabletModePositioner *)a1, v24);
          v5 = v15;
          if ( v15 >= 0 )
          {
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
            goto LABEL_28;
          }
          v16 = 1789LL;
        }
        else
        {
          v16 = 1788LL;
        }
      }
      else
      {
        v16 = 1784LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6F4,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v14);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6D3,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v4);
LABEL_33:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  return v5;
}

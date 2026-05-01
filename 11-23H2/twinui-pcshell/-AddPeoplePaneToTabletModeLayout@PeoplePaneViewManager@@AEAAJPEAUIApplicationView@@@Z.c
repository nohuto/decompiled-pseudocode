/*
 * XREFs of ?AddPeoplePaneToTabletModeLayout@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B2740
 * Callers:
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B2890 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTabletModePositioner@PeoplePaneViewManager@@AEAAJPEAPEAUITabletModePositioner@@@Z @ 0x1804B3F90 (-GetTabletModePositioner@PeoplePaneViewManager@@AEAAJPEAPEAUITabletModePositioner@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::AddPeoplePaneToTabletModeLayout(
        PeoplePaneViewManager *this,
        struct IApplicationView *a2)
{
  int TabletModePositioner; // eax
  unsigned int v5; // ebx
  struct ITabletModePositioner *v6; // rbx
  __int64 (__fastcall *v7)(struct ITabletModePositioner *, GUID *, GUID *, __int64 *); // rdi
  int v8; // eax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v12; // [rsp+60h] [rbp+30h] BYREF
  struct ITabletModePositioner *v13; // [rsp+68h] [rbp+38h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
  TabletModePositioner = PeoplePaneViewManager::GetTabletModePositioner(this, &v13);
  v5 = TabletModePositioner;
  if ( TabletModePositioner >= 0 )
  {
    v12 = 0LL;
    v6 = v13;
    v7 = *(__int64 (__fastcall **)(struct ITabletModePositioner *, GUID *, GUID *, __int64 *))(*(_QWORD *)v13 + 80LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    v8 = v7(v6, &CLSID_AppSwitchOperation, &GUID_b3b709e2_bf68_4d75_b725_6b7d34fa01d3, &v12);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, _QWORD))(*(_QWORD *)v12 + 40LL))(v12, a2, 0LL);
      v5 = v8;
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(struct ITabletModePositioner *, __int64))(*(_QWORD *)v13 + 88LL))(v13, v12);
        v5 = v8;
        if ( v8 >= 0 )
        {
          v5 = 0;
          goto LABEL_11;
        }
        v9 = 689LL;
      }
      else
      {
        v9 = 688LL;
      }
    }
    else
    {
      v9 = 687LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_11:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2AC,
    (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)TabletModePositioner);
LABEL_12:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
  return v5;
}

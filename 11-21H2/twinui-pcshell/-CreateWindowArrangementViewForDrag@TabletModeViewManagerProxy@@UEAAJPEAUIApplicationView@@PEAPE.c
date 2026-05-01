/*
 * XREFs of ?CreateWindowArrangementViewForDrag@TabletModeViewManagerProxy@@UEAAJPEAUIApplicationView@@PEAPEAUIUnknown@@@Z @ 0x180497BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTabletModeViewManager@TabletModeViewManagerProxy@@AEAAJPEAPEAUITabletModeViewManager@@@Z @ 0x180497CFC (-GetTabletModeViewManager@TabletModeViewManagerProxy@@AEAAJPEAPEAUITabletModeViewManager@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModeViewManagerProxy::CreateWindowArrangementViewForDrag(
        TabletModeViewManagerProxy *this,
        struct IApplicationView *a2,
        struct IUnknown **a3)
{
  TabletModeViewManagerProxy *v5; // rbx
  int TabletModeViewManager; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ITabletModeViewManager *v10; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v10 = 0LL;
  v5 = (TabletModeViewManagerProxy *)((char *)this - 8);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
  TabletModeViewManager = TabletModeViewManagerProxy::GetTabletModeViewManager(v5, &v10);
  v7 = TabletModeViewManager;
  if ( TabletModeViewManager >= 0 )
    v7 = (*(__int64 (__fastcall **)(struct ITabletModeViewManager *, struct IApplicationView *, struct IUnknown **))(*(_QWORD *)v10 + 32LL))(
           v10,
           a2,
           a3);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\tabletmodeviewmanagerproxy.cpp",
      (const char *)(unsigned int)TabletModeViewManager);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
  return v7;
}

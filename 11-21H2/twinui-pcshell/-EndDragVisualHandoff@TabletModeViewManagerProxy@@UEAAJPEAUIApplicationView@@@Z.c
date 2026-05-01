/*
 * XREFs of ?EndDragVisualHandoff@TabletModeViewManagerProxy@@UEAAJPEAUIApplicationView@@@Z @ 0x180497C60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTabletModeViewManager@TabletModeViewManagerProxy@@AEAAJPEAPEAUITabletModeViewManager@@@Z @ 0x180497CFC (-GetTabletModeViewManager@TabletModeViewManagerProxy@@AEAAJPEAPEAUITabletModeViewManager@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModeViewManagerProxy::EndDragVisualHandoff(
        TabletModeViewManagerProxy *this,
        struct IApplicationView *a2)
{
  TabletModeViewManagerProxy *v3; // rbx
  int TabletModeViewManager; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ITabletModeViewManager *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = (TabletModeViewManagerProxy *)((char *)this - 8);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v8);
  TabletModeViewManager = TabletModeViewManagerProxy::GetTabletModeViewManager(v3, &v8);
  v5 = TabletModeViewManager;
  if ( TabletModeViewManager >= 0 )
    v5 = (*(__int64 (__fastcall **)(struct ITabletModeViewManager *, struct IApplicationView *))(*(_QWORD *)v8 + 48LL))(
           v8,
           a2);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\tabletmodeviewmanagerproxy.cpp",
      (const char *)(unsigned int)TabletModeViewManager);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v8);
  return v5;
}

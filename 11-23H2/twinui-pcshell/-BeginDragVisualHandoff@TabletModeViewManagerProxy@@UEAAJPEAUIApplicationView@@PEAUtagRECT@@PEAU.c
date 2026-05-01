/*
 * XREFs of ?BeginDragVisualHandoff@TabletModeViewManagerProxy@@UEAAJPEAUIApplicationView@@PEAUtagRECT@@PEAUtagPOINT@@PEAUITabletModeInputSource@@@Z @ 0x180551120
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTabletModeViewManager@TabletModeViewManagerProxy@@AEAAJPEAPEAUITabletModeViewManager@@@Z @ 0x18055133C (-GetTabletModeViewManager@TabletModeViewManagerProxy@@AEAAJPEAPEAUITabletModeViewManager@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModeViewManagerProxy::BeginDragVisualHandoff(
        TabletModeViewManagerProxy *this,
        struct IApplicationView *a2,
        struct tagRECT *a3,
        struct tagPOINT *a4,
        struct ITabletModeInputSource *a5)
{
  TabletModeViewManagerProxy *v8; // rbx
  int TabletModeViewManager; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ITabletModeViewManager *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  v8 = (TabletModeViewManagerProxy *)((char *)this - 8);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
  TabletModeViewManager = TabletModeViewManagerProxy::GetTabletModeViewManager(v8, &v13);
  v10 = TabletModeViewManager;
  if ( TabletModeViewManager >= 0 )
    v10 = (*(__int64 (__fastcall **)(struct ITabletModeViewManager *, struct IApplicationView *, struct tagRECT *, struct tagPOINT *, struct ITabletModeInputSource *))(*(_QWORD *)v13 + 40LL))(
            v13,
            a2,
            a3,
            a4,
            a5);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\tabletmodeviewmanagerproxy.cpp",
      (const char *)(unsigned int)TabletModeViewManager);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
  return v10;
}

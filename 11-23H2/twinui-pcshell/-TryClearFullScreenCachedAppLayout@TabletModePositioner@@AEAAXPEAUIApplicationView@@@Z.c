/*
 * XREFs of ?TryClearFullScreenCachedAppLayout@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1805C1FF0
 * Callers:
 *     ?ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1805C2734 (-ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?VisibleFullScreenViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@0@Z @ 0x1805C2DA0 (-VisibleFullScreenViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall TabletModePositioner::TryClearFullScreenCachedAppLayout(
        TabletModePositioner *this,
        struct IApplicationView *a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rcx

  v2 = (__int64 *)((char *)this + 264);
  v3 = *((_QWORD *)this + 33);
  if ( v3 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64, struct IApplicationView *))(*(_QWORD *)v3 + 184LL))(v3, a2) )
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v2);
  }
}

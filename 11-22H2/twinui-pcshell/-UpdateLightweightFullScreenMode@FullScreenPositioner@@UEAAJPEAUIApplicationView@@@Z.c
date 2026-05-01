/*
 * XREFs of ?UpdateLightweightFullScreenMode@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1803EE6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x1803EDA44 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositioner::UpdateLightweightFullScreenMode(
        FullScreenPositioner *this,
        struct IApplicationView *a2)
{
  int (__fastcall *v4)(struct IApplicationView *, __int64 *); // rbx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v4 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
  if ( v4(a2, &v6) >= 0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6) == 3 )
    FullScreenPositioner::PositionView((__int64)this - 104, a2, 0LL, 1u);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
  return 0LL;
}

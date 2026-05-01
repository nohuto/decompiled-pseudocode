/*
 * XREFs of ?UpdateLightweightFullScreenMode@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1803210C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPositionerPriority@@XZ @ 0x1800340AC (-ReleaseAndGetAddressOf@-$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPos.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180320184 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositioner::UpdateLightweightFullScreenMode(
        FullScreenPositioner *this,
        struct IApplicationView *a2)
{
  int (__fastcall *v4)(struct IApplicationView *, __int64 *); // rbx
  __int64 *AddressOf; // rdx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v4 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL);
  AddressOf = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf(&v7);
  if ( v4(a2, AddressOf) >= 0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7) == 3 )
    FullScreenPositioner::PositionView((__int64)this - 104, a2, 0LL, 1u);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
  return 0LL;
}

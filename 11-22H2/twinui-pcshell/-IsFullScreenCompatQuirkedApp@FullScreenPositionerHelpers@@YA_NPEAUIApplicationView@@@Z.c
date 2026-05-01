/*
 * XREFs of ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180044A70
 * Callers:
 *     ?ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180044540 (-ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801A2390 (-UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803EE8D8 (-CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApp.c)
 *     ?ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x1803EFA50 (-ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsForcedFullScreenCompatModeEnabled@FullScreenPositionerHelpers@@YA_NXZ @ 0x180044B5C (-IsForcedFullScreenCompatModeEnabled@FullScreenPositionerHelpers@@YA_NXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp(
        int (__fastcall ***this)(FullScreenPositionerHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2)
{
  char v3; // si
  int (__fastcall *v4)(FullScreenPositionerHelpers *, GUID *, __int64 *); // rbx
  FullScreenPositionerHelpers *v5; // rcx
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, __int64); // rdi
  __int64 AddressOf; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v4 = **this;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  if ( v4((FullScreenPositionerHelpers *)this, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v10) >= 0
    && (v6 = v10,
        v7 = *(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL),
        AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v11),
        v7(v6, AddressOf) >= 0)
    && (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 328LL))(v11, 4LL)
    || FullScreenPositionerHelpers::IsForcedFullScreenCompatModeEnabled(v5) )
  {
    v3 = 1;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  return v3;
}

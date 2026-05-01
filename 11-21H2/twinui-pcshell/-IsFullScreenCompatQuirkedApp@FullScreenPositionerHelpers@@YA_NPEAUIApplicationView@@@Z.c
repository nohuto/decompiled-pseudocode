/*
 * XREFs of ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180099154
 * Callers:
 *     ?ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180098AB0 (-ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180151E30 (-UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180321388 (-CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApp.c)
 *     ?ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x1803223E0 (-ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@.c)
 * Callees:
 *     ?IsForcedFullScreenCompatModeEnabled@FullScreenPositionerHelpers@@YA_NXZ @ 0x18009922C (-IsForcedFullScreenCompatModeEnabled@FullScreenPositionerHelpers@@YA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp(
        FullScreenPositionerHelpers *this,
        struct IApplicationView *a2)
{
  char v2; // si
  FullScreenPositionerHelpers *v3; // rcx
  __int64 v4; // rbx
  int (__fastcall *v5)(__int64, __int64); // rdi
  __int64 AddressOf; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v9 = 0LL;
  v8 = 0LL;
  if ( (**(int (__fastcall ***)(FullScreenPositionerHelpers *, GUID *, __int64 *))this)(
         this,
         &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
         &v9) >= 0
    && (v4 = v9,
        v5 = *(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL),
        AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v8),
        v5(v4, AddressOf) >= 0)
    && (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 328LL))(v8, 4LL)
    || FullScreenPositionerHelpers::IsForcedFullScreenCompatModeEnabled(v3) )
  {
    v2 = 1;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  return v2;
}

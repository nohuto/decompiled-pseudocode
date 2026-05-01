/*
 * XREFs of ?ShouldSnapBeHandledByWin32VtcLayoutOperation@SnapServiceProvider@@AEAA_NPEAUIApplicationView@@@Z @ 0x18066F3E8
 * Callers:
 *     ?SnapToLocation@SnapServiceProvider@@UEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCATION_FLAGS@@PEAUtagRECT@@@Z @ 0x18066F550 (-SnapToLocation@SnapServiceProvider@@UEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCAT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall SnapServiceProvider::ShouldSnapBeHandledByWin32VtcLayoutOperation(
        SnapServiceProvider *this,
        struct IApplicationView *a2)
{
  bool v4; // si
  int (__fastcall *v5)(struct IApplicationView *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  __int64 v7; // rdi
  int (__fastcall *v8)(__int64, __int64 *, GUID *, GUID *, __int64 *); // rbx
  __int64 v9; // rbx
  int (__fastcall *v10)(__int64, GUID *, GUID *, __int64 *); // rdi
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+38h] [rbp-8h] BYREF
  int v14; // [rsp+78h] [rbp+38h] BYREF
  __int64 v15; // [rsp+80h] [rbp+40h] BYREF
  __int64 v16; // [rsp+88h] [rbp+48h] BYREF

  v4 = 0;
  v12 = 0LL;
  v5 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v12);
  if ( v5(a2, AddressOf) >= 0 )
  {
    v13 = 0LL;
    v16 = 0LL;
    v7 = *((_QWORD *)this + 4);
    v8 = *(int (__fastcall **)(__int64, __int64 *, GUID *, GUID *, __int64 *))(*(_QWORD *)v7 + 96LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
    if ( v8(v7, &v13, &GUID_975d55f5_ce62_42c0_868a_eda817f3871e, &GUID_975d55f5_ce62_42c0_868a_eda817f3871e, &v16) >= 0 )
    {
      v15 = 0LL;
      v9 = v16;
      v10 = *(int (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v16 + 80LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
      if ( v10(v9, &CLSID_PPIWin32VtcLayoutOperation, &GUID_7f4d2785_4b93_429e_9250_0e9670706fba, &v15) >= 0 )
      {
        v14 = 0;
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 64LL))(v15, &v14) >= 0 )
          v4 = v14 == 1;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  return v4;
}

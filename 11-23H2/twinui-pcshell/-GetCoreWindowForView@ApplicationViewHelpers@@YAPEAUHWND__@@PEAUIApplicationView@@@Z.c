/*
 * XREFs of ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180044860
 * Callers:
 *     ?IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180044818 (-IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180044940 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewHelpers::GetCoreWindowForView(
        ApplicationViewHelpers *this,
        struct IApplicationView *a2)
{
  _QWORD *v3; // rax
  struct IApplicationView *AddressOf; // rax
  struct IImmersiveApplication **v5; // r8
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, __int64, GUID *, __int64 *); // rsi
  __int64 *v8; // rdi
  __int64 v9; // rbx
  _BYTE v11[16]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+68h] [rbp+28h] BYREF
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  v3 = (_QWORD *)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(&v13, &v12);
  AddressOf = (struct IApplicationView *)Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(*v3);
  if ( ApplicationViewHelpers::GetApplicationFromView(this, AddressOf, v5) >= 0 )
  {
    v6 = v13;
    v12 = 0LL;
    v7 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v13 + 24LL);
    v8 = *(__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(&v12, v11);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v8);
    if ( v7(v6, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v8) >= 0 )
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, &v14);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  }
  v9 = v14;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  return v9;
}

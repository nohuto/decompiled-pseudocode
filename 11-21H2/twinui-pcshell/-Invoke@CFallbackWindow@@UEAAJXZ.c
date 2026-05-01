/*
 * XREFs of ?Invoke@CFallbackWindow@@UEAAJXZ @ 0x1802EE050
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetVisibleApp@CFallbackWindow@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x1802EE1AC (-_GetVisibleApp@CFallbackWindow@@AEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFallbackWindow::Invoke(IUnknown **this)
{
  CFallbackWindow *v2; // rdi
  __int64 *AddressOf; // rax
  int VisibleApp; // eax
  void *ppvOut; // [rsp+30h] [rbp+10h] BYREF
  __int64 v7; // [rsp+38h] [rbp+18h] BYREF

  v7 = 0LL;
  v2 = (CFallbackWindow *)(this - 12);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v7);
  VisibleApp = CFallbackWindow::_GetVisibleApp(v2, (struct IImmersiveApplication **)AddressOf);
  ppvOut = 0LL;
  if ( VisibleApp < 0 )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    if ( IUnknown_QueryService(
           *(this - 10),
           (const GUID *const)&SID_ImmersiveLauncher,
           &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
           &ppvOut) >= 0 )
      (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 24LL))(ppvOut, 4LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  }
  else
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
    if ( IUnknown_QueryService(
           *(this - 10),
           &IID_IImmersiveApplicationManager,
           &GUID_bf63999f_7411_40da_861c_df72c0ffee84,
           &ppvOut) >= 0 )
      (*(void (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)ppvOut + 64LL))(ppvOut, v7, 1LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  }
  UiaRaiseAutomationEvent((IRawElementProviderSimple *)((unsigned __int64)(this - 1) & -(__int64)(v2 != 0LL)), 20009);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
  return 0LL;
}

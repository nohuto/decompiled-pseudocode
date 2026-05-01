/*
 * XREFs of ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x18002029C
 * Callers:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18001E380 (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 *     ?OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z @ 0x180020390 (-OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x180028844 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?OnBackButtonUpdated@CImmersiveApp@@UEAAXXZ @ 0x1803C3160 (-OnBackButtonUpdated@CImmersiveApp@@UEAAXXZ.c)
 *     ?_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z @ 0x1803C557C (-_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::_UpdateWindowTitleAndButtons(
        int (__fastcall ***this)(CImmersiveApp *, GUID *, __int64 *))
{
  int (__fastcall *v2)(CImmersiveApp *, GUID *, __int64 *); // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v2 = **this;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v3);
  if ( v2((CImmersiveApp *)this, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v3) >= 0 )
    (*((void (__fastcall **)(int (__fastcall **)(CImmersiveApp *, GUID *, __int64 *), __int64))*this[55] + 23))(
      this[55],
      v3);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v3);
}

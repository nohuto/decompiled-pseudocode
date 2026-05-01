/*
 * XREFs of ?_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z @ 0x1801B7850
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800FB980 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18000E474 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::_RecoverApplicationViews(
        CApplicationManager *this,
        struct IViewEventDispatcherCrashRecovery *a2)
{
  int (__fastcall *v4)(struct IViewEventDispatcherCrashRecovery *, _QWORD, __int64 *); // rbx
  unsigned int i; // esi
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, _QWORD, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rdi
  unsigned int v8; // [rsp+60h] [rbp+30h] BYREF
  __int64 v9; // [rsp+68h] [rbp+38h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v10; // [rsp+70h] [rbp+40h] BYREF

  v9 = 0LL;
  v4 = *(int (__fastcall **)(struct IViewEventDispatcherCrashRecovery *, _QWORD, __int64 *))(*(_QWORD *)a2 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  if ( v4(a2, *((_QWORD *)this + 103), &v9) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 24LL))(v9, &v8) >= 0 )
  {
    for ( i = 0; i < v8; ++i )
    {
      v10 = 0LL;
      v6 = v9;
      v7 = *(int (__fastcall **)(__int64, _QWORD, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v9 + 32LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
      if ( v7(v6, i, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v10) >= 0 )
        CApplicationManager::_HandleViewCreation(
          this,
          (void (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, struct IImmersiveMonitor **))v10,
          0LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
}

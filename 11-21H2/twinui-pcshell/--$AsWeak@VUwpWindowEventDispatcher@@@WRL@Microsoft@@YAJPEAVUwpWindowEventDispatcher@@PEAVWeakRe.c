/*
 * XREFs of ??$AsWeak@VUwpWindowEventDispatcher@@@WRL@Microsoft@@YAJPEAVUwpWindowEventDispatcher@@PEAVWeakRef@01@@Z @ 0x1803E8290
 * Callers:
 *     ?ApplyWindowingEnvironmentSettingsRequested@UwpWindowEventDispatcher@@UEAAJPEAUIApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803EBF70 (-ApplyWindowingEnvironmentSettingsRequested@UwpWindowEventDispatcher@@UEAAJPEAUIApplyWindowingEn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIWeakReferenceSource@@UIUwpWindowEventDispatcherInternal@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@UIWindowDispatcherConnectedStandby@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803ED000 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIViewEve_ea_1803ED000.c)
 */

__int64 __fastcall Microsoft::WRL::AsWeak<UwpWindowEventDispatcher>(__int64 a1, __int64 *a2)
{
  _DWORD *v4; // rcx
  __int64 v5; // rcx
  int CanCastTo; // edi
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  if ( InlineIsEqualGUID(
         &_uuidof__AUIWeakReferenceSource_Details_Platform__,
         &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,IWeakReferenceSource,IUwpWindowEventDispatcherInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,IWindowDispatcherConnectedStandby,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection>,Microsoft::WRL::FtmBase>::CanCastTo(
                  a1,
                  v5,
                  &v11);
    a1 = v11;
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  }
  if ( CanCastTo < 0 )
  {
    if ( a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    return (unsigned int)CanCastTo;
  }
  v10 = 0LL;
  CanCastTo = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, &v10);
  if ( CanCastTo < 0 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    return (unsigned int)CanCastTo;
  }
  v8 = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = 0LL;
  v9 = *a2;
  *a2 = v8;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return 0LL;
}

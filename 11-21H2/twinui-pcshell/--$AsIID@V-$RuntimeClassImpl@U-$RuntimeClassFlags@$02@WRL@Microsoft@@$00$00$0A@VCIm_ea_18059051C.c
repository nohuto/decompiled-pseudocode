/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UISnapComponentConfiguration@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UISnapComponentConfiguration@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18059051C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UISnapComponentConfiguration@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805957E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1805957E0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VCImmersiveShellComponentWithGITSite@@UIWeakReferenceSource@@UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UISnapComponentConfiguration@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18059260C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspect_ea_18059260C.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ISnapComponent,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,ISnapComponentConfiguration,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  int CanCastTo; // edi

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v5 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    return 0LL;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,CImmersiveShellComponentWithGITSite,IWeakReferenceSource,ISnapComponent,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,ISnapComponentConfiguration,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>::CanCastTo(
                  v6,
                  v7);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)CanCastTo;
  }
}

/*
 * XREFs of ?QueryInterface@CShellSnapComponent@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007FB50
 * Callers:
 *     ?QueryInterface@CShellSnapComponent@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020EF90 (-QueryInterface@CShellSnapComponent@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020EFB0 (-QueryInterface@CShellSnapComponent@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020EFD0 (-QueryInterface@CShellSnapComponent@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020EFF0 (-QueryInterface@CShellSnapComponent@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020F010 (-QueryInterface@CShellSnapComponent@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020F030 (-QueryInterface@CShellSnapComponent@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020F050 (-QueryInterface@CShellSnapComponent@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020F070 (-QueryInterface@CShellSnapComponent@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020F090 (-QueryInterface@CShellSnapComponent@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020F0B0 (-QueryInterface@CShellSnapComponent@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020F0D0 (-QueryInterface@CShellSnapComponent@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020F0F0 (-QueryInterface@CShellSnapComponent@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020F110 (-QueryInterface@CShellSnapComponent@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020F130 (-QueryInterface@CShellSnapComponent@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WMI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020F150 (-QueryInterface@CShellSnapComponent@@WMI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007FED0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UISnapComponentConfiguration@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180080860 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UISnapComponent@@UISnap.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CShellSnapComponent::QueryInterface(CShellSnapComponent *this, struct _GUID *a2, void **a3)
{
  _DWORD *v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // r11
  _DWORD *v7; // rdx
  _DWORD *v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // r11
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v6 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( InlineIsEqualGUID(v8, v7) )
    goto LABEL_11;
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::CanCastTo(
                v9 + 8,
                a2);
  if ( CanCastTo != -2147467262 )
    goto LABEL_7;
  if ( InlineIsEqualGUID(a2, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
LABEL_11:
    *v10 = v9;
    CanCastTo = 0;
    goto LABEL_9;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISnapComponent,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,ISnapComponentConfiguration,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>::CanCastTo(
                v9 + 8,
                a2,
                v10);
LABEL_7:
  if ( CanCastTo >= 0 )
LABEL_9:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 8LL))(*v10);
  return (unsigned int)CanCastTo;
}

/*
 * XREFs of ?QueryInterface@CShellSnapComponent@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C9F60
 * Callers:
 *     ?QueryInterface@CShellSnapComponent@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB280 (-QueryInterface@CShellSnapComponent@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB2A0 (-QueryInterface@CShellSnapComponent@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB2C0 (-QueryInterface@CShellSnapComponent@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB2E0 (-QueryInterface@CShellSnapComponent@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB300 (-QueryInterface@CShellSnapComponent@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB320 (-QueryInterface@CShellSnapComponent@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB340 (-QueryInterface@CShellSnapComponent@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB360 (-QueryInterface@CShellSnapComponent@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB380 (-QueryInterface@CShellSnapComponent@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB3A0 (-QueryInterface@CShellSnapComponent@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB3C0 (-QueryInterface@CShellSnapComponent@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB3E0 (-QueryInterface@CShellSnapComponent@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB400 (-QueryInterface@CShellSnapComponent@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB420 (-QueryInterface@CShellSnapComponent@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CB520 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1800CB520.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CBBA0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CShellSnapComponent::QueryInterface(CShellSnapComponent *this, const struct _GUID *a2, void **a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  __int64 v10; // r11
  __int64 v11; // rdi
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( (unsigned int)InlineIsEqualGUID(v7, v6) )
  {
    *v8 = v9;
    CanCastTo = 0;
LABEL_8:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
    return (unsigned int)CanCastTo;
  }
  v11 = v9 + 8;
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::CanCastTo(
                v9 + 8,
                v10);
  if ( CanCastTo == -2147467262 )
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ISnapComponent,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>::CanCastTo(v11 + 104);
  if ( CanCastTo >= 0 )
    goto LABEL_8;
  return (unsigned int)CanCastTo;
}

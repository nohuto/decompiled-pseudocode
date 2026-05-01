/*
 * XREFs of ?QueryInterface@CToastCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180084AC0
 * Callers:
 *     ?QueryInterface@CToastCenterExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F36F0 (-QueryInterface@CToastCenterExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CToastCenterExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F3710 (-QueryInterface@CToastCenterExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CToastCenterExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F3730 (-QueryInterface@CToastCenterExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CToastCenterExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F3750 (-QueryInterface@CToastCenterExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CToastCenterExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F3770 (-QueryInterface@CToastCenterExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CToastCenterExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F3790 (-QueryInterface@CToastCenterExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CToastCenterExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F37B0 (-QueryInterface@CToastCenterExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CToastCenterExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F37D0 (-QueryInterface@CToastCenterExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@Windows@@UIHolographicExperienceExtension@Holographic@Shell@Internal@9@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18012EDCC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveSessionIdleN.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CToastCenterExperienceManager::QueryInterface(
        CToastCenterExperienceManager *this,
        struct _GUID *a2,
        void **a3)
{
  _DWORD *v4; // rcx
  void *v5; // r8
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  char *v8; // r8
  _DWORD *v9; // rcx
  __int64 v10; // r9
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a3 = v5;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( InlineIsEqualGUID(v6, &GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861)
    || InlineIsEqualGUID(v7, &_uuidof__AUIWeakReferenceSource_Details_Platform__)
    || InlineIsEqualGUID(v9, &GUID_8b6ebc6f_30f2_401b_a050_9f0b7f35f35d) )
  {
    *a3 = v8;
    CanCastTo = 0;
    goto LABEL_9;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension,IInputHostLayoutChanges>::CanCastTo(
                v8 + 8,
                v10,
                a3);
  if ( CanCastTo >= 0 )
LABEL_9:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)CanCastTo;
}

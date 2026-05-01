/*
 * XREFs of ?QueryInterface@CJumpViewExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E640
 * Callers:
 *     ?QueryInterface@CJumpViewExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F48E0 (-QueryInterface@CJumpViewExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CJumpViewExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F4900 (-QueryInterface@CJumpViewExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CJumpViewExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F4920 (-QueryInterface@CJumpViewExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CJumpViewExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F4940 (-QueryInterface@CJumpViewExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CJumpViewExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F4960 (-QueryInterface@CJumpViewExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIClosable@Foundation@Windows@@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007D348 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIClosable_ea_18007D348.c)
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CJumpViewExperienceManager::QueryInterface(
        CJumpViewExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r11
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r11
  __int64 v10; // rcx
  _DWORD *v11; // r9
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_95fc070d_cc20_44e5_8c0d_75ed8f7100b0)
    || (unsigned int)InlineIsEqualGUID(v7, &_uuidof__AUIWeakReferenceSource_Details_Platform__)
    || (unsigned int)InlineIsEqualGUID(v10, &GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270) )
  {
    *v8 = v9;
    CanCastTo = 0;
    goto LABEL_9;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::CanCastTo(
                v9 + 8,
                v11,
                v8);
  if ( CanCastTo >= 0 )
LABEL_9:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
  return (unsigned int)CanCastTo;
}

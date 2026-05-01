/*
 * XREFs of ?QueryInterface@CStartExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180082C50
 * Callers:
 *     ?QueryInterface@CStartExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F44E0 (-QueryInterface@CStartExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F4500 (-QueryInterface@CStartExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F4520 (-QueryInterface@CStartExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F4540 (-QueryInterface@CStartExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F4560 (-QueryInterface@CStartExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F4580 (-QueryInterface@CStartExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F45A0 (-QueryInterface@CStartExperienceManager@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@8@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007A28C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIStartExperienceManage.c)
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStartExperienceManager::QueryInterface(CStartExperienceManager *this, struct _GUID *a2, void **a3)
{
  _DWORD *v4; // rcx
  void *v5; // r8
  _DWORD *v6; // rdx
  _DWORD *v7; // rcx
  char *v8; // r8
  _DWORD *v9; // r9
  _DWORD *v10; // r9
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a3 = v5;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( InlineIsEqualGUID(v7, v6)
    || (v8 += 8, *v9 == -62389853)
    && v9[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && v9[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && v9[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4]
    || InlineIsEqualGUID(v9, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    *a3 = v8;
    CanCastTo = 0;
    goto LABEL_13;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::CanCastTo(
                (__int64)(v8 + 8),
                v10,
                a3);
  if ( CanCastTo >= 0 )
LABEL_13:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)CanCastTo;
}

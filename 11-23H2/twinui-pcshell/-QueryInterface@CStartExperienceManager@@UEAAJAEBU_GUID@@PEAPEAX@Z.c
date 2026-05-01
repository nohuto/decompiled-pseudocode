/*
 * XREFs of ?QueryInterface@CStartExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CE370
 * Callers:
 *     ?QueryInterface@CStartExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180297E60 (-QueryInterface@CStartExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180297E80 (-QueryInterface@CStartExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180297EA0 (-QueryInterface@CStartExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180297EC0 (-QueryInterface@CStartExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180297EE0 (-QueryInterface@CStartExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180297F00 (-QueryInterface@CStartExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180297F20 (-QueryInterface@CStartExperienceManager@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CE294 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1800CE294.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStartExperienceManager::QueryInterface(CStartExperienceManager *this, struct _GUID *a2, void **a3)
{
  _DWORD *v4; // rcx
  void *v5; // r8
  _DWORD *v6; // rdx
  _DWORD *v7; // rcx
  __int64 v8; // r8
  _DWORD *v9; // r9
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a3 = v5;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v7, v6) )
    {
      *a3 = (void *)v8;
      goto LABEL_12;
    }
    if ( *v9 == -62389853
      && v9[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
      && v9[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
      && v9[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
    {
      *a3 = (void *)(v8 + 8);
LABEL_12:
      CanCastTo = 0;
      goto LABEL_13;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::CanCastTo(
                  v8 + 32,
                  v9,
                  a3);
    if ( CanCastTo >= 0 )
LABEL_13:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  return (unsigned int)CanCastTo;
}

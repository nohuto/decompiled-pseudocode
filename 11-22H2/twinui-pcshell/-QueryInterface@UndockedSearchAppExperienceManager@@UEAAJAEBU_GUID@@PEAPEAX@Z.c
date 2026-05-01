/*
 * XREFs of ?QueryInterface@UndockedSearchAppExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CFFE0
 * Callers:
 *     ?QueryInterface@UndockedSearchAppExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180299370 (-QueryInterface@UndockedSearchAppExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@UndockedSearchAppExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180299390 (-QueryInterface@UndockedSearchAppExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@UndockedSearchAppExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802993B0 (-QueryInterface@UndockedSearchAppExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIWeakReferenceSource@@UIInitializeTrustedComponentForegroundControl@@VIDeferralMessage@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801692E0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UICortanaExperienceMan.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UndockedSearchAppExperienceManager::QueryInterface(
        UndockedSearchAppExperienceManager *this,
        struct _GUID *a2,
        UndockedSearchAppExperienceManager **a3)
{
  UndockedSearchAppExperienceManager *v4; // r11
  __int64 v5; // r9
  int CanCastTo; // ebx

  v4 = this;
  *a3 = 0LL;
  if ( *(_QWORD *)&a2->Data1 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || InlineIsEqualGUID(a2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a3 = v4;
    (*(void (__fastcall **)(UndockedSearchAppExperienceManager *))(*(_QWORD *)v4 + 8LL))(v4);
    return 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,IWeakReferenceSource,IInitializeTrustedComponentForegroundControl,IDeferralMessage>::CanCastTo(
                  v4,
                  v5);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(UndockedSearchAppExperienceManager *))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  return (unsigned int)CanCastTo;
}

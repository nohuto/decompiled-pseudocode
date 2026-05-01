/*
 * XREFs of ?QueryInterface@UndockedSearchAppExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006C230
 * Callers:
 *     ??$MakeAndInitialize@VUndockedSearchAppExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@AEAV?$ComPtr@VIMiniSearch@@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@AEAV?$ComPtr@VIMiniSearch@@@12@@Z @ 0x180199998 (--$MakeAndInitialize@VUndockedSearchAppExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider.c)
 *     ?QueryInterface@UndockedSearchAppExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F5B50 (-QueryInterface@UndockedSearchAppExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@UndockedSearchAppExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F5B70 (-QueryInterface@UndockedSearchAppExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@UndockedSearchAppExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F5B90 (-QueryInterface@UndockedSearchAppExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIWeakReferenceSource@@UIInitializeTrustedComponentForegroundControl@@VIDeferralMessage@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18006C2E8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UICortanaExperienceMan.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UndockedSearchAppExperienceManager::QueryInterface(
        UndockedSearchAppExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  int CanCastTo; // edi
  _QWORD *v7; // r8

  v3 = 0;
  *a3 = 0LL;
  if ( a2->Data1 )
  {
    if ( a2->Data1 != -1350114592
      || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      goto LABEL_9;
    }
    v4 = *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4];
  }
  else
  {
    if ( *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      goto LABEL_9;
    }
    v4 = *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4];
  }
  if ( *(_DWORD *)&a2->Data4[4] == v4 )
  {
    *a3 = this;
    (*(void (__fastcall **)(UndockedSearchAppExperienceManager *))(*(_QWORD *)this + 8LL))(this);
    return v3;
  }
LABEL_9:
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,IWeakReferenceSource,IInitializeTrustedComponentForegroundControl,IDeferralMessage>::CanCastTo(
                this,
                a2,
                a3);
  if ( CanCastTo >= 0 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
  return (unsigned int)CanCastTo;
}

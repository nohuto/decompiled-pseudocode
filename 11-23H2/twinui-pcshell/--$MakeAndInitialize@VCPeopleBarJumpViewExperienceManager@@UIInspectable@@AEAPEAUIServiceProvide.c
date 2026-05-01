/*
 * XREFs of ??$MakeAndInitialize@VCPeopleBarJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180134874
 * Callers:
 *     ?GetExperienceManager@PeopleBarJumpViewExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180134170 (-GetExperienceManager@PeopleBarJumpViewExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAP.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800DCF8C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpVi.c)
 *     ?RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18010661C (-RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ??0CPeopleBarJumpViewExperienceManager@@QEAA@XZ @ 0x1801356FC (--0CPeopleBarJumpViewExperienceManager@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141810 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpVie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPeopleBarJumpViewExperienceManager,IInspectable,IServiceProvider * &>(
        _QWORD *a1,
        struct IServiceProvider **a2)
{
  CPeopleBarJumpViewExperienceManager *v4; // rax
  CPeopleBarJumpViewExperienceManager *v5; // rdi
  int v6; // esi

  *a1 = 0LL;
  v4 = (CPeopleBarJumpViewExperienceManager *)operator new(0x1B0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = CPeopleBarJumpViewExperienceManager::CPeopleBarJumpViewExperienceManager(v4);
    v6 = CPeopleBarJumpViewExperienceManager::RuntimeClassInitialize(v5, *a2);
    if ( v6 >= 0 )
      v6 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>>(
             (__int64)v5,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             a1);
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::Release(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}

/*
 * XREFs of ??$MakeAndInitialize@VSearchAppExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18038938C
 * Callers:
 *     ?GetExperienceManager@SearchAppExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180389D50 (-GetExperienceManager@SearchAppExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInsp.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18022C740 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICor_ea_18022C740.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIInitializeTrustedComponentForegroundControl@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180355960 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperien.c)
 *     ??0SearchAppExperienceManager@@QEAA@XZ @ 0x18038973C (--0SearchAppExperienceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18038A62C (-RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SearchAppExperienceManager,IInspectable,IServiceProvider * &>(
        _QWORD *a1,
        struct IServiceProvider **a2)
{
  SearchAppExperienceManager *v4; // rax
  int v5; // esi
  SearchAppExperienceManager *v6; // rdi

  *a1 = 0LL;
  v4 = (SearchAppExperienceManager *)operator new(0x228uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = SearchAppExperienceManager::SearchAppExperienceManager(v4);
    v5 = SearchAppExperienceManager::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
      v5 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>>(
             (__int64)v6,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             a1);
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::Release((__int64)v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}

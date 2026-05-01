/*
 * XREFs of ??$MakeAndInitialize@VCPeopleBarFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801347CC
 * Callers:
 *     ?GetExperienceManager@PeopleBarFlyoutExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180134130 (-GetExperienceManager@PeopleBarFlyoutExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEA.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarFlyoutExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@UIImmersiveWindowMessageNotification@@UIImmersiveSessionIdleNotification@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarFlyoutExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@UIImmersiveWindowMessageNotification@@UIImmersiveSessionIdleNotification@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800DCAE0 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarFlyout.c)
 *     ?RuntimeClassInitialize@CPeopleBarFlyoutExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800E5D18 (-RuntimeClassInitialize@CPeopleBarFlyoutExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ??0CPeopleBarFlyoutExperienceManager@@QEAA@XZ @ 0x1801354B8 (--0CPeopleBarFlyoutExperienceManager@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarFlyoutExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@UIImmersiveWindowMessageNotification@@UIImmersiveSessionIdleNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141A70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarFlyoutE.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPeopleBarFlyoutExperienceManager,IInspectable,IServiceProvider * &>(
        _QWORD *a1,
        struct IServiceProvider **a2)
{
  CPeopleBarFlyoutExperienceManager *v4; // rax
  CPeopleBarFlyoutExperienceManager *v5; // rdi
  int v6; // esi

  *a1 = 0LL;
  v4 = (CPeopleBarFlyoutExperienceManager *)operator new(0x2C8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = CPeopleBarFlyoutExperienceManager::CPeopleBarFlyoutExperienceManager(v4);
    v6 = CPeopleBarFlyoutExperienceManager::RuntimeClassInitialize(v5, *a2);
    if ( v6 >= 0 )
      v6 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarFlyoutExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>>(
             (__int64)v5,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             a1);
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarFlyoutExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>::Release(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}

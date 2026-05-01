/*
 * XREFs of ??$MakeAndInitialize@VCScreenClippingExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1800B8624
 * Callers:
 *     ?GetExperienceManager@ScreenClippingExperienceManagerFactory@@EEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800B8840 (-GetExperienceManager@ScreenClippingExperienceManagerFactory@@EEAAJPEAUIServiceProvider@@PEAPEAU.c)
 * Callees:
 *     ?RuntimeClassInitialize@CScreenClippingExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800B8560 (-RuntimeClassInitialize@CScreenClippingExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ??0CScreenClippingExperienceManager@@QEAA@XZ @ 0x1800B86CC (--0CScreenClippingExperienceManager@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIScreenClippingExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EE710 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIScreenClippingEx.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIScreenClippingExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIScreenClippingExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIImmersiveWindowMessageNotification@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18012EBA8 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIScreenClippingE.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CScreenClippingExperienceManager,IInspectable,IServiceProvider * &>(
        _QWORD *a1,
        struct IServiceProvider **a2)
{
  CScreenClippingExperienceManager *v4; // rax
  CScreenClippingExperienceManager *v5; // rdi
  int v6; // esi

  *a1 = 0LL;
  v4 = (CScreenClippingExperienceManager *)operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = CScreenClippingExperienceManager::CScreenClippingExperienceManager(v4);
    v6 = CScreenClippingExperienceManager::RuntimeClassInitialize(v5, *a2);
    if ( v6 >= 0 )
      v6 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IScreenClippingExperienceManager,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification>>(
             v5,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             a1);
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IScreenClippingExperienceManager,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification>::Release(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}

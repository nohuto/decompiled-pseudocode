/*
 * XREFs of ??$MakeAndInitialize@VUndockedSearchAppExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@AEAV?$ComPtr@VIMiniSearch@@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@AEAV?$ComPtr@VIMiniSearch@@@12@@Z @ 0x1801712CC
 * Callers:
 *     ?GetExperienceManager@UndockedSearchAppExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180171260 (-GetExperienceManager@UndockedSearchAppExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAP.c)
 * Callees:
 *     ?Release@UndockedSearchAppExperienceManager@@UEAAKXZ @ 0x180142220 (-Release@UndockedSearchAppExperienceManager@@UEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIInitializeTrustedComponentForegroundControl@@VIDeferralMessage@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIInitializeTrustedComponentForegroundControl@@VIDeferralMessage@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180169244 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperien.c)
 *     ??0UndockedSearchAppExperienceManager@@QEAA@XZ @ 0x1801713B4 (--0UndockedSearchAppExperienceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV?$ComPtr@VIMiniSearch@@@WRL@Microsoft@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@4V?$unique_ptr@VISearchAppActivator@@U?$default_delete@VISearchAppActivator@@@wistd@@@wistd@@@Z @ 0x1801716F8 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV-$Com.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<UndockedSearchAppExperienceManager,IInspectable,IServiceProvider * &,Microsoft::WRL::ComPtr<IMiniSearch> &>(
        _QWORD *a1)
{
  UndockedSearchAppExperienceManager *v2; // rax
  UndockedSearchAppExperienceManager *v3; // rax
  UndockedSearchAppExperienceManager *v4; // rdi
  int v5; // ebx
  __int64 v7; // [rsp+40h] [rbp-38h] BYREF
  __int64 v8[6]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v9; // [rsp+80h] [rbp+8h] BYREF
  __int64 v10; // [rsp+98h] [rbp+20h] BYREF

  *a1 = 0LL;
  v2 = (UndockedSearchAppExperienceManager *)operator new(0x390uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = UndockedSearchAppExperienceManager::UndockedSearchAppExperienceManager(v2);
    v9 = 0LL;
    v4 = v3;
    v10 = 0LL;
    v7 = 0LL;
    v8[0] = 0LL;
    v8[1] = 0LL;
    v5 = UndockedSearchAppExperienceManager::RuntimeClassInitialize(
           v3,
           (__int64)v8,
           (__int64)&v7,
           (__int64)&v10,
           (__int64)&v9);
    if ( v5 >= 0 )
      v5 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,IInitializeTrustedComponentForegroundControl,IDeferralMessage>>(
             (__int64)v4,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             a1);
    if ( v4 )
      UndockedSearchAppExperienceManager::Release(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}

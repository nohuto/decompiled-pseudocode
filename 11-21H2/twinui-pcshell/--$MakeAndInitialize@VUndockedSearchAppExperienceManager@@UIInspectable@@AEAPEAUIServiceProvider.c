/*
 * XREFs of ??$MakeAndInitialize@VUndockedSearchAppExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@AEAV?$ComPtr@VIMiniSearch@@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@AEAV?$ComPtr@VIMiniSearch@@@12@@Z @ 0x180199998
 * Callers:
 *     ?GetExperienceManager@UndockedSearchAppExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18005D5B0 (-GetExperienceManager@UndockedSearchAppExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAP.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?QueryInterface@UndockedSearchAppExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006C230 (-QueryInterface@UndockedSearchAppExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0UndockedSearchAppExperienceManager@@QEAA@XZ @ 0x1801586E0 (--0UndockedSearchAppExperienceManager@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIInitializeTrustedComponentForegroundControl@@VIDeferralMessage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017E290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienc.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV?$ComPtr@VIMiniSearch@@@WRL@Microsoft@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@4@Z @ 0x1801A0C20 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV-$Com.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<UndockedSearchAppExperienceManager,IInspectable,IServiceProvider * &,Microsoft::WRL::ComPtr<IMiniSearch> &>(
        void **a1)
{
  UndockedSearchAppExperienceManager *v2; // rax
  int Interface; // ebx
  UndockedSearchAppExperienceManager *v4; // rax
  UndockedSearchAppExperienceManager *v5; // rdi
  DWORD v7[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v8[4]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF
  __int64 v10; // [rsp+88h] [rbp+20h] BYREF

  *a1 = 0LL;
  v2 = (UndockedSearchAppExperienceManager *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = UndockedSearchAppExperienceManager::UndockedSearchAppExperienceManager(v2);
    v10 = 0LL;
    v5 = v4;
    *(_QWORD *)v7 = 0LL;
    v8[0] = 0LL;
    v9 = 0LL;
    Interface = UndockedSearchAppExperienceManager::RuntimeClassInitialize(v4, (__int64)v8, (DWORD)v7, (__int64)&v10);
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v9);
    if ( Interface >= 0 )
      Interface = UndockedSearchAppExperienceManager::QueryInterface(v5, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a1);
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,IInitializeTrustedComponentForegroundControl,IDeferralMessage>::Release((__int64)v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)Interface;
}

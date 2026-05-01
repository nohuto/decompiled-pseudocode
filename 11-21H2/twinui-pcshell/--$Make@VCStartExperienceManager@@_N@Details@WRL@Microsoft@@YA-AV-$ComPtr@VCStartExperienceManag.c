/*
 * XREFs of ??$Make@VCStartExperienceManager@@_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCStartExperienceManager@@@12@$$QEA_N@Z @ 0x180171D84
 * Callers:
 *     ?GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180171CC0 (-GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspecta.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EFAA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSit.c)
 *     ??0CStartExperienceManager@@QEAA@_N@Z @ 0x18010024C (--0CStartExperienceManager@@QEAA@_N@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall Microsoft::WRL::Details::Make<CStartExperienceManager,bool>(__int64 *a1)
{
  CStartExperienceManager *v2; // rax
  CStartExperienceManager *v3; // rdi

  *a1 = 0LL;
  v2 = (CStartExperienceManager *)operator new(0x2C8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = CStartExperienceManager::CStartExperienceManager(v2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::Release(*a1);
    *a1 = (__int64)v3;
  }
  return a1;
}

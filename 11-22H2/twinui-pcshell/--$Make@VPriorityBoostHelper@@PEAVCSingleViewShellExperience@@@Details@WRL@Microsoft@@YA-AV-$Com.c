/*
 * XREFs of ??$Make@VPriorityBoostHelper@@PEAVCSingleViewShellExperience@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VPriorityBoostHelper@@@12@$$QEAPEAVCSingleViewShellExperience@@@Z @ 0x180106D98
 * Callers:
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801068D4 (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??0PriorityBoostHelper@@QEAA@PEAVCSingleViewShellExperience@@@Z @ 0x180106DF8 (--0PriorityBoostHelper@@QEAA@PEAVCSingleViewShellExperience@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceManager@Experience@Shell@Internal@Windows@@UIExperienceManagerPriorityManipulator@5678@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18019C630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceMa.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

PriorityBoostHelper **__fastcall Microsoft::WRL::Details::Make<PriorityBoostHelper,CSingleViewShellExperience *>(
        PriorityBoostHelper **a1,
        struct CSingleViewShellExperience **a2)
{
  PriorityBoostHelper *v4; // rax
  PriorityBoostHelper *v5; // rdi

  *a1 = 0LL;
  v4 = (PriorityBoostHelper *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = PriorityBoostHelper::PriorityBoostHelper(v4, *a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IHostExperienceManager,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>::Release();
    *a1 = v5;
  }
  return a1;
}

/*
 * XREFs of ??$make_unique_nothrow@VCCortanaWNFService@Cortana@TwinUI@@$$V@wil@@YA?AV?$unique_ptr@VCCortanaWNFService@Cortana@TwinUI@@U?$default_delete@VCCortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@XZ @ 0x180476B34
 * Callers:
 *     ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x18047C270 (-RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAp.c)
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1804872D4 (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExp.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CCortanaWNFService@Cortana@TwinUI@@QEAA@XZ @ 0x180488700 (--0CCortanaWNFService@Cortana@TwinUI@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::make_unique_nothrow<TwinUI::Cortana::CCortanaWNFService,>(__int64 *a1)
{
  __int64 v2; // rbx
  TwinUI::Cortana::CCortanaWNFService *v3; // rax

  v2 = 0LL;
  v3 = (TwinUI::Cortana::CCortanaWNFService *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
    v2 = TwinUI::Cortana::CCortanaWNFService::CCortanaWNFService(v3);
  *a1 = v2;
  return a1;
}

/*
 * XREFs of ??$make_unique_nothrow@VCUndockedSearchAppExperienceManagerConfig@@AEBK@wil@@YA?AV?$unique_ptr@VCUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VCUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@AEBK@Z @ 0x180171E30
 * Callers:
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV?$ComPtr@VIMiniSearch@@@WRL@Microsoft@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@4V?$unique_ptr@VISearchAppActivator@@U?$default_delete@VISearchAppActivator@@@wistd@@@wistd@@@Z @ 0x1801716F8 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV-$Com.c)
 * Callees:
 *     ??0CUndockedSearchAppExperienceManagerConfig@@QEAA@K@Z @ 0x180171E90 (--0CUndockedSearchAppExperienceManagerConfig@@QEAA@K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
CUndockedSearchAppExperienceManagerConfig **__fastcall wil::make_unique_nothrow<CUndockedSearchAppExperienceManagerConfig,unsigned long const &>(
        CUndockedSearchAppExperienceManagerConfig **a1,
        unsigned int *a2)
{
  CUndockedSearchAppExperienceManagerConfig *v4; // rdi
  CUndockedSearchAppExperienceManagerConfig *v5; // rax

  v4 = 0LL;
  v5 = (CUndockedSearchAppExperienceManagerConfig *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = CUndockedSearchAppExperienceManagerConfig::CUndockedSearchAppExperienceManagerConfig(v5, *a2);
  *a1 = v4;
  return a1;
}

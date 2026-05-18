/*
 * XREFs of ?RenderPerformanceStats@Engine@1Spectre@@IEAAXXZ @ 0x180036478
 * Callers:
 *     ?FrameTick@Engine@1Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@@Z @ 0x180033C20 (-FrameTick@Engine@1Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?GetSymbolManager@Engine@1Spectre@@QEAAAEAVISymbolManager@12@XZ @ 0x180034800 (-GetSymbolManager@Engine@1Spectre@@QEAAAEAVISymbolManager@12@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::Engine::RenderPerformanceStats(Spectre::Engine::Engine *this)
{
  struct Spectre::Utils::IConfigurationManager *Configuration; // rax
  Spectre::Engine::Engine *v2; // rcx

  Configuration = Spectre::Engine::Engine::GetConfiguration(this, 1);
  if ( (*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kRenderer_DisplayPerformanceStats,
         0LL) )
  {
    Spectre::Engine::Engine::GetSymbolManager(v2);
  }
}

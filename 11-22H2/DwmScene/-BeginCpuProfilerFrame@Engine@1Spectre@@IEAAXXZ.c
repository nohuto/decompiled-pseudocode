/*
 * XREFs of ?BeginCpuProfilerFrame@Engine@1Spectre@@IEAAXXZ @ 0x1800329B4
 * Callers:
 *     ?FrameTick@Engine@1Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@@Z @ 0x180033C20 (-FrameTick@Engine@1Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?GetSymbolManager@Engine@1Spectre@@QEAAAEAVISymbolManager@12@XZ @ 0x180034800 (-GetSymbolManager@Engine@1Spectre@@QEAAAEAVISymbolManager@12@XZ.c)
 *     ?SetEnabled@CpuProfiler@Engine@Spectre@@QEAAX_N@Z @ 0x1800A047C (-SetEnabled@CpuProfiler@Engine@Spectre@@QEAAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::Engine::BeginCpuProfilerFrame(Spectre::Engine::Engine *this)
{
  struct Spectre::Utils::IConfigurationManager *Configuration; // rdi
  char v3; // bl
  char v4; // al
  Spectre::Engine::Engine *v5; // rcx

  Configuration = Spectre::Engine::Engine::GetConfiguration(this, 1);
  v3 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                                 + 64LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kCpuProfiling_Enabled,
         0LL);
  v4 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                                 + 64LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kCpuProfiling_DisplayFrameTimings,
         0LL);
  if ( v3 && v4 )
    Spectre::Engine::Engine::GetSymbolManager(v5);
  Spectre::Engine::CpuProfiler::SetEnabled(*((Spectre::Engine::CpuProfiler **)this + 121), 0);
  Spectre::Engine::CpuProfiler::BeginFrame(*((Spectre::Engine::CpuProfiler **)this + 121), *((_QWORD *)this + 118));
}

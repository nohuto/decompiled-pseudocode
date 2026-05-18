/*
 * XREFs of ?OnInitialize@ViewerEngine@Engine@Spectre@@MEAAXAEBUEngineDescription@23@@Z @ 0x180066FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?OnInitialize@Engine@1Spectre@@MEAAXAEBUEngineDescription@12@@Z @ 0x1800352A0 (-OnInitialize@Engine@1Spectre@@MEAAXAEBUEngineDescription@12@@Z.c)
 *     ?RegisterCameraPropsChangedCallback@ViewerEngine@Engine@Spectre@@AEAAXXZ @ 0x18006790C (-RegisterCameraPropsChangedCallback@ViewerEngine@Engine@Spectre@@AEAAXXZ.c)
 *     ?RegisterModelPropsChangedCallback@ViewerEngine@Engine@Spectre@@AEAAXXZ @ 0x1800679E4 (-RegisterModelPropsChangedCallback@ViewerEngine@Engine@Spectre@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::ViewerEngine::OnInitialize(
        Spectre::Engine::ViewerEngine *this,
        const struct Spectre::Engine::EngineDescription *a2)
{
  struct Spectre::Utils::IConfigurationManager *Configuration; // rdi
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8

  Spectre::Engine::Engine::OnInitialize(this, a2);
  Configuration = Spectre::Engine::Engine::GetConfiguration(this, 1);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD, __int64))(*(_QWORD *)Configuration
                                                                                                  + 152LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kRenderer_Antialiasing,
    *((unsigned int *)this + 147),
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD, __int64))(*(_QWORD *)Configuration
                                                                                                  + 152LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kSkinnedAnimation_Behaviour,
    *((unsigned int *)this + 136),
    1LL);
  if ( *((_DWORD *)this + 166) == 3 )
  {
    (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
      Configuration,
      &Spectre::Engine::ConfigurationProperties::kRenderer_ClearColor_A,
      v4,
      1LL);
    (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
      Configuration,
      &Spectre::Engine::ConfigurationProperties::kRenderer_ClearColor_R,
      v5,
      1LL);
    (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
      Configuration,
      &Spectre::Engine::ConfigurationProperties::kRenderer_ClearColor_G,
      v6,
      1LL);
    (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
      Configuration,
      &Spectre::Engine::ConfigurationProperties::kRenderer_ClearColor_B,
      v7,
      1LL);
  }
  Spectre::Engine::ViewerEngine::RegisterModelPropsChangedCallback(this);
  Spectre::Engine::ViewerEngine::RegisterCameraPropsChangedCallback(this);
  Spectre::Engine::ViewerEngine::RegisterLightingCallback(this);
}

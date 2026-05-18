/*
 * XREFs of ?OnInitialize@Engine@1Spectre@@MEAAXAEBUEngineDescription@12@@Z @ 0x1800352A0
 * Callers:
 *     ?OnInitialize@ViewerEngine@Engine@Spectre@@MEAAXAEBUEngineDescription@23@@Z @ 0x180066FB0 (-OnInitialize@ViewerEngine@Engine@Spectre@@MEAAXAEBUEngineDescription@23@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CreateSceneStandardContent@Engine@1Spectre@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x180033324 (-CreateSceneStandardContent@Engine@1Spectre@@QEAA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?InitializeShaderManager@Engine@1Spectre@@IEAAXW4EShaderPlatform@12@@Z @ 0x180034A30 (-InitializeShaderManager@Engine@1Spectre@@IEAAXW4EShaderPlatform@12@@Z.c)
 *     ?DevicePlatformToShaderPlatform@Engine@Spectre@@YA?AW4EShaderPlatform@12@W4DevicePlatform@12@@Z @ 0x18004F950 (-DevicePlatformToShaderPlatform@Engine@Spectre@@YA-AW4EShaderPlatform@12@W4DevicePlatform@12@@Z.c)
 *     ?LoadDefaults@Configuration@Engine@Spectre@@YAXAEAVIConfigurationManager@Utils@3@W4LoadPolicy@453@@Z @ 0x1800748CC (-LoadDefaults@Configuration@Engine@Spectre@@YAXAEAVIConfigurationManager@Utils@3@W4LoadPolicy@45.c)
 */

void __fastcall Spectre::Engine::Engine::OnInitialize(
        Spectre::Engine::Engine *this,
        const struct Spectre::Engine::EngineDescription *a2)
{
  struct Spectre::Utils::IConfigurationManager *Configuration; // rax
  unsigned int v5; // eax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-10h]

  Configuration = Spectre::Engine::Engine::GetConfiguration(this, 1);
  Spectre::Engine::Configuration::LoadDefaults(Configuration, 1LL);
  *((_DWORD *)this + 174) = *((_DWORD *)a2 + 14);
  v5 = Spectre::Engine::DevicePlatformToShaderPlatform();
  Spectre::Engine::Engine::InitializeShaderManager(this, v5);
  Spectre::Engine::Engine::CreateSceneStandardContent((__int64)this, &v6);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
}

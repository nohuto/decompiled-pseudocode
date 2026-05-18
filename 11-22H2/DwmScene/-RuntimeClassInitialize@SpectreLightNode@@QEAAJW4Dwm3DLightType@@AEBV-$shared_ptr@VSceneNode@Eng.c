/*
 * XREFs of ?RuntimeClassInitialize@SpectreLightNode@@QEAAJW4Dwm3DLightType@@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18001278C
 * Callers:
 *     ??$MakeAndInitialize@VSpectreLightNode@@V1@AEAW4Dwm3DLightType@@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreLightNode@@AEAW4Dwm3DLightType@@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800163F0 (--$MakeAndInitialize@VSpectreLightNode@@V1@AEAW4Dwm3DLightType@@AEAV-$shared_ptr@VSceneNode@Engi.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$AddComponent@VLight@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VLight@Engine@Spectre@@@std@@XZ @ 0x180011E04 (--$AddComponent@VLight@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VLight@Eng.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?GetEngine@SceneNode@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18003BFC0 (-GetEngine@SceneNode@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?SetIntensityMode@Light@Engine@Spectre@@QEAAXW4EPhotometricQuantity@23@@Z @ 0x18004338C (-SetIntensityMode@Light@Engine@Spectre@@QEAAXW4EPhotometricQuantity@23@@Z.c)
 *     ?SetRenderPriority@Light@Engine@Spectre@@QEAAXH@Z @ 0x180043398 (-SetRenderPriority@Light@Engine@Spectre@@QEAAXH@Z.c)
 *     ?SetShadowEnabled@Light@Engine@Spectre@@QEAAX_N@Z @ 0x1800433A8 (-SetShadowEnabled@Light@Engine@Spectre@@QEAAX_N@Z.c)
 *     ?SetType@Light@Engine@Spectre@@QEAAXW4Type@123@@Z @ 0x1800433B4 (-SetType@Light@Engine@Spectre@@QEAAXW4Type@123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SpectreLightNode::RuntimeClassInitialize(__int64 a1, int a2, Spectre::Engine::SceneNode **a3)
{
  bool v6; // di
  int v7; // ebx
  unsigned int v8; // ebx
  Spectre::Engine::Engine *Engine; // rax
  struct Spectre::Utils::IConfigurationManager *Configuration; // rsi
  __int64 *v11; // rax
  Spectre::Engine::Light *v12; // rbx
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v15; // [rsp+28h] [rbp-10h]

  *(_DWORD *)(a1 + 48) = a2;
  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a1 + 16), a3);
  if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 )
  {
    v6 = 0;
    v7 = a2 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 != 1 )
        v8 = 0;
    }
    else
    {
      v8 = 2;
    }
    Engine = Spectre::Engine::SceneNode::GetEngine(*a3);
    Configuration = Spectre::Engine::Engine::GetConfiguration(Engine, 1);
    v11 = Spectre::Engine::SceneNode::AddComponent<Spectre::Engine::Light>(
            *(Spectre::Engine::SceneNode **)(a1 + 16),
            &v14);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 32), v11);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    Spectre::Engine::Light::SetType(*(_QWORD *)(a1 + 32), v8);
    Spectre::Engine::Light::SetRenderPriority(*(Spectre::Engine::Light **)(a1 + 32), 1000);
    *(_BYTE *)(*(_QWORD *)(a1 + 32) + 72LL) = 1;
    Spectre::Engine::Light::SetIntensityMode(*(_QWORD *)(a1 + 32), 3LL);
    v12 = *(Spectre::Engine::Light **)(a1 + 32);
    if ( (*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
           Configuration,
           &Spectre::Engine::ConfigurationProperties::kLighting_Light0_ShadowEnabled,
           0LL)
      || (*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
           Configuration,
           &Spectre::Engine::ConfigurationProperties::kLighting_Light1_ShadowEnabled,
           0LL)
      || (*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
           Configuration,
           &Spectre::Engine::ConfigurationProperties::kLighting_Light2_ShadowEnabled,
           0LL) )
    {
      v6 = 1;
    }
    Spectre::Engine::Light::SetShadowEnabled(v12, v6);
  }
  return 0LL;
}
